/*Find the maximum and minimum element in an array*/

#include<iostream>
#include<climits>
using namespace std;

int minElement(int arr[],int n){
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<ans){
            ans=arr[i];
        }
    }
    return ans;
}

int maxElement(int arr[],int n){
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    return ans;
}

int main(){
    int n ;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximum Element: "<<maxElement(arr,n)<<endl;
    cout<<"Minimum Element: "<<minElement(arr,n)<<endl;
    return 0;
}