#include<stdio.h>
#include<conio.h>

typedef struct emp
{
    int salary;
    char name[20];
}emp;

void main()
{
    emp emp1, emp2;
    FILE *fptr;
    fptr = fopen("2rec.txt", "w");

    printf("Employee - 1 :-\n\n");
    printf("Name : ");
    gets(emp1.name);
    fprintf(fptr, "%s, ", emp1.name);
    printf("Salary : ");
    scanf("%d", &(emp1.salary));
    fprintf(fptr, "%d\n", emp1.salary);

    fflush(stdin);

    printf("\n\nEmployee - 2 :-\n\n");
    printf("Name : ");
    gets(emp2.name);
    fprintf(fptr, "%s, ", emp2.name);
    printf("Salary : ");
    scanf("%d", &(emp2.salary));
    fprintf(fptr, "%d\n", emp2.salary);

    printf("\n\nRecords updated in the file successfully.");
}