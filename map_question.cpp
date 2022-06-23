// we need to find the frequecy of the string that we will going to take .


#include<bits/stdc++.h>

using namespace std ; 





int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int n;

map<string, int> m;
cin>> n;

for(int i=0; i<n; i++){
string s ;
cin>> s;

m[s]=m[s]+1;
m[s]++;
}

for(auto pr : m ){
    cout<<pr.first<<' '<< pr.second<<endl ;
}

// initially m[s] is 0 




}