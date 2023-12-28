//Write the program which accepts name of file & delete that file

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

    unlink(FileName);

    printf("\nFile Deleted Successfully");
    
    return 0;
}