#include<bits/stdc++.h>
#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    // code here                insert, erase, count -> Mostly O(1)
    unordered_map<string,int> m;
    m.emplace("fridge",50);
    m.emplace("tv",100);
    m.emplace("laptop",100);
    m.emplace("watch",150);
    m.emplace("ac",40);

    m.erase(m.find("tv"));

    for(pair<string,int> i : m){
        cout<< i.first<<" \t"<<i.second<<endl;
    }
    return 0;
}