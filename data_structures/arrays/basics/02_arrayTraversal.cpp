/*Array operations*/

#include<iostream>
using namespace std;

//Array Traversal
void traversal(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;

    //Dynamic array allocation
    int *arr = new int[n];

    cout<<"Enter "<<n<<" array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Traversal
    traversal(arr,n);

}