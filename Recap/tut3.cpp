#include <iostream>
using namespace std;

int main()
{
    // int intArray[] = {1,3,4,7,324,21};
    // int intArray_size = sizeof(intArray)/ sizeof(intArray[0]);
    // string stringArray[] = {"name", "age", "place", "thing"};
    // int stringArray_size = sizeof(stringArray)/ sizeof(stringArray[0]);
    // // cout<<intArray_size;
    // for(int i = 0;i <= intArray_size; i++){
    //     cout<<intArray[i]<<"\n";
    // }
    // for(int i = 0;i <= stringArray_size; i++){

    //     cout<<stringArray[i]<<"\n";
    // }

    // cout << "Enter the marks of 6 student: \n";
    // int marks[6];
    // for (int i = 0; i < 6; i++)
    // {
    //     cin >> marks[i];
    // }

    // for (int j = 0; j < 6; j++)
    // {
    //     cout << "Marks of " << j + 1 << "th student is " << marks[j]<<"\n";
    // }


    // int arr[] = {1,2,3};
    // for (int i = 0; i<3; i++){
    //     cout<<"Value are "<<arr[i]<<endl;
    // }


    int arr2d[3][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,22,33,44,55}
    };
    for (int i = 0; i<3; i++){
        for (int j = 0; j<5; j++){
            cout<<"The value at ("<<i<<","<<j<<") is " <<arr2d[i][j]<<endl;
        }   
    }



    return 0;
}