#include "../headers/main.h"

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    Command* commands = malloc(sizeof(Command) * 100);
    commands = parsing(commands);


//    for (int i = 0; i < 10; ++i) {
//        printf("%d : %s, %s, %s, %s\n",i, commands[i].description, commands[i].instruction, commands[i].args, commands[i].pop);
//
//    }

    return 0;
}
