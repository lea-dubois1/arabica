CC = gcc
EXEC = arabica
CFLAGS = -Wall -Werror -Wextra -g3
OBJDIR = obj/
SRCDIR = src/
SRC = main.c file.c parser.c
SRCS = $(addprefix $(SRCDIR), $(SRC))
OBJ = $(SRCS:$(SRCDIR)%.c=$(OBJDIR)%.o)

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) -o $@ $^

$(OBJDIR)%.o : $(SRCDIR)%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean :
	rm -rf $(OBJ)

mrproper : clean
	rm -rf $(EXEC)