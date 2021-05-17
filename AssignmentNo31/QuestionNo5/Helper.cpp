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
 Write application which accept file name from user and display size of file */
#include<string.h> 
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
        fd = open(Name,O_WRONLY|O_APPEND);
        if(fd == -1)
        {
            cout<<"unable to locate file\n";
            exit(0);
        }
        else
        {cout<<"File Open sucessfully\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void WriteData(char str[30])
    {
       // char str[]="Pune";
        write(fd,str,strlen(str));
        if(write)
        {
            cout<<"Data Successfully stored"<<"\n";
        }
        else{
            cout<<"Data isen't stored"<<"\n";
        }
    }
};
int main()
{
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    char rs[30];
    printf("Enter Data:\n");
    scanf(" %[^'\n']s",&rs);
    obj.WriteData(rs);
    return 0;
}
