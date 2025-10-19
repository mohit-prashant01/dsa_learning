/*Search for a given element in the array (Linear Search)*/

#include<iostream>
using namespace std;

//Function for linear search in an array
int linearSearch(int arr[],int n,int key){
    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            index = i;
            break;
        }
    }
    return index;
}

int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to search: ";
    int key;
    cin>>key;
    int index = linearSearch(arr,n,key);
    if(index==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index "<<index<<endl;
    }
    return 0;
}