/*Print all elements in reverse order*/

#include<iostream>
using namespace std;

void printElementReverse(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array elements in reverse order: ";
    printElementReverse(arr,n);
    return 0;
}