/*Replace all negative numbers in and array with 0*/

#include<iostream>
using namespace std;

//Function to replace all negative occurences with 0 in array
void replaceNegativeToZero(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr[i]=0;
        }
    }
}


//Function to print all elements of an array
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    cout<<"Original Array: ";
    printArr(arr,n);
    replaceNegativeToZero(arr,n);
    cout<<"Array after replacing negative elements : ";
    printArr(arr,n);
    return 0;
}