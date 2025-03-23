#include<bits/stdc++.h>
#include<iostream>

using namespace std;

// ------ more function ----------- 
// erase        O(n)
// insert       O(n)
// clear
// empty

int main(){
    
    //erase -> can delete single element, range of elements
    vector<int>vec={1,2,3,4,5,6,7};
                //  0,1,2,3,4,5,6   <--- this is indexing follow 
    // vec.erase(vec.begin()+1);               // begin()+1 -> this is a iterator  // deletion of single element
    // vec.erase(vec.begin());
    
    vec.erase(vec.begin()+1,vec.begin()+4);    // will delete 2 to 4
                                    // +4  this will till before one place before not the number at 4 index
    for(int i : vec){
        cout<<i<<" ";
    }cout<<endl;


    // insert                   vectorName.insert(position_at_insert,value_to_insert)
    vec.insert(vec.begin()+2,100);
    vec.insert(vec.begin()+2,4);
    vec.insert(vec.begin()+2,3);
    for(int i : vec){
        cout<<i<<" ";
    }cout<<endl;


    vector<int>vec2 = {11,22,33,44,12,23,45};
    cout<<"Before clearing the vector size is "<<vec2.size()<<endl;
    // vec2.push_back(1);
    for(int i : vec2){
        cout<<i<<" ";
    }cout<<endl;
    // empty()  ->  to check vector is empty or not, returns 0 or 1.
    cout<<"\nChecking is vector empty -> "<<vec2.empty();
    vec2.clear();           // delete's all element from the vector & does not change in size and capacity
    cout<<"After clearing the vector size is "<<vec2.size()<<endl;
    cout<<"After clearing the vector capacity is "<<vec2.capacity();
    cout<<"\n\nAfter clearing the vector checking return value of empty() fuction :"<< vec2.empty();
    return 0;
}