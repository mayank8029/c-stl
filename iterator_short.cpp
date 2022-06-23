#include<bits/stdc++.h>

using namespace std ; 

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


vector<int> v={1,2,3,4,5} ; 

for(int value : v){
    cout<<value<<endl;
}

for(int value : v){
    value++;
}

for(int value : v){
    cout<<value<<" ";
}

// even after applying ++ the value of the v is not increased because here value is the copy of v .

// if we want to do any function in v we have to make reference of the following thing i.e. we will going to use iterator 



for(int value : v){
    cout<<value<<endl;
}
// here we use reference 
for(int &value : v){
    value++;
}

for(int value : v){
    cout<<value<<" ";
}


vector <int> :: iterator it1 ;
for(it1=v.begin(); it1!= v.end(); it1++){

cout<< (*it1) << " "<<(*it1)<<endl;   
}

// here for defining iterator we have to define it fully

// shortcut is use of auto keyword 

// auto keyword will automatically take care of the type  of data like if it is int , double , iterator etc 



for(auto it1=v.begin(); it1!= v.end(); it1++){

cout<< (*it1) << " "<<(*it1)<<endl;   
}
// just by removing th defining of it1

// and by adding auto in the for loop 



}