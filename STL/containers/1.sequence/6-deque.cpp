#include<bits/stdc++.h>
#include<iostream>
#include<deque>

using namespace std;

// [deque] is double ended queue
// [NOTE : ] -> dequeue it means poping element from a queue
// dequeue is implement by dynamic arrays
// Random access is possible        -->> queue[2]; will give a vaild value

int main(){
    // code here
    deque<char> q;
    q.push_back('a');
    q.push_back('b');
    q.push_back('h');
    q.push_back('a');
    q.push_back('y');

    for(char name: q){
        cout<<name<<" ";
    }cout<<endl;
    cout<<"Value at 2 in double ended queue -> "<<q[2];
    return 0;
}