
#include<bits/stdc++.h>
using namespace std;
class box{
    private: 
     static int lenght;

     public:
      static void print(){cout<<"lenght = "<<lenght<<endl;}
};

int box :: lenght = 20;
int main()
 
{
    box::print();
    cout << "\n" << endl;
    return 0;  
}