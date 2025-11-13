//Binary Search on Array

#include<iostream>
using namespace std;


//Binary Search Iterative
int binarySearchIterative(int arr[],int size,int key){
    int h = size-1,l=0;
    
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==key){
        return mid;
        }
       else if(arr[mid]<key){
         l=mid+1;
       }else{
        h=mid-1;
       }
    }
    return -1;

}


//Binary Search Recursive

int binarySearchRecursive(int arr[],int key,int l,int h){
    if(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            return binarySearchRecursive(arr,key,l,mid-1);
        else 
            return binarySearchRecursive(arr,key,mid+1,h);
    }
    return -1;
}

//Function to display array elements
void display(int arr[],int size){
    for(int i=0;i<size;i++)cout<<arr[i]<<" ";
    cout<<endl;
}


int main(){
    int size=9;
    int arr[size]={10,15,18,32,45,62,78,82,93};
    int key = 78;
    display(arr,size);
    // int index = binarySearchIterative(arr,size,key);
    int index = binarySearchRecursive(arr,key,0,size);
    if(index==-1){
        cout<<"Element "<<key<<" not found"<<endl;
    }
    else{
        cout<<"Element "<<key<<" found at index "<<index<<endl;
    }
}