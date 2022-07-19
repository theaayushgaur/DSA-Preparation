#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"Enter the size of array:";
    cin>>size;
    cout<<"Enter the elements of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    //printing elements
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}


bool search(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
        return false;
    }
}



int main(){

    int arr[100];

    cout<<"Enter the no. of elements"<<endl;
    int n;
    cin>>n;

    //taking input in array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(search(arr,5,7)){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";

    }
       
    printArray(arr,n);
}