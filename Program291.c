//To delete File

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>          //Universal Standard
#include<fcntl.h>           //File Control

int main()
{
    unlink("Marvellous.txt");

    printf("File is Deleted Successfully");

    return 0;
}