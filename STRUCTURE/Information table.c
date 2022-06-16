/* Write a program to print following quantities for all the candidates. Roll number, name, 
marks in all subjects, total marks, percentage, class using structure.*/

#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[10];

int main() {
    int i;
    printf("Enter information of students: \n");

    
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("For roll number %d:\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n"); 
    for (i = 0; i < 5; ++i) {
        printf("Roll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
