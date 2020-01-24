#include<stdio.h>
int main()
{
    int arr[100],n,i,sw;
    int max,location;

    printf("enter an array number\n");
    scanf("%d",&n);

    printf("enter %d number in array\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
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
    for(i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
            sw=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=sw;
            }
    }
    for(i=location;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    printf("Final Result is..\n");
    for(i=0;i<n-1;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
