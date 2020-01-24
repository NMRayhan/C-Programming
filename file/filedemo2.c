#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// a struct to read and write
struct person
{
    int id;
    char fname[20];
    char lname[20];
};

int main ()
{
    FILE *outfile;

    // open file for writing
    outfile = fopen ("person.txt", "w");
    if (outfile == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }

    struct person input1 = {1, "arif", "hasan"};
    struct person input2 = {2, "showkat", "jamil"};

    // write struct to file
    fwrite (&input1, sizeof(struct person), 1, outfile);
    fwrite (&input2, sizeof(struct person), 1, outfile);

    if(fwrite != 0)
        printf("contents to file written successfully !\n");
    else
        printf("error writing file !\n");

    // close file
    fclose (outfile);


    //reading from file

    FILE *infile;
    struct person input;

    // Open person.dat for reading
    infile = fopen ("person.dat", "r");
    if (infile == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }

    // read file contents till end of file
    while(fread(&input, sizeof(struct person), 1, infile))
        printf ("id = %d name = %s %s\n", input.id,
        input.fname, input.lname);

    // close file
    fclose (infile);

    return 0;
}

