
#include<stdio.h>
int main()
{
    int course,student,counter,cgpa,repit;
    int location,location1,location2,location3,location4,location5,location6,location7,location8,location9;
    float max,max1,max2,max3,max4,max5,max6,max7,max8,max9;

    //10 student 10 course same array
    float student_gradepoint[10][10];

    //10 student cgpa array
    float student_cgpa[10];

    //for 10 student store grade point outer loop
    for(student=0; student<10; student++)
    {
        //for course inner loop
        for(course=0; course<10; course++)
        {
            printf("Enter %d student %d course gradepoint :",student+1,course+1);
            scanf("%f",&student_gradepoint[student][course]);
        }
    }

    //cgpa calculation with array
    for(repit=0; repit<10; repit++)
    {
        for(counter=0; counter<10; counter++)
        {
            student_cgpa[counter]=0;
            for(course=0; course<10; course++)
            {
                student_cgpa[counter]=student_cgpa[counter]+student_gradepoint[counter][course]*3;

            }
            student_cgpa[counter]=student_cgpa[counter]/(float)(30);
        }
    }
    //print 10 student cgpa with array
    for(counter=0; counter<10; counter++)
    {
        printf("%d Student CGPA : %f\n",counter+1,student_cgpa[counter]);
    }

    //calculate the 1st student cgpa
    student_cgpa[0]=(student_gradepoint[0][0]*1+student_gradepoint[0][1]*1+student_gradepoint[0][2]*3+student_gradepoint[0][3]*3+student_gradepoint[0][4]*3+student_gradepoint[0][5]*3+student_gradepoint[0][6]*3+student_gradepoint[0][7]*3+student_gradepoint[0][8]*3+student_gradepoint[0][9]*3)/(float)(26);
    //calculate the 2nd student cgpa
    student_cgpa[1]=(student_gradepoint[1][0]*1+student_gradepoint[1][1]*1+student_gradepoint[1][2]*3+student_gradepoint[1][3]*3+student_gradepoint[1][4]*3+student_gradepoint[1][5]*3+student_gradepoint[1][6]*3+student_gradepoint[1][7]*3+student_gradepoint[1][8]*3+student_gradepoint[1][9]*3)/(float)(26);
    //calculate the 3rd student cgpa
    student_cgpa[2]=(student_gradepoint[2][0]*1+student_gradepoint[2][1]*1+student_gradepoint[2][2]*3+student_gradepoint[2][3]*3+student_gradepoint[2][4]*3+student_gradepoint[2][5]*3+student_gradepoint[2][6]*3+student_gradepoint[2][7]*3+student_gradepoint[2][8]*3+student_gradepoint[2][9]*3)/(float)(26);
    //calculate the 4th student cgpa
    student_cgpa[3]=(student_gradepoint[3][0]*1+student_gradepoint[3][1]*1+student_gradepoint[3][2]*3+student_gradepoint[3][3]*3+student_gradepoint[3][4]*3+student_gradepoint[3][5]*3+student_gradepoint[3][6]*3+student_gradepoint[3][7]*3+student_gradepoint[3][8]*3+student_gradepoint[3][9]*3)/(float)(26);
    //calculate the 5th student cgpa
    student_cgpa[4]=(student_gradepoint[4][0]*1+student_gradepoint[4][1]*1+student_gradepoint[4][2]*3+student_gradepoint[4][3]*3+student_gradepoint[4][4]*3+student_gradepoint[4][5]*3+student_gradepoint[4][6]*3+student_gradepoint[4][7]*3+student_gradepoint[4][8]*3+student_gradepoint[4][9]*3)/(float)(26);
    //calculate the 6th student cgpa
    student_cgpa[5]=(student_gradepoint[5][0]*1+student_gradepoint[5][1]*1+student_gradepoint[5][2]*3+student_gradepoint[5][3]*3+student_gradepoint[5][4]*3+student_gradepoint[5][5]*3+student_gradepoint[5][6]*3+student_gradepoint[5][7]*3+student_gradepoint[5][8]*3+student_gradepoint[5][9]*3)/(float)(26);
    //calculate the 7th student cgpa
    student_cgpa[6]=(student_gradepoint[6][0]*1+student_gradepoint[6][1]*1+student_gradepoint[6][2]*3+student_gradepoint[6][3]*3+student_gradepoint[6][4]*3+student_gradepoint[6][5]*3+student_gradepoint[6][6]*3+student_gradepoint[6][7]*3+student_gradepoint[6][8]*3+student_gradepoint[6][9]*3)/(float)(26);
    //calculate the 8th student cgpa
    student_cgpa[7]=(student_gradepoint[7][0]*1+student_gradepoint[7][1]*1+student_gradepoint[7][2]*3+student_gradepoint[7][3]*3+student_gradepoint[7][4]*3+student_gradepoint[7][5]*3+student_gradepoint[7][6]*3+student_gradepoint[7][7]*3+student_gradepoint[7][8]*3+student_gradepoint[7][9]*3)/(float)(26);
    //calculate the 9th student cgpa
    student_cgpa[8]=(student_gradepoint[8][0]*1+student_gradepoint[8][1]*1+student_gradepoint[8][2]*3+student_gradepoint[8][3]*3+student_gradepoint[8][4]*3+student_gradepoint[8][5]*3+student_gradepoint[8][6]*3+student_gradepoint[8][7]*3+student_gradepoint[8][8]*3+student_gradepoint[8][9]*3)/(float)(26);
    //calculate the 10th student cgpa
    student_cgpa[9]=(student_gradepoint[9][0]*1+student_gradepoint[9][1]*1+student_gradepoint[9][2]*3+student_gradepoint[9][3]*3+student_gradepoint[9][4]*3+student_gradepoint[9][5]*3+student_gradepoint[9][6]*3+student_gradepoint[9][7]*3+student_gradepoint[9][8]*3+student_gradepoint[9][9]*3)/(float)(26);

    //1st maximum cgpa find
    max=student_cgpa[0];
    location=0;
    if(student_cgpa[1]>max)
    {
        max=student_cgpa[1];
        location=1+1;
    }
    if(student_cgpa[2]>max)
    {
        max=student_cgpa[2];
        location=2+1;
    }
    if(student_cgpa[3]>max)
    {
        max=student_cgpa[3];
        location=3+1;
    }
    if(student_cgpa[4]>max)
    {
        max=student_cgpa[4];
        location=4+1;
    }
    if(student_cgpa[5]>max)
    {
        max=student_cgpa[5];
        location=5+1;
    }
    if(student_cgpa[6]>max)
    {
        max=student_cgpa[6];
        location=6+1;
    }
    if(student_cgpa[7]>max)
    {
        max=student_cgpa[7];
        location=7+1;
    }
    if(student_cgpa[8]>max)
    {
        max=student_cgpa[8];
        location=8+1;
    }
    if(student_cgpa[9]>max)
    {
        max=student_cgpa[9];
        location=9+1;
    }

    printf("%d student cgpa is %f",location,max);

    for(counter=location;counter<student_cgpa-1;counter++)
        {
        student_cgpa[counter]=student_cgpa[counter+1];
    }

//2nd maximum cgpa find
    max1=student_cgpa[0];
    location1=0;
    if(student_cgpa[1]>max1)
    {
        max1=student_cgpa[1];
        location1=1+1;
    }
    if(student_cgpa[2]>max1)
    {
        max1=student_cgpa[2];
        location1=2+1;
    }
    if(student_cgpa[3]>max1)
    {
        max1=student_cgpa[3];
        location1=3+1;
    }
    if(student_cgpa[4]>max1)
    {
        max1=student_cgpa[4];
        location1=4+1;
    }
    if(student_cgpa[5]>max1)
    {
        max1=student_cgpa[5];
        location1=5+1;
    }
    if(student_cgpa[6]>max1)
    {
        max1=student_cgpa[6];
        location1=6+1;
    }
    if(student_cgpa[7]>max1)
    {
        max1=student_cgpa[7];
        location1=7+1;
    }
    if(student_cgpa[8]>max1)
    {
        max1=student_cgpa[8];
        location1=8+1;
    }
    printf("%d student cgpa is %f",location1,max1);

    for(counter=location1;counter<student_cgpa-2;counter++){
        student_cgpa[counter]=student_cgpa[counter+1];
    }
//3rd maximum cgpa find
    max2=student_cgpa[0];
    location2=0;
    if(student_cgpa[1]>max2)
    {
        max2=student_cgpa[1];
        location2=1+1;
    }
    if(student_cgpa[2]>max2)
    {
        max2=student_cgpa[2];
        location2=2+1;
    }
    if(student_cgpa[3]>max2)
    {
        max2=student_cgpa[3];
        location2=3+1;
    }
    if(student_cgpa[4]>max2)
    {
        max2=student_cgpa[4];
        location2=4+1;
    }
    if(student_cgpa[5]>max2)
    {
        max2=student_cgpa[5];
        location2=5+1;
    }
    if(student_cgpa[6]>max2)
    {
        max2=student_cgpa[6];
        location2=6+1;
    }
    if(student_cgpa[7]>max2)
    {
        max2=student_cgpa[7];
        location2=7+1;
    }
    printf("%d student cgpa is %f",location2,max2);

    for(counter=location2;counter<student_cgpa-3;counter++){
        student_cgpa[counter]=student_cgpa[counter+1];
    }

    //print this 10 student cgpa with array
    for(counter=0; counter<10; counter++)
    {
        printf("%d Student CGPA %f\n",counter+1,student_cgpa[counter]);
    }
    return 0;

}

