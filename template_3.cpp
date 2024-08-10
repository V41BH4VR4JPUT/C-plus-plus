#include<bits/stdc++.h>
using namespace std;
//template with default parameters
template <class T1 = int, class T2 = char>
class test{
    public :
     T1 a;
     T2 b ;
     test(T1 x , T2 y){
         a = x;
         b = y ;
     }
     void display(){
         cout<<this->a<<" "<<this->b<<endl;
     }
};
int main(){
    test<char ,int> obj('1' , 0);
    obj.display();
    printf("hello");
    return 0;
}