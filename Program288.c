//To write new data into File

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>          //Universal Standard
#include<fcntl.h>           //File Control

int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[] = "Pre-Placement Activity";

    fd = open("Marvellous.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        iRet = write(fd,Arr,22);
        printf("%d bytes gets successfully writtened into File\n",iRet);

        close(fd);
    }
    
    return 0;
}