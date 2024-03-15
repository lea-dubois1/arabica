#include "../headers/utils.h"


int count_space(char *str)
{
    int i = 0;
    int counter = 0;

    while(str[i] != 0)
    {
        if(str[i] == ' ')
        {
            counter++;
        }
        i++;
    }
    return counter;
}