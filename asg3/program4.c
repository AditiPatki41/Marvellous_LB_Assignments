#include<stdio.h>
void DisplayConvert(char cValue)
{
    if((cValue >= 'A')&&(cValue <= 'Z'))
    {
        printf("Converted character: %c\n",cValue + 32);
    }
    else if((cValue >= 'a')&&(cValue <= 'z') )
    {
        printf("Converted characters: %c\n",cValue - 32);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}