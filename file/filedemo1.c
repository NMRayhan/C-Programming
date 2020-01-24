#include<stdio.h>
#include<stdlib.h>
int main()
{
    char sentence[10][20];
    int i;

    FILE *file;

    file=fopen("name.txt","r");
    if(file==NULL){
        printf("Error File don't create\n");
        exit(1);
    }
    /*}
    for(i=1;i<5;i++){
    printf("Enter %d Sentence\n",i);
    gets(sentence[i]);
    }*/



    for(i=0;i<5;i++){
        fscanf(file,"%[^\n]",sentence[i]);
        printf("Data from the file:\n%s", sentence[i]);
    }
    fclose(file);
    return 0;
}
