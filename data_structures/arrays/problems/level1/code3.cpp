/*Write a program to find the average of elements in an array*/

#include<iostream>
using namespace std;

float average(int arr[],int n){
    float avg = 0;
    float total = 0;
    for(int i=0;i<n;i++){
        total+=arr[i];
    }
    avg=total/n;
    return avg;

}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Average of all elements of array: "<<average(arr,n)<<endl;
    return 0;    
}