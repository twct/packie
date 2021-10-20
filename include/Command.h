#ifndef __COMMAND_H__
#define __COMMAND_H__

class Command
{
protected:
    Command();
    virtual ~Command() = default;
    virtual int execute() = 0;
};

#endif