//To write data into File

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>          //Universal Standard
#include<fcntl.h>           //File Control

int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[] = "Angular Web Development";

    fd = open("Marvellous.txt",O_RDWR | O_APPEND);      //APPEND will add new text

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        iRet = write(fd,Arr,23);
        printf("%d bytes gets successfully writtened into File\n",iRet);

        close(fd);
    }
    
    return 0;
}