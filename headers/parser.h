#ifndef PARSER
#define PARSER

typedef struct {
	char *description;
    char *instruction;
    char *args;
    char *pop;
}Command;

Command* parsing(Command* commands);

#endif
