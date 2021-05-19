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
 Write application which accept file name and one character from user. Count the 
frequency of that character in file.*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
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
        {cout<<"File succesfully created..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    int ReadData(char ch)
    {
        char Arr[20];
        int iCnt=0;
        while(read(fd,Arr,1)!='\0')
        {
            if(ch==*Arr)
            {
            iCnt++;
            }
        }
       return iCnt;
    }
};
int main()
{
    char ch='\0';
    int iRet=0;
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    cout<<"Enter character\n";
    cin>>ch;
   iRet= obj.ReadData(ch);
   cout<<"Frequency of character is:"<<iRet<<"\n";
    return 0;
}

