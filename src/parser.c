#include "../headers/parser.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Command* parsing(Command* commands)
{
    char *txt = "instructions.csv";
    FILE *instructions = fopen(txt, "r");
    char str[50];
    int counter = 0;

    if(instructions == NULL)
    {
        printf("Cannot open %s file", txt);
        exit(0);
    }

    while(fgets(str, 50, instructions))
    {
        commands[counter].description = strtok(str, ",");
        commands[counter].instruction = strtok(NULL, ",");
        commands[counter].args = strtok(NULL, ",");
        commands[counter].pop = strtok(NULL, "\n");

        printf("%s, %s, %s, %s\n", commands[counter].description, commands[counter].instruction,
               commands[counter].args, commands[counter].pop);

        counter++;
    }
//            printf("%d : %s, %s, %s, %s\n",counter-1, commands[counter-1].description, commands[counter-1].instruction,
//                   commands[counter-1].args, commands[counter-1].pop);
//    fclose(instructions);

    return commands;
}
