#include <stdio.h>
#include <stdlib.h>

typedef struct{

    char name[30];
    int id;
    int experience[10];
    float salary;

} Employee;

int main()
{
    int i, n=5;

    Employee employees[n];

    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){

        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%s",employees[i].name);
        printf("Id: ");
        scanf("%d",&employees[i].id);
        printf("Experience: ");
        scanf("%e",&employees[i].experience);
        printf("Salary: ");
        scanf("%f",&employees[i].salary);

        printf("\n");
    }

    printf("-------------- Employees Details ---------------\n");

    for(i=0; i<n; i++){

        printf("Name \t: ");
        printf("%s \n",employees[i].name);

        printf("Id \t: ");
        printf("%d \n",employees[i].id);

        printf("Experience \t:");
        printf("%e \n",employees[i].experience);

        printf("Salary \t: ");
        printf("%f \n",employees[i].salary);

        printf("\n");
    }
    return 0;

}
