/*Write a program to find the sum of all elements in an array*/

#include<iostream>
using namespace std;

int sumElements(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    cout<<"Enter size of array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sum of all elements: "<<sumElements(arr,n)<<endl;
    return 0;

}