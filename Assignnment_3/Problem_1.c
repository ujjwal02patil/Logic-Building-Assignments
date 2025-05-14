#include<stdio.h>



void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        printf("invalid Input\n");
        return;
    }

    int iCnt = 0;
    int iNum = 2;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",iNum);
        iNum = iNum + 2;
    }


}





int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);



    return 0;
}