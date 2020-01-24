#include<stdio.h>
int main()
{
    int arr[100],n,i;
    int max,max2,location,location2;

    printf("enter an array number\n");
    scanf("%d",&n);
    system("cls");
    printf("enter %d number in array\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    system("cls");
    max=arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        location=i;

        }
    }
    printf("maximum number is %d and index is %d\n",max,location);
    for(i=location;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    printf("Final array \n");
    for(i=0;i<n-1;i++){
        printf("%d\n",arr[i]);
    }

    max2=arr[0];
    for(i=0; i<n-1; i++)
    {
        if(arr[i]>max2)
        {
            max2=arr[i];
        location2=i;

        }
    }
    printf("2nd maximum number is %d and index is %d\n",max2,location2);

    for(i=location2;i<n-2;i++){
        arr[i]=arr[i+1];
    }
    printf("Final array \n");
    for(i=0;i<n-2;i++){
        printf("%d\n",arr[i]);
    }

    printf("any key to continue");
    return 0;
}

