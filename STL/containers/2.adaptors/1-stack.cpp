#include<bits/stdc++.h>
#include<iostream>

using namespace std;

// stack -- LIFO
/*
push,emplace
top
pop
size
empty
swap
*/


//  push,pop,top ---> O(1)

int main(){
    // code here
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // cout<<"Size of stack is -> "<<s.size()<<endl;
    // while ( !s.empty()){   
        //     cout<<s.top()<<" ";
        //     s.pop();
        // }
        // cout<<"\nSize of stack is -> "<<s.size();
        stack<int> s2;
        s2.swap(s);
        cout<<"Size of s stack -> "<<s.size()<<"\n";
        cout<<"Size of s2 stack -> "<<s2.size()<<"\n";
        while ( !s2.empty()){   
                cout<<s2.top()<<" ";
                s2.pop();
        }
        

    return 0;
}