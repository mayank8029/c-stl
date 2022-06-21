#include<bits/stdc++.h>

using namespace std ; 

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // defining of pair 
    pair<int, string > p ;
 
    // here we can pair anything that is container datatype 

    p= make_pair(2,"abc");
// we can also initialise the pair in the below way 
    p= {2, "abcd"};

     pair<int, string > &p1 = p ;
// here we are passing refference so its value will be same as p 

// if we dont use & then it will make copy and output will not going to show the value assign by the p1.first
     p1.first= 5 ;

    cout<< p.first << " "<<p.second;

    // pairs are just use to maintain the relation between two things 
    
}