#include<stdio.h>

int main()
{
    FILE *ptr;
    char a[50];
    int numin, numout = 54;
    
    ptr = fopen("kz.txt", "w");
    
    fprintf(ptr, "Number : %d", numout);
    fprintf(ptr, "\n%d", numout);
    fclose(ptr);

    ptr = fopen("kz.txt", "r");
    fscanf(ptr, "%s", &a);
    
    printf("The number is : %s", a);
    
    numin = 1;
    fscanf(ptr, "%d", &numin);
    
    fclose(ptr);
    
    printf("\nThe number is : %d", numin);

    return 0;
}
