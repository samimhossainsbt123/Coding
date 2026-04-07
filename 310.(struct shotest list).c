#include <stdio.h>

struct Employee 
{
    int id;
    char name[50];
    float salary;
};

int main() 
{
    struct Employee s[100], temp; 
    int n, i, j;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Data Input 
    for (i = 0; i < n; i++) 
    {
        printf("\nEnter details for Employee %d\n", i + 1);
        
        printf("Enter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Salary: ");
        scanf("%f", &s[i].salary);
    }

  
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            
            if (s[j].salary > s[j + 1].salary) 
            {
                
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    
    printf("\n--- Sorted Employee List ---\n");
    for (i = 0; i < n; i++) 
    {
        printf("\nID: %d", s[i].id);
        printf("\nName: %s", s[i].name);
        printf("\nSalary: %.2f\n\n", s[i].salary);
        
    }

    return 0;
}
