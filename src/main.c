#include "../headers/main.h"

int main(int argc, char **argv)
{
    (void)argc;
//    (void)argv;

    // On parse le fichier d'instructions pour faire en faire un tableau de Command
    Command* commands = malloc(sizeof(Command) * 100);
    parsingCSV(commands);

    Code* code = malloc(sizeof(Code) * 100);



    parsingCodeSource(argv[1], code);


    for (int i = 0; i < 28; ++i) {
        printf("%d : %s, %s, %s, %s\n",i, commands[i].description, commands[i].instruction, commands[i].args, commands[i].pop);
    }

    for (int i = 0; i < 5; ++i) {
        printf("%d : %s, %s, %s\n",i, code[i].instruction, code[i].arg, code[i].arg2);
    }

    return 0;
}
