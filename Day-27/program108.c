#include <stdio.h>

int main()
{
    char name[50];
    int m1, m2, m3, m4, m5, total;
    float percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("\n----- MARKSHEET -----\n");
    printf("Name       : %s\n", name);
    printf("Subject 1  : %d\n", m1);
    printf("Subject 2  : %d\n", m2);
    printf("Subject 3  : %d\n", m3);
    printf("Subject 4  : %d\n", m4);
    printf("Subject 5  : %d\n", m5);
    printf("Total Marks: %d\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade : A+\n");
    else if (percentage >= 80)
        printf("Grade : A\n");
    else if (percentage >= 70)
        printf("Grade : B\n");
    else if (percentage >= 60)
        printf("Grade : C\n");
    else if (percentage >= 50)
        printf("Grade : D\n");
    else
        printf("Grade : F\n");

    return 0;
}