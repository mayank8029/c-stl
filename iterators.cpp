#include<bits/stdc++.h>

using namespace std ; 

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


vector<int> v={1,2,3,4,5} ; 
for(int i=0; i<v.size();i++){
    cout<< v[i]<< endl;

}


cout << endl;

vector<int>:: iterator it = v.begin();
// cout << (*(it+1))<< endl;

for(it = v.begin(); it!= v.end(); it++){
    cout << (*it)<< endl;
}

vector<pair<int,int> > v1 = {{1,2},{2,3},{3,4}};

vector <pair<int,int>> :: iterator it1 ;
for(it1=v1.begin(); it1!= v1.end(); it1++){

cout<< (*it1).first << " "<<(*it1).second<<endl;   
}

for(it1=v1.begin(); it1!= v1.end(); it1++){

cout<< (it1->first) << " "<<(it1->second)<<endl;   
}


}


// (*it1).first <=> (it1->first)
// both are same 
// .begin() iterator will going to point the 0th position of the vector i.e its first element 

// .end() iterator will going to point the next element of the last one 

// it++ will going to take you to next iterator but it+1 will going to take you to the next position 

// in the case of vector next iterator lies in the next position so there is no issues but in the case of map and set it will give error 
