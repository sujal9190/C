#include<stdio.h>
int main()
{
    int a,enter;
    printf("Enter the value\n\t:-");
    scanf("%d",&enter);
    for(a=1;a<=enter;a++){
        if (a==6)
        {
            break;
            // continue;
            // goto aa;
        }        
        printf("%d\n",a);
    }
    // aa:
    // printf("\n Hiiii");
}

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a,enter;
//     printf("Enter the value\n\t:-");
//     scanf("%d",&enter);
//     for(a=1;a<=enter;a++){
//         if (a==6)
//         {
//             continue;
//         }
//         printf("%d\n",a);
//     }
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a,enter;
//     printf("Enter the value\n\t:-");
//     scanf("%d",&enter);
//     for(a=1;a<=enter;a++){
//         if (a==6)
//         {
//             goto aa;
//         }
//         printf("%d\n",a);
//     }
//     aa:
//     printf("\n Hiiii");
// }
