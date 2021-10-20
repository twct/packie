#include <ArgumentParser.h>

int main(int argc, char** argv)
{
    ArgumentParser argument_parser("packie");

    argument_parser.add_positional_argument("init", []() {
        printf("init\n");
    });

    return argument_parser.parse(argc, argv);
}