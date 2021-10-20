#include <ArgumentParser.h>

ArgumentParser::ArgumentParser(const std::string& app_name) :
    m_app_name(app_name)
{
}

int ArgumentParser::parse(int argc, char** argv)
{
    printf("parse\n");
    return 0;
}