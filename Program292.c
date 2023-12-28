//Write the program which accepts name of file from current directory, open that file & describe

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>          //Universal Standard
#include<fcntl.h>           //File Control

int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter the name of file that you want to open from current directory\n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open %s file\n",FileName);
    }
    else
    {
        printf("%s gets opened successfully with file descriptor %d\n",FileName,fd);
        close(fd);
    }
    
    return 0;
}