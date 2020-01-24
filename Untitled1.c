#include<stdio.h>
int main(){
    int dep_1_emp_1;
    int dep_1_emp_2;
    int dep_2_emp_1;
    int dep_2_emp_2;
    int calculation;

    printf("enter 1 department 1st employee salary \n");
    scanf("%d",&dep_1_emp_1);
    printf("enter 1 department 2nd employee salary \n");
    scanf("%d",&dep_1_emp_2);
    printf("enter 2 department 1st employee salary \n");
    scanf("%d",&dep_2_emp_1);
    printf("enter 2 department 2nd employee salary \n");
    scanf("%d",&dep_2_emp_2);

    calculation=(dep_1_emp_1+dep_1_emp_2+dep_2_emp_1+dep_2_emp_2);
    printf("%d is total amount\n",calculation);

    return 0;
}
