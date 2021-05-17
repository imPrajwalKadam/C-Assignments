////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Difference
//Paramiter     :  Int
//Return Value  :  Int
//Description   :  
//Input         :  Demo.txt 
//Output        :  File opened successfully.                                 
//Author        :  Prajwal Pradeep Kadam
//Date          :  04\08\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
 Write application which accept file name from user and display size of file */

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
     int iSize=0;
    
    FileX(char Name[])
    {
        fd = open(Name,O_RDONLY);
        if(fd == -1)
        {   cout<<"Unable to create file\n";}
        else
        {cout<<"File succesfully created..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void ReadData()
    {
       char Arr[]={'\0'};
       //read(fd,Arr,10);
         while(read(fd,Arr,1))
       {
         iSize++;
       }
       cout<<"Size of File is:"<<iSize<<"Byte\n";
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
