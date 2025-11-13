//Update Array

#include<iostream>
using namespace std;

//Function to update value at index update(arr[],index, value);
void update(int arr[],int size,int index, int value){
    if(index<0 || index>=size){
        cout<<"Invalid index"<<endl;
        return;
    }
    arr[index]=value;
}

//Function to display array elements
void display(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size=8;
    int arr[size]={15,18,3,6,48,78,7,92};
    int index = 4;
    int value = 5 ;
    display(arr,size);
    update(arr,size,index,value);
    display(arr,size);
    return 0;
}