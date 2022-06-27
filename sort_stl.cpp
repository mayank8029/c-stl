#include<bits/stdc++.h>

using namespace std ; 





int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
// SORTING IN ARRAY
// int n ; 
// cin>> n ;


// int a[n];

// for (int i =0 ; i<n ; i++){
//     cin>> a[i];
// }

// sort( a , a+n);

// for(int i=0 ; i<n ; i++){
//     cout<< a[i]<< endl;

// }



// SORTING IN VECTOR

int n ; 
cin>> n ;
vector<int> a(n);
for(int i=0 ; i<n ; ++i){
    cin>> a[i] ;
}

sort(a.begin() , a.end());
for(int i=0 ; i<n ; ++i){
    cout<< a[i]<< " ";

}

cout<< endl ; 

} 