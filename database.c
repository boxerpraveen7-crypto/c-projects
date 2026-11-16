#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    float mark;
};

int main() {
    struct Student s[100];
    int n, i;

    printf("===== STUDENT DATABASE =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Name: ");
        scanf("%49s", s[i].name);

        printf("Enter Mark: ");
        scanf("%f", &s[i].mark);
    }

    printf("\n===== STUDENT DETAILS =====\n");

    printf("\nRoll No\tName\tMark\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n",
               s[i].rollno,
               s[i].name,
               s[i].mark);
    }

    return 0;
}
