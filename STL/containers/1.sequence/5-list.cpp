#include<bits/stdc++.h>
#include<iostream>
#include<list>
using namespace std;

// list (doubly linkedlist)
//push_back and push_front
// emplace_back & emplace_front
// pop_back and pop front

// * the reason of having front opration is because it is implement as doubly Linkedlist
// * Random access of element is not possible       -->> queue[2]; will give error
// [ NOTE else ] : size, capacity, begin, end, rbegin, rend, erase, clear, front, back 

int main(){
    list<int> l;
    l.emplace_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);

    for(int element : l){
        cout<<element<<" ";
    }cout<<endl;

    l.pop_back();
    l.pop_front();

    for(int element : l){
        cout<<element<<" ";
    }cout<<endl;


    return 0;
}