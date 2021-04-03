/*Accept two numbers from user and display first number
 in second number of time*/
 // Input: 12  5
 // Output:12 12 12 12 12

 //Input:12 0
 //Output:  
 #include<stdio.h>
 void Display(int iNo,int iFrequency)
 {
     int iSum =0;
     for(iSum=1;iSum<=iFrequency;iSum++)
     {
         printf("%d\n",iNo);
     }
 }

 int main()
 {
     int iValue=0;
     int iCount=0;
    

     printf("Enter number:");
     scanf("%d",&iValue);
     printf("Enter Frequency:");
     scanf("%d",&iCount);
     Display(iValue,iCount);
    

     return 0;
 }