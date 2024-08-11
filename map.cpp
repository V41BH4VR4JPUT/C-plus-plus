#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string , float> marksMap;
    marksMap["vaibhav"] = 90.65;
    marksMap["nishant"] = 5.345;
    marksMap["vaishnavi"] = 95.34;
    marksMap.insert({{"sumit" , 90.34} , {"prabhjot" , 87.344}});
    map<string , float> :: iterator iter;
    for(iter = marksMap.begin(); iter != marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<marksMap.size()<<endl;
    cout<<marksMap.max_size()<<endl;
    cout<<marksMap.empty();
    return 0;
}