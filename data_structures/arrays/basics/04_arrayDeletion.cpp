/*Deleting an element from an array*/

#include<iostream>
using namespace std;

void display(int arr[],int size, int capacity){
    cout<<"Capacity: "<<capacity<<"\tSize: "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void deleteAt(int arr[],int &size, int capacity,int index){
    if(index<0 || index>=size){
       cout<<"Invalid index";
       return;
    }
    if(size==0){
        cout<<"Array is empty";
        return;
    }
    int deleted = arr[index];
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"Value "<<deleted <<" deleted at index "<<index<<endl;
}

int main(){
    int capacity = 7;
    int size = 5;
    int arr[capacity]={10,20,30,40,50};
    int index = 1;
    display(arr,size,capacity);
    deleteAt(arr,size,capacity,index);
    display(arr,size,capacity);
    return 0;
}