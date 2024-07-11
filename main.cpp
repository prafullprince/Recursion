#include <iostream>
using namespace std;

//           <     ,

// Q1 => Print Array

void printArray(int arr[],int size,int idx){
  if(idx>=size){
    return;
  }
  cout<<arr[idx]<<endl;
  printArray(arr,6,idx+1);
}


int main() {

  int arr[] = {10,20,30,40,50,60};
  int size=6;
  int idx=0;

  printArray(arr,size,idx);
  
}