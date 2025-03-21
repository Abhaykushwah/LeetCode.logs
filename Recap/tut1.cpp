#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<< "code run pass\n";
    // short . int . long
    short small_val = 3457;
    int number = 345732321;
    long large_val = 345732321;
    long   long very_large_num = 3457658796732752234;
    
    string name = "Abhay";

    float const score = 75.2;
    double score1 = 124.342;
    long double score2 = 123.2443;

    // cout<<small_val<<"\n"<<number<<"\n"<<large_val<<"\n"<<very_large_num<<"\n"<<name;
    cout<<"score is : "<<score<<"\n";
    cout<<"score1 is : "<<score1<<"\n";
    cout<<"score2 is : "<<score2<<"\n";

    int const fix = 123;
    // cin>>fix;   ## not allowed
    cout<<fix;
    int a = 13;
    int b = 3;
    // a = (float)a;  # didn't work in this way
    cout<<endl<<"result of divid is : "<<(float) a/b;
    return 0;
}