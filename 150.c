#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {

    struct Student s;
    struct Student *p;

    p = &s;

    printf("Enter Roll Number: ");
    scanf("%d", &p->roll);

    printf("Enter Name: ");
    scanf("%s", p->name);

    printf("Enter Marks: ");
    scanf("%f", &p->marks);

    printf("\n--- Student Details ---\n");
    printf("Roll: %d\n", p->roll);
    printf("Name: %s\n", p->name);
    printf("Marks: %.2f\n", p->marks);

    return 0;
}
