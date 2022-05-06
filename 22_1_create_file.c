#include<stdio.h>
int main()
{
    FILE *testfile;
    testfile=fopen("C:/Users/sujal/OneDrive/Desktop/Sujal/test_file_4.txt","w");
    fprintf(testfile,"How are you\nSujal");
    printf("file created");
}
