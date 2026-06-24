// Wap in c to input student name and roll number and print student name and roll number.
#include <stdio.h>

int main() {
    char name[50];
    int rollno;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &rollno);

    printf("\nStudent Name: %s", name);
    printf("\nRoll Number: %d", rollno);

    return 0;
}
