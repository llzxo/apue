#include "apue.h"

int main(void)
{
    int c;

    while((c=getc(stdin))!=EOF)
        if(putc(c,stdout)==EOF)
        {
            printf("output error");
            return 1;
        }

    if(ferror(stdin))
    {
        printf("input error");
        return 1;
    }

    exit(0);
}
