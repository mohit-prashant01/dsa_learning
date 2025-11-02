/*Count total number of duplicate elements*/

#include<iostream>
#include<unordered_map>
using namespace std;

int duplicateElements(int arr[],int n){
    unordered_map<int,int> mapp;
    for(int i=0;i<n;i++){
        mapp[arr[i]]++;
    }
    int count =0;
   
    for(auto ele:mapp){
        if(ele.second>1){
            count++;
        }
    }
    return count;
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
    cout<<"Total number of duplicates : "<<duplicateElements(arr,n)<<endl;
    return 0;
}