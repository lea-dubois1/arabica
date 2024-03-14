#include "../headers/parser.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void parsingCSV(Command* commands)
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
        commands[counter].description = strdup(strtok(str, ","));
        commands[counter].instruction = strdup(strtok(NULL, ","));
        commands[counter].args = strdup(strtok(NULL, ","));
        commands[counter].pop = strdup(strtok(NULL, "\n"));

        counter++;
    }
    fclose(instructions);
}


void parsingCodeSource(char* file, Code* code){

    FILE *codeSource = fopen(file, "r");
    char str[50];
    int counter = 0;

    if(codeSource == NULL)
    {
        printf("Cannot open %s file", file);
        exit(0);
    }

    while(fgets(str, 50, codeSource)){

        int count_word = count_space(str);

        switch(count_word) {
            case 0:
                code[counter].instruction = strdup(strtok(str, "\n"));
                code[counter].arg = NULL;
                code[counter].arg2 = NULL;
               break;
            case 1:
                code[counter].instruction = strdup(strtok(str, " "));
                code[counter].arg = strdup(strtok(NULL, "\n"));
                code[counter].arg2 = NULL;
                break;
            case 2:
                code[counter].instruction = strdup(strtok(str, " "));
                code[counter].arg = strdup(strtok(NULL, " "));
                code[counter].arg2 = strdup(strtok(NULL, "\n"));
                break;
            default:
                printf("They're must be an error with the parsing of the file");
        }
        counter++;
    }

    fclose(codeSource);
}