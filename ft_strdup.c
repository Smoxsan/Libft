#include <ft_atoi.c>

char* strdup(const char* str)
{
    int count;
    char* ptr;

    count = 0;
    while(*str)
    {
        str++;
        count++;
    }
    ptr = (char*) malloc(count * sizeof(char));
    while(*str){
        str = ptr;
        str++;
        ptr++;
    }
    return(ptr);
}