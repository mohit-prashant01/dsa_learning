//To insert an element at an array index

#include<iostream>
using namespace std;

//Display Array
void display(int arr[],int &size,int capacity){
    cout<<"Capacity: "<<capacity<<"\tSize: "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertAt(int arr[],int index,int value, int &size, int capacity){
    if(size>=capacity){
        cout<<"Array Full, Cannot insert";
        return;
    }
    if(index<0 || index>size){
        cout<<"Invalid Index"<<endl;
        return;
    }

    for(int i=size;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]= value;
    size++;
}


int main(){
    int capacity = 7;
    int size = 4;
    int arr[capacity]={10,20,30,40};
    int value = 100;
    int index = 2;
    display(arr,size,capacity);
    insertAt(arr,2,100,size,capacity);
    cout<<endl;
    display(arr,size,capacity);
    
    return 0;    
}