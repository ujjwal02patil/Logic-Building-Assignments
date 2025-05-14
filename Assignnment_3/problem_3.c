// Accept Number from User and print even Factors of that number

#include <stdio.h>


void DisplayEvenFactors(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;

    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if(((iNo) % (iCnt) == 0) && ((iCnt) % (2) == 0))
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{

    int iValue = 0;
    
    printf("enter Number\n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);


    return 0;
}