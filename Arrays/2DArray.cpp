#include<iostream>
using namespace std;

bool searchArray(int arr[3][3],int target,int row,int col){
     for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
             if(arr[i][j]==target){
                 return true;
             }
         }
     }
     return false;
}

int main(){

    int arr[3][3] = {5,1,3,4,6,8,10,9,11};
    cout<<"searching 13"<<searchArray(arr,13,3,3)<<endl;
}