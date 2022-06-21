#include<bits/stdc++.h>

using namespace std ; 

void printvector(vector<int> v ){
       cout<< "size:"<<v.size()<<endl;
    for (int i= 0 ; i< v.size(); i++){
     
        cout<<v[i]<<""<<endl;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

vector<int> v;
int n;
cin>>n;

 for(int i=0 ; i<n ; i++){
    int x ;
    cin>>x ;
    v.push_back(x);
 }


printvector(v) ; 
cout<<"we will use popback function to remove the last value of the vector"<< endl;
v.pop_back();
printvector(v);
  



}