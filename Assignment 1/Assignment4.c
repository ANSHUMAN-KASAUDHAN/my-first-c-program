// WAP in C to input student name and roll number and print Student name and roll number.
#include <stdio.h>
int main() {
    char name[50];
    int roll;
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    
    printf("\nStudent Name: %s\n", name);
    printf("Roll Number: %d", roll);
    return 0;
}