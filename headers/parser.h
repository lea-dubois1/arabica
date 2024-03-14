#ifndef PARSER
#define PARSER

typedef struct {
	char *description;
    char *instruction;
    char *args;
    char *pop;
}Command;

typedef struct {
    char *instruction;
    char *arg;
    char *arg2;
}Code;

void parsingCSV(Command* commands);

void parsingCodeSource(char* file, Code* code);

#endif
