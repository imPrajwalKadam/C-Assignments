////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Difference
//Paramiter     :  Int
//Return Value  :  Int
//Description   :  
//Input         :  Demo.txt 
//Output        : File opened successfully.                                 
//Author        :  Prajwal Pradeep Kadam
//Date          :  04\08\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
Write application which accept file name from user and read all data from that file 
and display contents on screen. */
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fcntl.h>
#include<unistd.h>

using namespace std;
class FileX
{
public:
    int fd;
    
    FileX(char Name[])
    {
        fd = open(Name,O_RDONLY);
        if(fd == -1)
        {   cout<<"Unable to create file\n";}
        else
        {cout<<"File  Read succesfully..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void ReadData()
    {
        char Arr[20]={'\0'};
        read(fd,Arr,10);
      
       printf("%s",Arr);
    }
};
int main()
{
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    obj.ReadData();
    return 0;
}
