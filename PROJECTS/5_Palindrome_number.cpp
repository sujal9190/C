#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,temp,r;
    cout<<"Enter the number-->";
    cin>>num;
    temp=num;
    while (num>0)
    {
        r=num%10;
        sum=(sum*10)+r;
        num=num/10;
    }
    if (temp==sum)
    {
        cout<<"This is Palindrom number";
    }
    else
    {
        cout<<"This is not Palindrom number";
    }
}