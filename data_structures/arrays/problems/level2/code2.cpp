/*Insert a new element at a given index*/

/*For inserting a new element at a given index the shifting of the existing elements is to be done, this is an expensive operation*/

#include<iostream>
using namespace std;


//This code only demonstrate insertion, the item at last is lost on inserting an element 
void insertAtPos(int arr[],int n, int element, int pos){
    if(pos<0 || pos>=n){
        cout<<"Invalid position"<<endl;
        return;
    }
    for(int i=n-1;i>pos;i--){
        if(i>0){
            arr[i]=arr[i-1];
        }
    }
    arr[pos]=element;
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
   int n = 10;
   int arr[n];
   for(int i=0;i<n;i++){arr[i]=i+1;}
   int element,pos;
    cout<<"Original Array: ";
   printArr(arr,n);
   cout<<"Enter the element: ";
   cin>>element;
   cout<<"Enter the position: ";
   cin>>pos;

   cout<<"Original Array: ";
   printArr(arr,n);
   insertAtPos(arr,n,element,pos);
   cout<<"Array after insertion: ";
   printArr(arr,n);
   return 0;
   }

