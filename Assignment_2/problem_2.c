#include<stdio.h>


void Display(int iNo)  
{ 
    int iCnt = 1;   
    
    if(iNo < 0)
    {
        iNo = -iNo;         // Write Updater 
    } 
 
    while( iNo >= iCnt ) 
    { 
        printf("*\n");  
        iCnt++;  
    }
}


int main() 
{ 
    int iValue = 0; 

    printf("Enter Number\n"); 
    scanf("%d",&iValue);

    Display(iValue);

    return 0; 
} 