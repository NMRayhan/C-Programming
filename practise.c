#include<stdio.h>
int main()
{
    int student_cgpa[10];
    int counter,count,k;
    int size,temp,location;
    printf("enter an array::\n");
    scanf("%d",&size);
    printf("Enter %d array\n",size);

    for(count=0;count<size;count++){
        scanf("%d",&student_cgpa[count]);

    }
    for(count=0;count<size-1;count++){
        for(counter=0;counter<size-count-1;counter++){
            if(student_cgpa[counter]>student_cgpa[counter+1]){
            temp=student_cgpa[counter];
            student_cgpa[counter]=student_cgpa[counter+1];
            student_cgpa[counter+1]=temp;
            location=count+1;
            }
        }
    }
    printf("final Result\n");
    for(count=0;count<size;count++){
        printf("%d index element is %d\n",location,student_cgpa[count]);
    }

    return 0;
}
