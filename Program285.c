//To Open & Close File
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>          //Universal Standard
#include<fcntl.h>           //File Control

int main()
{
    int fd = 0;

    fd = open("Program283.c",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is Successfully opened with fd : %d\n",fd);
        close(fd);
        printf("File gets successfully closed.\n");
    }


    return 0;
}