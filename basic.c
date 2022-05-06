#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    FILE *testfile;
    testfile=fopen("C:/Users/sujal/OneDrive/Desktop/Sujal/test_file_4.txt","r");
    // fprintf(testfile,"How are you\nSujal");
    // printf("file created");
    if ((testfile = fopen("C:/Users/sujal/OneDrive/Desktop/Sujal/test_file_4.txt","r"))==NULL)
    {
        printf("Error!");
        exit(1);
    }
    fscanf(testfile,"%d",&num);
    printf("Value of n= %d",num);
    fclose(testfile);
    return 0;

}
