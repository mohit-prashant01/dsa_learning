/*Count how many elements are even and how many are odd*/

#include<iostream>
using namespace std;

int countEven(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    return count;
}

//If even numbers count is found odd number can be directly calculated as size - evenCount
//But following code calculate odd numbers from scratch 

int countOdd(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Even count: "<<countEven(arr,n)<<endl;
    cout<<"Odd count : "<<countOdd(arr,n)<<endl;
    return 0;
}