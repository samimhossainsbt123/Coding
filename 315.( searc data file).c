#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e;
    int searchId, found = 0;

    fp = fopen("emp.dat", "ab+");

    struct Employee e1 = {101, "Karim", 25000};
    struct Employee e2 = {102, "Rahim", 30000};
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fwrite(&e2, sizeof(struct Employee), 1, fp);
    
    rewind(fp);

    printf("Enter ID to search: ");
    scanf("%d", &searchId);

    while (fread(&e, sizeof(struct Employee), 1, fp)) {
        if (e.id == searchId) {
            printf("Found! Name: %s, Salary: %.2f\n", e.name, e.salary);
            found = 1;
            break;
        }
    }

    if (!found) printf("Employee not found.\n");

    fclose(fp);
    return 0;
}
