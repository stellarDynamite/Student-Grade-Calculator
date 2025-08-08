#include <stdio.h>

typedef struct Student
{
    int roll;
    char name[50];
    int marks[3]; // 0 = comp, 1 = math, 2 = eng
    char grade;
} Stu;

int main()
{

    const char *subjects[] = {"Computer Science", "Maths", "English"};
    int size=0; char grade='D';

    printf("How many students' data, do you want to add? ");
    scanf("%d", &size);

    Stu students[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter student roll: ");
        scanf("%d", &students[i].roll);
        printf("Enter student name: ");
        scanf("%s", students[i].name);

        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("Enter student's marks(out of 100) in %s: ", subjects[j]);
            scanf("%d", &students[i].marks[j]);
            sum += students[i].marks[j];
        }

        float average = (float)sum / 3;

        if (average>=90){
                grade='A';
        }
        else if(average>=70){
                grade='B';
        }
        else if(average>=60){
                grade='C';
        }
        students[i].grade=grade;
    }

    printf("\n--- Student Data ---\n");
    for (int i = 0; i < size; i++) {
        printf("Roll: %d, Name: %s, Grade: %c\n", 
               students[i].roll, students[i].name, students[i].grade);
    }

    return 0;

}

