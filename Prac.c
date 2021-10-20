#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    // char str[] = {'A', 's', 'h', 'i', ' ', 'h', '\0'};
    char str[20];
    // for (i = 0; str[i] != '\0'; i++)
    // {
    //     printf("%c", str[i]);        
    // }
    // scanf("%s", &str);
    gets(str);
    printf("%s", str);
    getch();
    
}