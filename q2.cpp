#include <iostream>
using namespace std;


//   Q2 => linearSearch
void linearSearch(int arr[],int size,int idx,int target){
  if(idx>=size){
    cout<<"target is not found";
    return;
  }
  if(arr[idx]==target){
    cout<<"target is found";
    return;
  }
  linearSearch(arr, size, idx+1, target);
}

int main(){
  int arr[] = {10,20,30,40,50,60};
  int size = 6;
  int idx = 0;
  int target = 40;

  linearSearch(arr,size,idx,target);
}