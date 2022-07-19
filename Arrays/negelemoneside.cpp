#include<iostream>
using namespace std;



void reArrange(int arr[],int n){
    int i=0,j=0;
    for(i=1;i<n;i++){
        if(arr[i]<0){
                swap(arr[i],arr[j]);
                j++;
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[7]={-1,0,-2,3,-4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    reArrange(arr,n);
    printArray(arr,n);
}