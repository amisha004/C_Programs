/* Write a program to read student roll no., name and mathematics marks for 3 5students and 
prints student name and roll no. If the marks are equal on screen. */

#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[10];

int main() {
    int i;
    printf("Enter information of students:\n");

    
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\n Roll number%d,\n", s[i].roll);
        printf("Enter First Name: ");
        scanf("%s", s[i].firstName);
        printf("Enter Mathematics marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\nDisplaying Information:\n\n");

    
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Mathematics Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
