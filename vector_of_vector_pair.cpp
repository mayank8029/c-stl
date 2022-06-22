#include<bits/stdc++.h>
#include<iostream>

using namespace std ; 

void  printVector(vector<int> v ) {

    cout << "size"<<v.size()<<endl;
    for(int i=0 ; i<v.size() ; i++){
        cout << v[i]<<endl;
    }
    
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


// vector of pair declare from initials

    // vector<pair<int,int>> v = {{1,2},{2,3},{3,4},{4,5}};

// VECTOR OF PAIT FROM USER INPUT 

//  vector<pair<int,int>> v ;

// int n; 
// cin>>n;

// for(int i=0 ; i < n ; ++i){
//     int x,y;
//     cin>> x>> y ;
//     v.push_back({x,y});
// }

//NOW WE WANT TO CREATE THE VECTOR OF ARRAY
int N ;
cin>> N ;
vector<int> v[N] ;

for (int i=0 ; i<N; ++i){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    
    {
        int x ;
        cin>> x ;
      v[i].push_back(x);
    }
    
}
for(int i=0 ; i<N; i++){


printVector(v[i]);
}
cout<<v[0][0];// this means that 0th vector mai 0th element 
// here we have N vectors 


// VECTORS INSIDE VECTORS

}