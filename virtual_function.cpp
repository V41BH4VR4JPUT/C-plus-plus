#include<bits/stdc++.h>
using namespace std;
class Base{
    public :
    int var_base = 2;
    virtual void display(){
        cout<<"the value of var_base is : "<<var_base<<endl;
    }
};
class Derived : public Base{
    public :
     int var_derived = 4;
    void display(){
        cout<<"the value of var_base is : "<<var_base<<endl;
        cout<<"the value of var_derived is : "<<var_derived<<endl;
    }
};
int main(){
  Base *base_class_pointer;
  Base obj_base;
  Derived obj_derived;
  base_class_pointer = &obj_derived;
  base_class_pointer->display();

    return 0;
}