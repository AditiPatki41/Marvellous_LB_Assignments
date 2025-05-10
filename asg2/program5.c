#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo %2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
void Display(BOOL bRet)
{
    if(bRet == TRUE)
    {
        printf("It is even nember\n");
    }
    else
    {
        printf("It is odd number\n");
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    Display(bRet);
    return 0;
}