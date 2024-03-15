#ifndef PARSER
#define PARSER

#include "main.h"
#include "utils.h"

typedef struct {
	char *description;
    char *instruction;
    char *args;
    char *pop;
    char *nbArgs;
}Command;

typedef struct {
    char *instruction;
    char *arg;
    char *arg2;
}Code;

void parsingCSV(Command* commands);

void parsingCodeSource(char* file, Code* code);

#endif
