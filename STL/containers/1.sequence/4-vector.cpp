#include<bits/stdc++.h>
#include<iostream>

using namespace std;

// Iterator     -> works same as pointer. need to derefrance to access the value else it will give address.
// 1. begin()     -> points to first element of vector.
// 2. end()   [NOTE] -> points to `astElement + 1` where possibly garbage value or zero's stored


int main(){
    vector<int> vec = {1,2,3,4,5};
    cout<<"Begin of Vector "<<*(vec.begin())<<endl;
    cout<<"End of Vector : Giving addr "<<*(vec.end())<<endl;
    cout<<"End of Vector "<<*(vec.end()-1)<<endl;
    cout<<endl;
    cout<<"Reverse_Begin of Vector "<<*(vec.rbegin())<<endl;
    cout<<"Reverse_End of Vector "<<*(vec.rend()-1)<<endl<<endl;
    

    // =====================================================================

    // Generally we use the iterator to loop on vectors
    // loop on vector using vector iterator
        // type is iterator
    vector<int>::iterator itr;              // declartion of vector iterator
    cout<<"----User created forward vector iterator----\n";
    for(itr = vec.begin();itr!=vec.end();itr++){
        cout<< *(itr)<<" ";
    }cout<<endl;
    vector<int>::reverse_iterator r_itr;              // declartion of vector iterator
    cout<<"----User created reverse svector iterator----\n";
    for(r_itr = vec.rbegin();r_itr!=vec.rend();r_itr++){
        cout<< *(r_itr)<<" ";
    }cout<<endl;
    
    // =====================================================================
    // initialization inside for loop looks quite heavy 
    //  itr;              // declartion of vector iterator
    cout<<"----declartion of vector iterator inside for loop----\n";
    for(vector<int>::iterator itr = vec.begin();itr!=vec.end();itr++){   // declartion of vector iterator inside for loop
        cout<< *(itr)<<" ";
    }cout<<endl;

    //same as for reverse_iterator
    
    // =====================================================================
    cout<<"----automatic declartion of vector iterator inside for loop----\n";
    for(auto itr = vec.begin();itr!=vec.end();itr++){   // automatic declartion of vector iterator inside for loop
        cout<< *(itr)<<" ";
    }cout<<endl;
    

    cout<<"----automatic declartion of reverse vector iterator inside for loop----\n";
    for(auto itr = vec.rbegin();itr!=vec.rend();itr++){   // automatic declartion of reverse vector iterator inside for loop
        cout<< *(itr)<<" ";
    }cout<<endl;
    // =====================================================================



    return 0;
}