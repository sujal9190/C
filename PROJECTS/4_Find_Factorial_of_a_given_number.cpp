#include<iostream>
using namespace std;
class Factorial_number
{
    public:
    int n,Factorial=1.0;
    // long double Factorial=1.0;
    Factorial_number()
    {
        cout<<"Enter a positive Number";
        cin>>n;
        if (n<0)
        cout<<"number is negative please try again";
        else
        {
            for (int i = 1; i <= n; i++)
            {
                Factorial =Factorial*i;
            }
            cout<<"factorial of"<<n<<"--->>"<<Factorial;
        }
    }
};
int main()
{
    Factorial_number object;
}