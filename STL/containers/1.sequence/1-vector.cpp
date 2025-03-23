// #include<bits/stdc++.h>
#include<vector>
#include<iostream>

using namespace std;

// size & capacity
// size is the number of element stored in vector
// capacity is the amount of elemet it can store.

// push_back & pop_back  -> most used push_back
// emplace_back
// [] or at()
// front & back

int main(){
    // code here
    vector<int> vec;
    vec.push_back(1);       // push_back add's data in the last --> it aussme's the data push_back is getting is already the same data type 
    vec.push_back(2);
    vec.push_back(4);
    vec.emplace_back(6);    // similar as push_back add's data in last -> it create inplace object's
    vec.push_back(5);
    vec.pop_back();         // delete last data from the vector
    vec.push_back(9);

    for(int i:vec) {        // for each loop
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of vector is -> "<<vec.size()<<endl;
    cout<<"capacity of vector is -> "<<vec.capacity()<<endl;

    //------ [] or at() ---------  accessing elemet as we do in array.
    cout<<"Element at 2 -> "<<vec[2]<<" or "<<vec.at(2)<<endl;

    // front and back function
    cout<<"Element at Front -> "<<vec.front()<<endl;
    cout<<"Element at Back -> "<<vec.back()<<endl;
    return 0;
}