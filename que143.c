#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    printf("Enter details of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    int maxIndex = 0;
    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\n---- Student with Highest Marks ----\n");
    printf("Roll Number: %d\n", s[maxIndex].roll);
    printf("Name: %s\n", s[maxIndex].name);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}
