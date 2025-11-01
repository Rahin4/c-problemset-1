/*
//making and storing info in a file ; structures and file handling together
#include <stdio.h>
#include <stdlib.h>

// Define the structure
struct student_info {
    char name[100];
    char town[100];
    char sub[100];
    float gpa;
};

int main() {
    struct student_info s1, s2;
    FILE *fp;

    // Input student data
    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Where are you from?: ");
    scanf("%s", s1.town);

    printf("Enter your subject: ");
    scanf("%s", s1.sub);

    printf("What is your GPA?: ");
    scanf("%f", &s1.gpa);

    // Write to file
    fp = fopen("student.dat", "wb");
    if (fp == NULL) {
        printf("Error: cannot open file for writing!\n");
        return 1;
    }

    fwrite(&s1, sizeof(struct student_info), 1, fp);
    fclose(fp);
    printf("\n✅ Student info saved successfully!\n");

    // Read back from file
    fp = fopen("student.dat", "rb");
    if (fp == NULL) {
        printf("Error: cannot open file for reading!\n");
        return 1;
    }

    fread(&s2, sizeof(struct student_info), 1, fp);
    fclose(fp);

    // Display stored info
    printf("\n Data read from file:\n");
    printf("Name: %s\n", s2.name);
    printf("Town: %s\n", s2.town);
    printf("Subject: %s\n", s2.sub);
    printf("GPA: %.2f\n", s2.gpa);

    return 0;
}
*/
