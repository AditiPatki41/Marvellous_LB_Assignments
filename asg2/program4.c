#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d\n", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter Frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);
    return 0;
}