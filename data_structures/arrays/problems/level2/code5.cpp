/*Count the frequency of a given element*/

#include<iostream>
using namespace std;

int frequency(int arr[],int n,int element){
    int freq = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            freq++;
        }
    }
    return freq;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    cout<<"Enter element for frequency counting: ";
    cin>>element;
    cout<<"Frequecy of element "<<element<<" in array is : "<<frequency(arr,n,element)<<endl;
    return 0;
}