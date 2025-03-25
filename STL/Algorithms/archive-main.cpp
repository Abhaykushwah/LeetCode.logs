#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;

int main(){
    // Binary Search
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(9);

    int number = 4;
    // cout<<"Enter number to find through binary search : ";
    // cin>>number;
    cout<<"Finding "<<number<<"-> "<<binary_search(v.begin(),v.end(),number)<<endl<<endl;
    

    // Min, Max, Swap, reverse
    int a =3;
    int b = 5;
    cout<<"max -> "<<max(a,b)<<endl;
    cout<<"min -> "<<min(a,b)<<endl;
    cout<<"Before swap : a ->"<<a<<" b -> "<<b<<endl;
    swap(a,b);
    cout<<"After Swap : a ->"<<a<<" b -> "<<b<<endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"string -> "<<abcd<<endl;
    
     vector<int> vectorArray(10) ;
     vectorArray.push_back(4);
     vectorArray.push_back(12);
     vectorArray.emplace_back(10);
    cout<<"The capacity of vector Array -> "<<vectorArray.size();

        for(int i = 0;i<10;i++){
            cout<<vectorArray[i]<<" ";
        }

     //  for( int i:vectorArray){
    //     cout<<vectorArray[i];
    //     cout<<" ";
    //  }

    return 0;
}



/*
These are the 4 thing in C++ STL
1. Algorithms
2. Containers    ------
3. Functions
4. Iterators     ------ 
*/