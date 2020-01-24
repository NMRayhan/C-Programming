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
//***************************1st maximum cgpa find*******************
    max=student_cgpa[0];
    for(counter=0; counter<10; counter++)
    {
        if(student_cgpa[counter]>max)
        {
            max=student_cgpa[counter];
        location=counter;
        }
    }
    printf("%d student cgpa is %f\n",location,max);

    for(counter=location;counter<10-1;counter++){
        student_cgpa[counter]=student_cgpa[counter+1];
    }

//*************************2nd maximum cgpa find**********************
    max1=student_cgpa[0];
    for(counter=0; counter<10-1; counter++)
    {
        if(student_cgpa[counter]>max1)
        {
            max1=student_cgpa[counter];
        location1=counter;
        }
    }
    printf("%d student cgpa is %f\n",location1,max1);

    for(counter=location1;counter<10-2;counter++){
        student_cgpa[counter]=student_cgpa[counter+1];
    }

//*********************3rd maximum cgpa find*****************
    max2=student_cgpa[0];
    for(counter=0; counter<10-2; counter++)
    {
        if(student_cgpa[counter]>max2)
        {
            max2=student_cgpa[counter];
        location2=counter;
        }
    }
    printf("%d student cgpa is %f\n",location2,max2);

    for(counter=location2;counter<10-3;counter++){
        student_cgpa[counter]=student_cgpa[counter+1];
    }
//************************4th maximum cgpa find******************
    max3=student_cgpa[0];
    for(counter=0; counter<10-3; counter++)
    {
        if(student_cgpa[counter]>max3)
        {
            max3=student_cgpa[counter];
        location3=counter;
        }
    }
    printf("%d student cgpa is %f\n",location3,max3);

    for(counter=location3;counter<10-4;counter++){
        student_cgpa[counter]=student_cgpa[counter+1];
    }
//**********************5th maximum cgpa find****************
    max4=student_cgpa[0];
    for(counter=0; counter<10-4; counter++)
    {
        if(student_cgpa[counter]>max4)
        {
            max4=student_cgpa[counter];
        location4=counter;
        }
    }
    printf("%d student cgpa is %f\n",location4,max4);

    for(counter=location4;counter<10-5;counter++){
        student_cgpa[counter]=student_cgpa[counter+1];
    }
//*********************6th maximum cgpa find********************
    max5=student_cgpa[0];
    for(counter=0; counter<10-5; counter++)
    {
        if(student_cgpa[counter]>max5)
        {
            max5=student_cgpa[counter];
        location5=counter;
        }
    }
    printf("%d student cgpa is %f\n",location5,max5);

    for(counter=location5;counter<10-6;counter++){
        student_cgpa[counter]=student_cgpa[counter+1];
    }
//*************************7th maximum cgpa find*********************
    max6=student_cgpa[0];
    for(counter=0; counter<10-6; counter++)
    {
        if(student_cgpa[counter]>max6)
        {
            max6=student_cgpa[counter];
        location6=counter;
        }
    }
    printf("%d student cgpa is %f\n",location6,max6);

    for(counter=location6;counter<10-7;counter++){
        student_cgpa[counter]=student_cgpa[counter+1];
    }
//*****************8th maximum cgpa find*************
    max7=student_cgpa[0];
    for(counter=0; counter<10-7; counter++)
    {
        if(student_cgpa[counter]>max7)
        {
            max7=student_cgpa[counter];
        location7=counter;
        }
    }
    printf("%d student cgpa is %f\n",location7,max7);

    for(counter=location7;counter<10-8;counter++){
        student_cgpa[counter]=student_cgpa[counter+1];
    }
//******************9th maximum cgpa find******************
    max8=student_cgpa[0];
    for(counter=0; counter<10-8; counter++)
    {
        if(student_cgpa[counter]>max8)
        {
            max8=student_cgpa[counter];
        location8=counter;
        }
    }
    printf("%d student cgpa is %f\n",location8,max8);

    for(counter=location8;counter<10-9;counter++){
        student_cgpa[counter]=student_cgpa[counter+1];
    }
//*******************10th maximum cgpa find*****************
    max9=student_cgpa[0];
    for(counter=0; counter<10-9; counter++)
    {
        if(student_cgpa[counter]>max9)
        {
            max9=student_cgpa[counter];
        location9=counter;
        }
    }
    printf("%d student cgpa is %f\n",location9,max9);
    return 0;

}

