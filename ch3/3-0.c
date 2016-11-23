#include "apue.h"
#include <fcntl.h>

int main(void)
{
    int n;
    char buf[10];
    int fd=open("3-1-file",O_RDWR|O_CREAT|O_TRUNC);

    while((n=read(STDIN_FILENO,buf,10))>0)
        if(write(fd,buf,n)!=n)
            printf("write error");
}
