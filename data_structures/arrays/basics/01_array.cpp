/*Introduction To Array*/

#include<iostream>
using namespace std;

//Function to display array
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Function to display matrix 
void displayMatrix(int matrix[][4],int m,int n){
    for(int i=0;i<m;i++){
        cout<<"[";
        for(int j=0;j<n;j++){
            cout<<matrix[i][j];
            if(j<n-1)cout<<", ";

        }
        cout<<" ]";
        cout<<endl;
    }
}

int main(){
    //Declaration of array
          //  int arr[5];  // uninitialized array contains garbage values
          //  display(arr,5);  //-992528464 32765 -1194626161 31035 -1192777136


    //Initialization and declaration 
          //  int arr[5]={10,20,30,40,50}; 
          //  display(arr,5); //10 20 30 40 50 


    //Partial Initialization
          //  int arr[5]={10,20,30};
          // display(arr,5); 

    //Automatic size deduction 
          //  int arr[]= {10,20,30};
          //  cout<<sizeof(arr)/sizeof(arr[0]);
          //  cout<<endl;

    //Dynamic Size (Run- Time Allocation using new)
        //   int n;
        //   cin>>n;
        //   int *arr = new int[n];
        //   for(int i=0;i<n;i++)cin>>arr[i];
        //   display(arr,n);

    //2D Array
        //   int matrix[3][4];   // uninitialized matrix contains garbage values
        int matrix[3][4]={{1,2,3,4},{5,6,7,8},{1,2,3,4}};  
        displayMatrix(matrix,3,4);  
          


}