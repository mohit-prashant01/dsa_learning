/*Linear Search*/

#include<iostream>
using namespace std;

//Function for linear search
int linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){//if element found
            return i;   //return the index
        }
    }
    return -1;  //if element not found return -1
}



//Function to display array elements
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size=8;
    int arr[size]={48,10,65,63,8,12,6,20};
    int key = 97;
    int index = linearSearch(arr,size,key);
    display(arr,size);
    if(index==-1){
        cout<<"Element "<<key<<" not found"<<endl;
    }
    else{
        cout<<"Element "<<key<<" found at index "<<index<<endl;
    }
    return 0;
}