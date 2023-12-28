//Write the program which accepts name of file & create that file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>          //Universal Standard
#include<fcntl.h>           //File Control

int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter the name of file that you want to create into current directory\n");
    scanf("%s",FileName);

    fd = creat(FileName,0777);

    if(fd == -1)
    {
        printf("Unable to create %s file\n",FileName);
    }
    else
    {
        printf("%s gets created successfully with file descriptor %d\n",FileName,fd);
    }
    
    return 0;
}