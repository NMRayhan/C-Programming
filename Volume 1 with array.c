#include<stdio.h>
int main()
{
    int course,student,counter,cgpa;

    //10 student 10 course same array
    float student_gradepoint[10][10];

    //10 student cgpa array
    float student_cgpa[10];

    //for student outer loop
    for(student=0; student<10; student++)
    {
        //for course inner loop
        for(course=0; course<10; course++)
        {
            printf("Enter %d student %d course gradepoint :",student+1,course+1);
            scanf("%f",&student_gradepoint[student][course]);
        }
    }
/*
    student_cgpa[0]=0;
    student_cgpa[0]=student_cgpa[0]+student_gradepoint[0][0]*3;
    student_cgpa[0]=student_cgpa[0]+student_gradepoint[0][1]*3;
    student_cgpa[0]=student_cgpa[0]+student_gradepoint[0][2]*3;
    student_cgpa[0]=student_cgpa[0]+student_gradepoint[0][3]*3;
    student_cgpa[0]=student_cgpa[0]+student_gradepoint[0][4]*3;
    student_cgpa[0]=student_cgpa[0]+student_gradepoint[0][5]*3;
    student_cgpa[0]=student_cgpa[0]+student_gradepoint[0][6]*3;
    student_cgpa[0]=student_cgpa[0]+student_gradepoint[0][7]*3;
    student_cgpa[0]=student_cgpa[0]+student_gradepoint[0][8]*3;
    student_cgpa[0]=student_cgpa[0]+student_gradepoint[0][9]*3;
    student_cgpa[0]=student_cgpa[0]/30;
*/
    for(counter=0; counter<10; counter++)
    {
        student_cgpa[counter]=0;
        for(course=0; course<10; course++)
        {
            student_cgpa[counter]=student_cgpa[counter]+student_gradepoint[counter][course]*3;

        }
        student_cgpa[counter]=student_cgpa[counter]/(float)(30);
    }
/*
    student_cgpa[1]=0;
    student_cgpa[1]=student_cgpa[1]+student_gradepoint[1][0]*3;
    student_cgpa[1]=student_cgpa[1]+student_gradepoint[1][1]*3;
    student_cgpa[1]=student_cgpa[1]+student_gradepoint[1][2]*3;
    student_cgpa[1]=student_cgpa[1]+student_gradepoint[1][3]*3;
    student_cgpa[1]=student_cgpa[1]+student_gradepoint[1][4]*3;
    student_cgpa[1]=student_cgpa[1]+student_gradepoint[1][5]*3;
    student_cgpa[1]=student_cgpa[1]+student_gradepoint[1][6]*3;
    student_cgpa[1]=student_cgpa[1]+student_gradepoint[1][7]*3;
    student_cgpa[1]=student_cgpa[1]+student_gradepoint[1][8]*3;
    student_cgpa[1]=student_cgpa[1]+student_gradepoint[1][9]*3;
    student_cgpa[1]=student_cgpa[1]/30;
*/
    for(counter=1; counter<10; counter++)
    {
        student_cgpa[counter]=0;
        for(course=0; course<10; course++)
        {
            student_cgpa[counter]=student_cgpa[counter]+student_gradepoint[counter][course]*3;

        }
        student_cgpa[counter]=student_cgpa[counter]/(float)(30);
    }
/*
    student_cgpa[2]=0;
    student_cgpa[2]=student_cgpa[2]+student_gradepoint[2][0]*3;
    student_cgpa[2]=student_cgpa[2]+student_gradepoint[2][1]*3;
    student_cgpa[2]=student_cgpa[2]+student_gradepoint[2][2]*3;
    student_cgpa[2]=student_cgpa[2]+student_gradepoint[2][3]*3;
    student_cgpa[2]=student_cgpa[2]+student_gradepoint[2][4]*3;
    student_cgpa[2]=student_cgpa[2]+student_gradepoint[2][5]*3;
    student_cgpa[2]=student_cgpa[2]+student_gradepoint[2][6]*3;
    student_cgpa[2]=student_cgpa[2]+student_gradepoint[2][7]*3;
    student_cgpa[2]=student_cgpa[2]+student_gradepoint[2][8]*3;
    student_cgpa[2]=student_cgpa[2]+student_gradepoint[2][9]*3;
    student_cgpa[2]=student_cgpa[2]/30;
*/
    for(counter=2; counter<10; counter++)
    {
        student_cgpa[counter]=0;
        for(course=0; course<10; course++)
        {
            student_cgpa[counter]=student_cgpa[counter]+student_gradepoint[counter][course]*3;

        }
        student_cgpa[counter]=student_cgpa[counter]/(float)(30);
    }
/*
    student_cgpa[3]=0;
    student_cgpa[3]=student_cgpa[3]+student_gradepoint[3][0]*3;
    student_cgpa[3]=student_cgpa[3]+student_gradepoint[3][1]*3;
    student_cgpa[3]=student_cgpa[3]+student_gradepoint[3][2]*3;
    student_cgpa[3]=student_cgpa[3]+student_gradepoint[3][3]*3;
    student_cgpa[3]=student_cgpa[3]+student_gradepoint[3][4]*3;
    student_cgpa[3]=student_cgpa[3]+student_gradepoint[3][5]*3;
    student_cgpa[3]=student_cgpa[3]+student_gradepoint[3][6]*3;
    student_cgpa[3]=student_cgpa[3]+student_gradepoint[3][7]*3;
    student_cgpa[3]=student_cgpa[3]+student_gradepoint[3][8]*3;
    student_cgpa[3]=student_cgpa[3]+student_gradepoint[0][9]*3;
    student_cgpa[3]=student_cgpa[3]/30;
*/
    for(counter=3; counter<10; counter++)
    {
        student_cgpa[counter]=0;
        for(course=0; course<10; course++)
        {
            student_cgpa[counter]=student_cgpa[counter]+student_gradepoint[counter][course]*3;

        }
        student_cgpa[counter]=student_cgpa[counter]/(float)(30);
    }
/*
    student_cgpa[4]=0;
    student_cgpa[4]=student_cgpa[4]+student_gradepoint[4][0]*3;
    student_cgpa[4]=student_cgpa[4]+student_gradepoint[4][1]*3;
    student_cgpa[4]=student_cgpa[4]+student_gradepoint[4][2]*3;
    student_cgpa[4]=student_cgpa[4]+student_gradepoint[4][3]*3;
    student_cgpa[4]=student_cgpa[4]+student_gradepoint[4][4]*3;
    student_cgpa[4]=student_cgpa[4]+student_gradepoint[4][5]*3;
    student_cgpa[4]=student_cgpa[4]+student_gradepoint[4][6]*3;
    student_cgpa[4]=student_cgpa[4]+student_gradepoint[4][7]*3;
    student_cgpa[4]=student_cgpa[4]+student_gradepoint[4][8]*3;
    student_cgpa[4]=student_cgpa[4]+student_gradepoint[4][9]*3;
    student_cgpa[4]=student_cgpa[4]/30;
*/
    for(counter=4; counter<10; counter++)
    {
        student_cgpa[counter]=0;
        for(course=0; course<10; course++)
        {
            student_cgpa[counter]=student_cgpa[counter]+student_gradepoint[counter][course]*3;

        }
        student_cgpa[counter]=student_cgpa[counter]/(float)(30);
    }
/*
    student_cgpa[5]=0;
    student_cgpa[5]=student_cgpa[5]+student_gradepoint[5][0]*3;
    student_cgpa[5]=student_cgpa[5]+student_gradepoint[5][1]*3;
    student_cgpa[5]=student_cgpa[5]+student_gradepoint[5][2]*3;
    student_cgpa[5]=student_cgpa[5]+student_gradepoint[5][3]*3;
    student_cgpa[5]=student_cgpa[5]+student_gradepoint[5][4]*3;
    student_cgpa[5]=student_cgpa[5]+student_gradepoint[5][5]*3;
    student_cgpa[5]=student_cgpa[5]+student_gradepoint[5][6]*3;
    student_cgpa[5]=student_cgpa[5]+student_gradepoint[5][7]*3;
    student_cgpa[5]=student_cgpa[5]+student_gradepoint[5][8]*3;
    student_cgpa[5]=student_cgpa[5]+student_gradepoint[5][9]*3;
    student_cgpa[5]=student_cgpa[5]/30;
*/
    for(counter=5; counter<10; counter++)
    {
        student_cgpa[counter]=0;
        for(course=0; course<10; course++)
        {
            student_cgpa[counter]=student_cgpa[counter]+student_gradepoint[counter][course]*3;

        }
        student_cgpa[counter]=student_cgpa[counter]/(float)(30);
    }
/*
    student_cgpa[6]=0;
    student_cgpa[6]=student_cgpa[6]+student_gradepoint[6][0]*3;
    student_cgpa[6]=student_cgpa[6]+student_gradepoint[6][1]*3;
    student_cgpa[6]=student_cgpa[6]+student_gradepoint[6][2]*3;
    student_cgpa[6]=student_cgpa[6]+student_gradepoint[6][3]*3;
    student_cgpa[6]=student_cgpa[6]+student_gradepoint[6][4]*3;
    student_cgpa[6]=student_cgpa[6]+student_gradepoint[6][5]*3;
    student_cgpa[6]=student_cgpa[6]+student_gradepoint[6][6]*3;
    student_cgpa[6]=student_cgpa[6]+student_gradepoint[6][7]*3;
    student_cgpa[6]=student_cgpa[6]+student_gradepoint[6][8]*3;
    student_cgpa[6]=student_cgpa[6]+student_gradepoint[6][9]*3;
    student_cgpa[6]=student_cgpa[6]/30;
*/
    for(counter=6; counter<10; counter++)
    {
        student_cgpa[counter]=0;
        for(course=0; course<10; course++)
        {
            student_cgpa[counter]=student_cgpa[counter]+student_gradepoint[counter][course]*3;

        }
        student_cgpa[counter]=student_cgpa[counter]/(float)(30);
    }
/*
    student_cgpa[7]=0;
    student_cgpa[7]=student_cgpa[7]+student_gradepoint[7][0]*3;
    student_cgpa[7]=student_cgpa[7]+student_gradepoint[7][1]*3;
    student_cgpa[7]=student_cgpa[7]+student_gradepoint[7][2]*3;
    student_cgpa[7]=student_cgpa[7]+student_gradepoint[7][3]*3;
    student_cgpa[7]=student_cgpa[7]+student_gradepoint[7][4]*3;
    student_cgpa[7]=student_cgpa[7]+student_gradepoint[7][5]*3;
    student_cgpa[7]=student_cgpa[7]+student_gradepoint[7][6]*3;
    student_cgpa[7]=student_cgpa[7]+student_gradepoint[7][7]*3;
    student_cgpa[7]=student_cgpa[7]+student_gradepoint[7][8]*3;
    student_cgpa[7]=student_cgpa[7]+student_gradepoint[7][9]*3;
    student_cgpa[7]=student_cgpa[7]/30;
*/
    for(counter=7; counter<10; counter++)
    {
        student_cgpa[counter]=0;
        for(course=0; course<10; course++)
        {
            student_cgpa[counter]=student_cgpa[counter]+student_gradepoint[counter][course]*3;

        }
        student_cgpa[counter]=student_cgpa[counter]/(float)(30);
    }
/*
    student_cgpa[8]=0;
    student_cgpa[8]=student_cgpa[8]+student_gradepoint[8][0]*3;
    student_cgpa[8]=student_cgpa[8]+student_gradepoint[8][1]*3;
    student_cgpa[8]=student_cgpa[8]+student_gradepoint[8][2]*3;
    student_cgpa[8]=student_cgpa[8]+student_gradepoint[8][3]*3;
    student_cgpa[8]=student_cgpa[8]+student_gradepoint[8][4]*3;
    student_cgpa[8]=student_cgpa[8]+student_gradepoint[8][5]*3;
    student_cgpa[8]=student_cgpa[8]+student_gradepoint[8][6]*3;
    student_cgpa[8]=student_cgpa[8]+student_gradepoint[8][7]*3;
    student_cgpa[8]=student_cgpa[8]+student_gradepoint[8][8]*3;
    student_cgpa[8]=student_cgpa[8]+student_gradepoint[8][9]*3;
    student_cgpa[8]=student_cgpa[8]/30;
*/
    for(counter=8; counter<10; counter++)
    {
        student_cgpa[counter]=0;
        for(course=0; course<10; course++)
        {
            student_cgpa[counter]=student_cgpa[counter]+student_gradepoint[counter][course]*3;

        }
        student_cgpa[counter]=student_cgpa[counter]/(float)(30);
    }
/*
    student_cgpa[9]=0;
    student_cgpa[9]=student_cgpa[9]+student_gradepoint[9][0]*3;
    student_cgpa[9]=student_cgpa[9]+student_gradepoint[9][1]*3;
    student_cgpa[9]=student_cgpa[9]+student_gradepoint[9][2]*3;
    student_cgpa[9]=student_cgpa[9]+student_gradepoint[9][3]*3;
    student_cgpa[9]=student_cgpa[9]+student_gradepoint[9][4]*3;
    student_cgpa[9]=student_cgpa[9]+student_gradepoint[9][5]*3;
    student_cgpa[9]=student_cgpa[9]+student_gradepoint[9][6]*3;
    student_cgpa[9]=student_cgpa[9]+student_gradepoint[9][7]*3;
    student_cgpa[9]=student_cgpa[9]+student_gradepoint[9][8]*3;
    student_cgpa[9]=student_cgpa[9]+student_gradepoint[9][9]*3;
    student_cgpa[9]=student_cgpa[9]/30;
*/
    for(counter=9; counter<10; counter++)
    {
        student_cgpa[counter]=0;
        for(course=0; course<10; course++)
        {
            student_cgpa[counter]=student_cgpa[counter]+student_gradepoint[counter][course]*3;

        }
        student_cgpa[counter]=student_cgpa[counter]/(float)(30);
    }

    //print 10 student cgpa without array
    printf("1 student CGPA : %f\n",student_cgpa[0]);
    printf("2 student CGPA : %f\n",student_cgpa[1]);
    printf("3 student CGPA : %f\n",student_cgpa[2]);
    printf("4 student CGPA : %f\n",student_cgpa[3]);
    printf("5 student CGPA : %f\n",student_cgpa[4]);
    printf("6 student CGPA : %f\n",student_cgpa[5]);
    printf("7 student CGPA : %f\n",student_cgpa[6]);
    printf("8 student CGPA : %f\n",student_cgpa[7]);
    printf("9 student CGPA : %f\n",student_cgpa[8]);
    printf("10 student CGPA : %f\n",student_cgpa[9]);



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





    //print this 10 student cgpa with array
    for(counter=0; counter<10; counter++)
    {
        printf("%d Student CGPA %f\n",counter+1,student_cgpa[counter]);
    }
    return 0;

}

