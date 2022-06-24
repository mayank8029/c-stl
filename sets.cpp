// maps sai value wala part hata do to jao bach(unique element or key ) jayega wo sets 

#include<bits/stdc++.h>

using namespace std ; 


void print(set<string> &s){
    for(string value: s ){
        cout<< value << endl;
    }
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

set<string> s ;
s.insert("abc");    //log(n)
s.insert("sghjvds");
s.insert("skdfhjs");

auto it = s.find("abc");
if(it != s.end()){
    cout<< (*it);
}else{

    cout<<"string doesnt exist "<< endl;
}
    



  //s et has all the functions of map such as erase so you can use it like the way i use there 

print(s);





}


//UNORDERD SET 

    // the basic difference is in unorderd set the order of the unique value doesnt matter 


    //multiset is also same as multimap , in this duplicates are allowed .

    // if duplicates are present then find() will going to return the first iterator in the set
    
