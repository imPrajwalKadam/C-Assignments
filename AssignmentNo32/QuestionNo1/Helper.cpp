////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Difference
//Paramiter     :  character
//Return Value  :  character
//Description   :  
//Input         :  Demo.txt 
//Output        : File opened successfully.                                 
//Author        :  Prajwal Pradeep Kadam
//Date          :  04\08\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
 Write application which accept file name and one character from user. Count the 
frequency of that character in file. */


#include<iostream>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
 
using namespace std;
class FileX
{
    public:
    int fd1;
    int fd2;

    FileX(char Name1[10],char Name2[10])
    {
        fd1=open(Name1,O_RDONLY);
        fd2=open(Name2,O_RDONLY);
        if((fd1==-1)||(fd2==-1))
        {
            cout<<"Unable to create File\n";
            exit(0);
        }
        else{
            cout<<"File Sucessfully Created\n";
        }
    }
    ~FileX()
    {
        close(fd1);
        close(fd2);
    }
    bool ReadData(char Arr1[20],char Arr2[20])
    {
        int ret1=0,ret2=0;
        char str1[10];
        char str2[10];
        int iSize1=0;
        int iSize2=0;
        while((ret1=read(fd1,Arr1,1)) != 0)
        {
            iSize1++;
           write(1,Arr1,ret1);
        }
        while((ret2=read(fd2,Arr2,1)) != 0)
        {
            iSize2++;
            write(1,Arr2,ret2);
        }
        cout<<"\nSize of first file is"<<iSize1<<"Byte\n";
        cout<<"Size of second file is"<<iSize2<<"Byte\n";
        if(Arr1==Arr2)
        {
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    bool bRet=false;
    char str1[30];
    char str2[30];
    cout<<"Enter 1st File Name\n";
    cin>>str1;
    cout<<"Enter 2nd File Name\n";
    cin>>str2;
    FileX obj(str1,str2);

    bRet=obj.ReadData(str1,str2);
    if(bRet==true)
    {
        cout<<"\nData is same\n";
    }
    else{
        cout<<"\nData is Different\n";
    }
    return 0;

}