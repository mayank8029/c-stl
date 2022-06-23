// map ka har ek vlaue ek pair hota hai i.e. key and value 

// it is not of continues nature 

#include<bits/stdc++.h>

using namespace std ; 


void print(map<int , string> &m ){
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

map<int,string> m ;

m[1] = "acddfkjsk";
m[5] = "jsjfdvcx";
m[3]="uiusdhfvljfdk";
m[6];
m.insert({4,"sfdhjkd"});

auto it = m.find(1);


    if(it== m.end()){
        cout<< "no value"<<endl;
    }else{
cout<< it->first<<" "<< it->second;
    }
}

// m.erase(it);
// this will going to delete the iterator of given value



// m.clear();
// thsi will going to clear the given value 

// declare iterator and print map

// map<int,string> :: iterator it ;

// for(it=m.begin(); it!= m.end(); it++){
//     cout<< (*it).first<<" "<< (*it).second <<endl;
// }



//DECLARE ITERATOR AND PRINT MAP THROUGH SHORT METHOD 

// for(auto &value: m){
//     cout<<(value.first)<<" "<<value.second<<endl;
// }

// print(m);


// this will going to find the value of 3 and return the iterator of 3 ,



