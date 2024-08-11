 #include<bits/stdc++.h>
 using namespace std;
 void display(list<int> &lst){
    list<int> :: iterator it;
    for(it = lst.begin(); it!=lst.end(); it++){
        cout<<*it<<" ";

    }
 }
 int main(){
    list<int> list1;
    int size , value;
    cout<<"enter the size : ";
    cin>>size;
    for(int i = 0 ; i<size; i++){
        cout<<"enter the value : ";
        cin>>value;
        list1.push_back(value);
    }
    list1.sort(); // for sorting 
    // for merging list1.merge(list2);
    // for reversing list1.reverse();
    display(list1);
    // manipulating the elements of the list
    //  cout<<endl;
    // list1.pop_front();
    //  display(list1);
    // cout<<endl;
    // list1.pop_back();
    //  display(list1);
    //   cout<<endl;
    // cout<<"enter the value to be removed : ";
    // int val;
    // cin>>val;
    //   list1.remove(val);
    //    display(list1);
    return 0;
 }