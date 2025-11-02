/*Find the second largest and second smallest number*/

#include<iostream>
#include<climits>
using namespace std;


//Complete it INCOMPLETE
int secondLargest(int arr[],int n){
    int largest = INT_MIN;
    int second = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest && arr[i]!=second){
           second=largest;
           largest=arr[i];
        }
        else if(arr[i]>second){
            second=arr[i];
        }
    }  
    return second;
}

int secondSmallest(int arr[],int n){
    int smallest = INT_MAX;
    int second = INT_MAX;
    for(int i=0;i<n;i++){
       if(arr[i]<smallest && arr[i]!=second){
         second=smallest;
         smallest=arr[i];
       }
       else if(arr[i]<second){
        second=arr[i];
       }
    }
    return second;
}

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Second Largest : "<<secondLargest(arr,n)<<endl;
    cout<<"Second Smallest: "<<secondSmallest(arr,n)<<endl;
    return 0;
}

