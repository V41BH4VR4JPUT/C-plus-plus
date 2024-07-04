/*switch-case statement*/
#include<iostream>
using namespace std;
// basic calculator
int main()
{
    int n1 , n2;
    cin>>n1;
    cin>>n2;
    cout<<"the numbers you given are: "<<n1<<endl<<n2<<endl;
    cout<<"enter what calculation you want to be done\n for additon type a\n for substraction type b\n for multiplication type c\n for division type d\n "<<endl;
    char button;
    cin>>button;

    switch (button)
    {
    case 'a' :
        cout<<"the addition of two numbers is :"<<n1+n2<<endl;
        break;
    case 'b' :
        cout<<"the substraction of two numbers is :"<<n1-n2<<endl;
        break;
    case 'c' :
        cout<<"the multiplication of two numbers is :"<<n1*n2<<endl;
        break;
    case 'd' :
        cout<<"the division of two numbers is :"<<n1 / n2<<endl;
        break;    
    default:
    cout<<"sytax error!!"<<endl;
        break;
    }
    return 0;

}