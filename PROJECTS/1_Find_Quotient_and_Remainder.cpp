#include<iostream>
using namespace std;
int main()
{
    long divisor,quotient,dividend,remainder;
    cout<<"Enter the 'Dividend'-->";
    cin>>dividend;
    cout<<"Enter the 'Divisor'-->";
    cin>>divisor;

    quotient=dividend/divisor;
    remainder=dividend % divisor;
    
    cout<<"Dividend -->"<<dividend<<endl;
    cout<<"divisor  -->"<<divisor<<endl;
    cout<<"Quotient -->"<<quotient<<endl;
    cout<<"remainder-->"<<remainder<<endl;
    
}