/*Declare an integer array of size 5 and input its elements from the user, then print them.*/

#include<iostream>
using namespace std;

int main(){
    //Declaration of an array of type int
    int arr[5];
    cout<<"Enter the elements: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"\nArray Elements: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}