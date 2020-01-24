#include<stdio.h>
struct student
{

    char name[30];
    int id;
    float course_gradepoints[10];
    float cgpa;

} students[10];

int main()
{

    int course_credit[10],total_credit=0;

    int student,course;

    for(student=0; student<2; student++)
    {

        printf("Enter your student name\n");

        scanf("%s",students[student].name);

        printf("Enter student id\n");

        scanf("%d",&students[student].id);

        printf("Enter your student course grade points\n");

        for(course=0; course<10; course++)
        {

            scanf("%f",&students[student].course_gradepoints[course]);

        }
    }
    printf("enter your students course credit\n");

    for(course=0; course<10; course++)
    {

        scanf("%d",&course_credit[course]);

        total_credit=total_credit+course_credit[course];

    }


    for(student=0; student<2; student++)
    {

        students[student].cgpa=0;

        for(course=0; course<10; course++)
        {

            students[student].cgpa=students[student].cgpa+students[student].course_gradepoints[course]*course_credit[course];

        }

        students[student].cgpa=students[student].cgpa/total_credit;

        printf("%s\n",students[student].name);

        printf("%d\n",students[student].id);

        printf("%f\n",students[student].cgpa);

    }
}
