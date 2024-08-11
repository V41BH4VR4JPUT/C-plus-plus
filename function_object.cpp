#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1 , 67 ,69,45,67,4321};
    sort(arr , arr+6) ;

    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(arr , arr+6, greater<int>()) ;
    
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}