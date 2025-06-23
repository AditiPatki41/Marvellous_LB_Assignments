#include<stdio.h>
void Number(int iNo)
{
    if((iNo > 0) && (iNo <= 50))
    {
        printf("Small\n");
        return;
    }
    else if(( iNo > 50) && (iNo <= 100))
    {
        printf("Medium\n");
        return;
    }
    else if((iNo > 100))
    {
        printf("Large\n");
        return;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}