#include<bits/stdc++.h>
using namespace std;
template <class T>
class Vector{
   public :
   T * arr;
   int size;
   Vector(int m){
    size = m;
    arr = new T[size];
   }

   T dotProduct(Vector &v){
    T d = 0;
    for(int i = 0; i< size ; i++){
        d += this->arr[i] * v.arr[i];
    }
    return d;
   }
};
int main(){
    // Vector<int> v1(3);
    // v1.arr[0] = 1;
    // v1.arr[1] = 2;
    // v1.arr[2] = 3;
    // Vector<int> v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 2;
    // v2.arr[2] = 3;
    // cout<<v1.dotProduct(v2);

    Vector<float> v1(3);
    v1.arr[0] = 1.5;
    v1.arr[1] = 2.5;
    v1.arr[2] = 3.5;
    Vector<float> v2(3);
    v2.arr[0] = 1.5;
    v2.arr[1] = 2.5;
    v2.arr[2] = 3.5;
    cout<<v1.dotProduct(v2);



    return 0;
}