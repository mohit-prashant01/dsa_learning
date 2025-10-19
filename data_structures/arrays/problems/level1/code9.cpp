/*Input 10 numbers and count how many are greater than 50*/

#include<iostream>
using namespace std;

int countGreaterThan50(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>50){
            count++;
        }
    }
    return count;
}

int main(){
    int n=10;
    // cout<<"Enter size of the array: ";
    // cin>>n;
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Count of elements greater the 50: "<<countGreaterThan50(arr,n)<<endl;
    return 0;
}