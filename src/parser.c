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
}
