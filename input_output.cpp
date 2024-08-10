#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "vaibhav";
    string s2;
    // opening files using constructor and writing it in the file
    ofstream out("sample.txt");
    out<<s;
// opening files using constructor and reading the file
    ifstream in("sample2.txt");
    getline(in,s2);
    cout<<s2<<endl;
    return 0;
}