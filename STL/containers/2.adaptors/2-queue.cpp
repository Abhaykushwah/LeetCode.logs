#include<bits/stdc++.h>
#include<iostream>

using namespace std;

//  push,pop, front ---> O(1)

int main(){

    // code here
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.front()<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
    cout<<"Size of Queue is --> "<<q.size();

    return 0;
}