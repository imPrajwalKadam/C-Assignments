
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
   Write application which accept file name from user and open that file in read mode. 
 */
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fcntl.h>
#include<unistd.h>
//#include<io.h>

using namespace std;

class FileX
{
    public:
    int fd;

    FileX(char Name[])
    {
        fd=open(Name,O_CREAT);
        if(fd==-1)
        {
            cout<<"Unable to open file\n";
        }
        else{
            cout<<"File Successfully opened";
        }
    }
    ~FileX()
    {
        close (fd);
    }
};
int main()
{
    char str[30];
    cout<<"Enter File name\n";
    cin>>str;
    FileX obj(str);
    return 0;
}
