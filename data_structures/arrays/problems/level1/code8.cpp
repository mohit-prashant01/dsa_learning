/*Find the sum of positive and negative numbers separately*/

#include<iostream>
using namespace std;
 
//Function to find the sum of positive numbers
int sumPositives(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            sum+=arr[i];
        }
    }
    return sum;
}

//Function to find the sum of negative numbers
int sumNegatives(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            sum+=arr[i];
        }
    }
    return sum;
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
    cout<<"Sum of positives: "<<sumPositives(arr,n)<<endl;
    cout<<"Sum of negatives: "<<sumNegatives(arr,n)<<endl;
    return 0;
}


