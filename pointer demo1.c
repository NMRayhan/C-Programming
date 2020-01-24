#include<stdio.h>
int main()
{
    int x=5,y=10,z;

    int *ptr;
    z=x+y;
     ptr=&z;
     printf("Address of z = %d\n",&z);
     printf("Address of x = %d\n",&x);
     printf("Address of y = %d\n",&y);
     printf("Z = %d\n",*ptr);
     printf("address of ptr is = %d\n",ptr);

    getch();
}
