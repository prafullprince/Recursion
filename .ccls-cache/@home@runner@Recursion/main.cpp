#include <iostream>
using namespace std;
#include <limits.h>

//           <     ,




//                 Q1 => Print Array
// void printArray(int arr[],int size,int idx){
//   if(idx>=size){
//     return;
//   }
//   cout<<arr[idx]<<endl;
//   printArray(arr,6,idx+1);
// }

// int main() {
//   int arr[] = {10,20,30,40,50,60};
//   int size=6;
//   int idx=0;
//   printArray(arr,size,idx);
// }




//             Q2 => linearSearch
// void linearSearch(int arr[],int size,int idx,int target){
//   if(idx>=size){
//     cout<<"target is not found";
//     return;
//   }
//   if(arr[idx]==target){
//     cout<<"target is found";
//     return;
//   }
//   linearSearch(arr, size, idx+1, target);
// }

// int main(){
//   int arr[] = {10,20,30,40,50,60};
//   int size = 6;
//   int idx = 0;
//   int target = 70;

//   linearSearch(arr,size,idx,target);
// }




//                    Q3 => maximum num in an array

int maximumNum(int arr[],int size,int idx,int &maxNum){
  if(idx>=size){
    return 0;
  }
  if(arr[idx]>maxNum){
    maxNum = arr[idx];
  }
  maximumNum(arr,size,idx+1,maxNum);
  return maxNum;
}

int main(){
  int arr[]={10,30,70,15,35,95};
  int size = 6;
  int idx =0;
  int maxNum = INT_MIN;

  int ans = maximumNum(arr,size,idx,maxNum);
  cout << ans << endl;
}