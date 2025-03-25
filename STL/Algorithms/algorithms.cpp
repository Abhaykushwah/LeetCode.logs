#include<bits/stdc++.h>
#include<iostream>

using namespace std;
// bool comparator(pair <int, int> p1, pair <int, int> p2){   // only sort on the basies of second value
//     if(p1.second<p2.second) return true;
//     else return false;
// }
bool comparator(pair <int, int> p1, pair<int, int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    if(p1.first<p2.first) return true;
    else return false;
}

int main(){
    // code here
    int arr[5] = {4,5,3,7,9};
    
    sort(arr,arr + 5);      // sort(arr, arr+n);   //Ascending order
    for(int i : arr){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> v = {4,1,3,6,9,6,3,2};
    // sort(v.begin(),v.end());                    // By default ascending order
    sort(v.begin(),v.end(),greater<int>());                    // For reverse order sort
    for(int i : v){
        cout<<i<<" ";
    }cout<<endl;

    vector<pair<int, int>> v2 = {{1,2},{9,2},{4,6},{8,3}};
    sort(v2.begin(),v2.end());                      // sort on first element
    for (pair<int,int> i : v2){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;


    // sort on second element
        
    
    vector<pair<int, int>> v3 = {{1,2},{9,2},{4,6},{8,3}};
    sort(v3.begin(),v3.end(),comparator);
    for (pair<int,int> i : v3){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    return 0;
}