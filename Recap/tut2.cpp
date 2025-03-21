// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

int returner(int a){
    a = a*a;
    return a;
}

int main(){
    // int age;
    // cout<<"Enter your age : ";
    // cin>>age;
    // switch(age){
    //     case 18:
    //     cout<<"You are "<<age<<" old.";
    //     // break;
    //     case 8:
    //     cout<<"You are "<<age<<" old.";
    //     // break;
    //     default:
    //     cout<<"Your age is not saved in database.";
    //     break;
    // }

    // int index = 0;
    // while (index<34){
    //     cout<<"We are at index number : "<<index<<"\n";
    //     index = index+1;
    //     break;
    // }

    // do{
    //     cout<<"hello it runs";
    //     index = index+1;
    // }while(index>123);

    // for (int i = 0; i< 23; i++){
    //     cout<<"value of i is still small. and the value of i is "<< i <<endl;
    // }
    int t;
    cout<<"Enter t to gift back a returner ";
    cin>>t;
    cout<<"Something is in return : "<<returner(t);

    return 0;
}