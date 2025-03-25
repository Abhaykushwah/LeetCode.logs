#include<bits/stdc++.h>
#include<iostream>

// sorted order duplecate value will not increase the size of set.

using namespace std;

int main(){
    // code here
    set<int> s;
    s.insert(1);
    s.insert(13);
    s.insert(2);
    s.insert(2);
    s.insert(1);
    s.insert(4);
    
    for(int i: s){
        cout<<i<< " ";
    }
    cout<<"\nThe size of set -> "<<s.size();
    return 0;
}