/*Copy elements of one array to into another array*/

#include<iostream>
using namespace std;

void copyElementsAtoB(int A[],int B[],int n){
     for(int i=0;i<n;i++){
        B[i]=A[i];
     }
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter size of array A and B: ";
    cin>>n;
    int A[n],B[n];
    cout<<"Enter elements of array A: ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Before Copying elements: "<<endl;
    cout<<"A: ";
    printArr(A,n);
    cout<<"B: ";
    printArr(B,n);

    //Function to copy elements of array A to array B
    copyElementsAtoB(A,B,n);
    cout<<"After Copying elements: "<<endl;
    cout<<"A: ";
    printArr(A,n);
    cout<<"B: ";
    printArr(B,n);
    return 0;
}

