#include<bits/stdc++.h>
using namespace std;
class V{
    int a;
    public :
    void setdata(int a){
        this->a = a;
    }
    void display(){
        cout<<"the value of a is : "<<a<<endl;
    }
};
int main(){
    V obj;
    obj.setdata(4);
    obj.display();
    
    return 0;
}