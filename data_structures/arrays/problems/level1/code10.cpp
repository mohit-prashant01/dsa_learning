/*Calculate the product of all elements in the array*/

#include<iostream>
using namespace std;

long long allElementsProduct(int arr[],int n ){
    int product = 1;
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    return product;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements of array: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Product of all elements: "<<allElementsProduct(arr,n)<<endl;
    return 0;
}