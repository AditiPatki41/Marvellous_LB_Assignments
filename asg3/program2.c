#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iFct = 0;

    if(iNo <= 0)
    {
        iNo = - iNo;
    }
    for( iFct = 1; iFct < iNo; iFct++)
    {
        if(iNo % iFct == 0 )
        {
            printf("%d\n",iFct);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    return 0;
}