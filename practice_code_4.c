#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    char c;
    fp = fopen("C:/Users/sujal/OneDrive/Desktop/Sujal/test_file_4.txt","r");
    if (fp== NULL)
    {
        printf("File dosn't exist \n");
    }
    else
    {
        while(c!=EOF)
        {
            c=getc(fp);
            putchar(c);

        }
        fclose(fp);
    }
    
    
    return 0;
}
