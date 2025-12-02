#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int maxIndex = 0;

    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];
}

int main() {
    struct Student s[5];

    printf("Enter details of 5 students:\n");
    for(int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    struct Student top = getTopStudent(s, 5);

    printf("\n--- Top Student Details ---\n");
    printf("Roll Number: %d\n", top.roll);
    printf("Name: %s\n", top.name);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
