#include<iostream>
using namespace std;
class ASCII
{
    public:
    char c;int i;

    void by_entering_char()
    {
        cout<<"Enter the char : "<<endl;
        cin>>c;
        cout<<int(c);
    }

    void by_entering_number()
    {
        cout<<"Enter the num value : "<<endl;
        cin>>i;
        cout<<char(i);
    }

    void muliple_time_run()
    {
        cout<<"Enter the value as far as you want"<<endl;
        int user_input;
        cin>>user_input;
        for (i=1; i<user_input; i++)
        {
            for (c = 1; i <user_input; i++)
            {
                cout<<i<<"="<<char(i)<<endl;
            }   
            // cout<<char(i)<<endl;
        }    
    }
    void switch_case()
    {
        cout<<"Enter 1 for 'char to int'"<<endl;
        cout<<"Enter 2 for 'int to char'"<<endl;
        cout<<"Enter 3 for 'Series from 0 to you want'"<<endl;
        int ch;
        cin>>ch;
        switch (ch)
        {
        case 1:
            by_entering_char();
            break;
        case 2:
            by_entering_number();
            break;
        case 3:
            muliple_time_run();
            break;
        default:
            break;
        }
    }
};
int main()
{
    ASCII object;
    object.switch_case();
}