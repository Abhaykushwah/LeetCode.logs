#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;

//                   time complexity
// push,emplace     O(log n)
// top              O(1)
// pop              O(log n)
// size
// empty

int main(){
    // code here
    // priority_queue<int> pq;         // [ NOTE ] : Largest number have high priority;
    priority_queue<int,vector<int>,greater<int>> pq;        // reverse order priority queue;
    pq.push(3);
    pq.push(4);
    pq.push(6);
    pq.push(8);
    pq.push(1);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}