#include<bits/stdc++.h>
#include<iostream>

using namespace std;

// create vector in diff. diff. way

int main(){
    // code here
    vector<int> vec = {1,2,3,4,5,67,89,0};    // storing value at the time of creation
    for(int i:vec){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> vec2(3,10);        // important way for DP         // init vector of size 3 with all 10's
    vec2.push_back(2);
    vec2.push_back(2);   
    // vec2.push_back(2);
    vec2.push_back(2);
    vec2.pop_back();

    for(int i:vec2){
        cout<<i<<" ";
    }cout<<endl;
    cout<<vec2.capacity()<<endl;
    
    vector<int> vec3(vec);
    for (int i:vec3){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}