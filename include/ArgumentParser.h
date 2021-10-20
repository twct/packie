#ifndef __ARGUMENT_PARSER_H__
#define __ARGUMENT_PARSER_H__

#include <string>
#include <vector>

enum class ArgumentType
{
    Positional
};

class Argument
{
public:
    Argument(ArgumentType argument_type) : m_type(argument_type) {}
    Argument(const Argument&) = delete;
    ~Argument() = default;
private:
    ArgumentType m_type;
};

class ArgumentParser
{
public:
    ArgumentParser(const std::string& app_name);
    ArgumentParser(const Argument&) = delete;
    template<typename Func>
    void add_positional_argument(const std::string& argument_name, Func&& callback)
    {
        printf("do something\n");
    }
    int parse(int argc, char** argv);
private:
    std::string m_app_name;
};

#endif