#include <stdio.h>

int main() {
    FILE *fin, *feven, *fodd;
    int num;

    fin = fopen("numbers.txt", "r");
    feven = fopen("even.txt", "w");
    fodd = fopen("odd.txt", "w");

    if (fin == NULL) return 1;

    while (fscanf(fin, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(feven, "%d\n", num);
        } else {
            fprintf(fodd, "%d\n", num);
        }
    }

    fclose(fin);
    fclose(feven);
    fclose(fodd);

    return 0;
}
