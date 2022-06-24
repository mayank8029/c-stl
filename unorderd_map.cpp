#include<bits/stdc++.h>

using namespace std ; 

// maps inbuilt implimentaion kai liye trees ko use karte  whereas unorderd map hash ka use karte hai 


void print(unordered_map<int , string> &m ){
    cout<< m.size()<< endl;
    for(auto &value:m){
        cout<< value.first<<" "<< value.second<< endl;
    }
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

unordered_map<int ,string> m ; 

m[1]="abc";
m[5]="cdc";
m[3]="acd";
m[7]="aksdj";
print(m);


}

// unorderd map ki jagha multimap likh du to wahi implimentaition hai 

// the difference is multimap doesnot have unique key means it will store the value of same key twice 