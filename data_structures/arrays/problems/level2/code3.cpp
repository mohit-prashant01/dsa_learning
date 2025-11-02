/*Delete and element from a given index*/

#include<iostream>
#include<climits>
using namespace std;

//Function to delete element at a given index
//This function only demonstrate deletion it don't check for empty for array
void deleteAtIndex(int arr[],int &n,int index){
    if(index<0 || index>n-1){
        cout<<"Invalid Index"<<endl;
        return;
    }
    for(int i=index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--; //In order to reduce the size of the array on deletion
    // arr[n-1]=INT_MIN;
}


//Function to print array elements
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n=10;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    cout<<"Original Array: ";
    printArr(arr,n);

    int index;
    cout<<"Enter the index at which element is to be deleted: ";
    cin>>index;

    cout<<"Original Array: ";
    printArr(arr,n);

    deleteAtIndex(arr,n,index);
    cout<<"Array after deletion: ";
    printArr(arr,n);
    return 0;

}