// STACK : LIFO last in first out 

// ek khada container 

// 1: push
// 2: pop
// 3: top


// QUEUES

// FIFO  : first in first out 

// 1: push
// 2: pop
// 3: front 





#include<bits/stdc++.h>

using namespace std ; 

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

stack<int> s ; 
s.push(2);
s.push(3);
s.push(4);
s.push(5);

while (!s.empty())
{
    cout<<s.top()<< endl;
    s.pop();
}


queue<string> q ;
q.push("abc");
q.push("bcd");
q.push("cde");
q.push("def");
q.push("sjfkld");

while (!q.empty())
{
    cout<<q.front()<<endl;
    q.pop();

    
}




}