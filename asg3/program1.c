#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        printf("Plese enter positive number");
        return ;
    }
    for (int iCnt = 1; iCnt <= iNo; iCnt++ )
    {
        printf("%d\n",iCnt *2 );
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}