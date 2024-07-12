#include <iostream>
#include <vector>
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

// int maximumNum(int arr[],int size,int idx,int &maxNum){
//   if(idx>=size){
//     return 0;
//   }
//   if(arr[idx]>maxNum){
//     maxNum = arr[idx];
//   }
//   maximumNum(arr,size,idx+1,maxNum);
//   return maxNum;
// }

// int main(){
//   int arr[]={10,30,70,15,35,95};
//   int size = 6;
//   int idx =0;
//   int maxNum = INT_MIN;

//   int ans = maximumNum(arr,size,idx,maxNum);
//   cout << ans << endl;
// }





//                 Q4 =>  store in vector which is even num

// void printArray(int arr[],int size,int idx, vector<int> &ans){
//   if(idx>=size){
//     return;
//   }
//   if(arr[idx]%2==0){
//     ans.push_back(arr[idx]);
//   }
//   printArray(arr,6,idx+1,ans);
// }

// int main() {
//   int arr[] = {10,21,33,40,54,50};
//   int size=6;
//   int idx=0;
//   vector<int> ans;
//   printArray(arr,size,idx,ans);

//   int s = ans.size();
//   for(int i=0;i<s;i++){
//     cout<<ans[i]<<endl;
//   }
// }





//       Q5 => binary search by recursion
// int binarySearch(vector<int> arr,int target,int start,int end){
//   if(start>end){
//     return -1 ;
//   }
//   int mid = start + (end-start)/2;

//   if(target==arr[mid]){
//     return mid;
//   }
//   else if(target>arr[mid]){
//     return binarySearch(arr,target,mid+1,end);
//   }
//   else{
//     return binarySearch(arr,target,start,mid-1);
//   }
// }

// int main(){
//   vector<int> arr={10,20,30,40,50,60,70,80,90};
//   int target = 60;
//   int start = 0;
//   int end = arr.size()-1;

//   int ans = binarySearch(arr,target,start,end);
//   cout << ans << endl;
// }



//    Q6 => digit from digits

// void printDigits(int n){
//   if(n==0){
//     return;
//   }
//   int digit = n%10; 
//   cout << digit << endl;
//   printDigits(n/10);
// }

// int main(){
//   int n = 38934525;

//   printDigits(n);
// }





//       07 => check array is sorted or not
bool isSorted(vector<int> arr,int idx){
  int size = arr.size();
  
  if(idx>=size){
    return true;
  }

  if(size==1){
    return true;
  }
  if(arr[idx]>arr[idx+1]){
    return false;
  }

  bool ans = isSorted(arr,idx+1);
  return ans;
}

int main(){
  vector<int> arr = {10};
  int idx = 0;

  bool finalAns = isSorted(arr,idx);

  if(finalAns==1){
    cout << "Array is sorted" << endl;
  }else{
    cout << "Array is not sorted" << endl;
  }
}