/*Update the value at a specific index*/

#include<iostream>
using namespace std;

//Function to update a value at a given index in array
void updateValueAtIndex(int arr[],int n,int index, int val){
     if(index>n-1 || index<0){
        cout<<"Invalid Index"<<endl;
        return;
    }
    int temp = arr[index];
    arr[index]=val;
    cout<<"Value "<<temp<<" at index "<<index<<" updated to value "<<arr[index]<<endl;
}


//Function to print array elements
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n = 10;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }

    cout<<"Original Array: ";
    printArr(arr,n);

    int val,index;
    cout<<"Enter value: ";
    cin>>val;
    cout<<"Enter index for updation: ";
    cin>>index;

    cout<<"\nOriginal Array: ";
    printArr(arr,n);
    updateValueAtIndex(arr,n,index,val);
    cout<<"Updated  Array: ";
    printArr(arr,n);
}