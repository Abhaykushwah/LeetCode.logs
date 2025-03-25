#include<bits/stdc++.h>
#include<iostream>

using namespace std;

//  map -> (key,value)
// map<key_type,value_type> variable_name;

// insertion in map
// m[key] = value;

int main(){
    // code here
    map<int,string> m;
                            // print in sorting asec even with string
    m[101] = "Abhay";
    m[102] = "Aman";
    m[103] = "Deepak";
    m[105] = "Shivam";
    m.emplace(123,"Random");
    m.insert({1232,"User"});        // O( log n)
    m[123] = "Shivam";

    for(pair<int,string> p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<"Count is " << m.count(105)<<endl;    // return the number of instance(value) associated with key
    cout<<"Count is " << m.size();
    cout<<"value at m[102] --> " << m[102]<<endl;


    if(m.find(123) != m.end()){
        cout<<"Found";
    }
    else{
        cout<<"Not FOund";
    }
    return 0;
}