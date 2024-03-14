#include "../headers/parser.h"
#include <stdio.h>

Command parsing(char *txt)
{
    FILE *instructions = fopen(txt, "r");

    char str[50];

    if(instructions == NULL)
    {
        printf("Cannot open %s file", txt);
        exit(0);
    }

    while(fgets(str, 50, instructions))
    {
        printf("%s", str);
    }

    fclose(instructions);
}
