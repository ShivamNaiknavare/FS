//To Create new regular File
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>          //Universal Standard
#include<fcntl.h>           //File Control

int main()
{
    int fd = 0;

    fd = creat("Marvellous.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File is Successfully created with fd : %d\n",fd);
    }
    
    return 0;
}