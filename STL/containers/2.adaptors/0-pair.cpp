#include<iostream>
#include<vector>
using namespace std;

int main(){
    pair<int, int> p ={1, 5};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    pair<string, int> user = {"Abhay", 22};

    cout<<user.first<<endl;
    cout<<user.second<<endl;

    // pair of pair

    pair<char , pair<string, bool>> p2 = {'d',{"User", false}};
    cout<<p2.first<<" " <<p2.second.first<< " "<< p2.second.second<<endl;

    // vector of pair

    // vector<int> name = {1,2,3,4,5};
    vector<pair<string,int>> name  = {{"Abhay",22},{"Deepak", 23},{"Shivam",24}};   // insted of define pair we can use `auto`
    for (pair<string,int> i : name){
        cout<<i.first<< " \t"<< i.second<<endl;
    }
    cout<<endl;

    // inserting value separately in vector of pair
    vector<pair<char,int>> v1;
    v1.push_back({'a',1});
    v1.push_back({'b',223});  // push_back just insert the given data
    v1.emplace_back('4',6);   // emplace_back creates in-place object and the insert, through which we don't need make pair's of it. and emplace_back is faster then puch_back
    for (pair<char,int> i : v1){
        cout<<i.first<< " \t"<< i.second<<endl;
    }
}