#include <stdio.h>

struct Student {
    int id;
    char name[50];
};

int main() {
    struct Student s1 = {101, "Tonmoy"}, s2;
    FILE *fp;

    fp = fopen("data.bin", "wb");
    fwrite(&s1, sizeof(struct Student), 1, fp);
    fclose(fp);

    fp = fopen("data.bin", "rb");
    if (fread(&s2, sizeof(struct Student), 1, fp)) {
        printf("ID: %d\nName: %s\n", s2.id, s2.name);
    }
    fclose(fp);

    return 0;
}
