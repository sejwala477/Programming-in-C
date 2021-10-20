#include<stdio.h>
#include<conio.h>

void main()
{
    int i = 10, j, k = 2;
    FILE *ptr, *ptr2;
    char c;
    ptr = fopen("kz.txt", "w");
    printf("Table of : ");
    scanf("%d", &j);
    for(i = 1; i<11; i++)
    {
        fprintf(ptr, "\n%d x %d = %d", j, i, j * i);
    }
    fclose(ptr);
    
    ptr2 = fopen("kz2.txt", "w");

    for (k = 0; k < 2; k++)
    {
        ptr = fopen("kz.txt", "r");
        c = fgetc(ptr);

        while (c != EOF)
        {
            fputc(c ,ptr2);
            c = fgetc(ptr);
            // fscanf(ptr, "%c", &c);
            // fprintf(ptr2, "%c", c);
        }
        fclose(ptr);
    }
    
    fclose(ptr2);

    // getch();
}