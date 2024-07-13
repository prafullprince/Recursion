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

// bool isSorted(vector<int> arr,int idx){
//   int size = arr.size();

//   if(idx>=size){
//     return true;
//   }

//   if(size==1){
//     return true;
//   }
//   if(arr[idx]>arr[idx+1]){
//     return false;
//   }

//   bool ans = isSorted(arr,idx+1);
//   return ans;
// }

// int main(){
//   vector<int> arr = {10};
//   int idx = 0;

//   bool finalAns = isSorted(arr,idx);

//   if(finalAns==1){
//     cout << "Array is sorted" << endl;
//   }else{
//     cout << "Array is not sorted" << endl;
//   }
// }

//       08 => print all subsequences

// void printSubsequences(string str, string output,int idx){
//   if(idx>=str.length()){
//     cout<<"subseqences of string are: "<< output << endl;
//     return;
//   }
//   char ch = str[idx];
//   // 1 case
//       // include
//   printSubsequences(str,output+ch,idx+1);
//       // exclude
//   printSubsequences(str,output,idx+1);

// }

// int main(){
//   string str = "abc";
//   string output = "";
//   int idx = 0;

//   printSubsequences(str,output,idx);
// }

//             09 => house robbery

// int rob(vector<int> arr,int size,int idx){
//   if(idx>=size){
//     return 0;
//   }
//   // 1 case
//       // 1st include
//   int includeAns = arr[idx] + rob(arr, size, idx+2);
//       // 1st exclude
//   int excludeAns = 0 + rob(arr,size,idx+1);
//   int maxAns = max(includeAns, excludeAns);

//   return maxAns;
// }

// int main(){
//   vector<int> arr = {1,2,3,7};
//   int size = arr.size();
//   int idx = 0;

//   int finalAns = rob(arr,size,idx);
//   cout << finalAns << endl;
// }

//         Q11 => coins change. 1) no. of ways

// int coinChange(int coin,int amount){
//   if(amount == 0){
//     return 0;
//   }
//   int recAns = coinChange(coin, amount-coin);
//   int ans = 1 + recAns;
//   return ans;
// }

// int main(){
//   int coin = 5;
//   int amount = 10;

//   int finalAns = coinChange(coin,amount);

//   cout << finalAns << endl;
// }

//         Q11 => coins change. 2) minimum no. of coins

// int coinChangeMinCoins(int coins[],int amount,int idx){
//   if(amount==0){
//     return 0;
//   }
//   if(idx>=4){
//     return INT_MAX;
//   }
//   int coin = coins[idx];
//   // take coin
//   int takeCoin = 1 + coinChangeMinCoins(coins, amount-coin, idx);
//   // not take coin
//   int notTakeCoin = 0 + coinChangeMinCoins(coins, amount, idx+1);

//   return min(takeCoin, notTakeCoin);
// }

// int main(){
//   int coins[] = {1,2,5,10};
//   int amount = 11;
//   int idx = 0;

//   int finalAns = coinChangeMinCoins(coins, amount, idx);

//   if(finalAns==INT_MAX){
//     cout << "Not possible" << endl;
//   }else{
//     cout << "minimum coins required: " << finalAns << endl;
//   }
// }

// int coinChange(int coins[], int amount) {
//   if (amount == 0) {
//     return 0;
//   }
//   int mini = INT_MAX;

//   for (int i = 0; i < 3; i++) {
//     int coin = coins[i];
//     if (coin <= amount) {
//       int recAns = coinChange(coins, amount - coin);
//       if (recAns != INT_MAX) {
//         int coinUsed = 1 + recAns;
//         mini = min(coinUsed, mini);
//       }
//     }
//     // else{
//     //   mini = INT_MAX;
//     // }
//   }
//   return mini;
// }

// int main() {
//   int coins[] = {2, 5, 1};
//   int amount = 11;

//   int finalAns = coinChange(coins, amount);
//   if (finalAns == INT_MAX) {
//     cout << "not possible ways" << endl;
//   } else {
//     cout << finalAns << endl;
//   }
// }




//     Q12 => count dearrangement

// int deArrangement(int n){
//   if(n==1){
//     return 0;
//   }
//   if(n==2){
//     return 1;
//   }
//   return (n-1)*(deArrangement(n-2)+ deArrangement(n-1));
// }

// int main(){
//   int n = 4;

//   cout<< "no of deaarangement possible is: " <<deArrangement(n);
// }




//         Q13 => Buy And Sell Stocks

void maxmProfit(int prices[],int day,int idx,int &minPrice,int &maxProfit){
  if(idx >= day){
    return;
  }
  

  // 1 case
  if(prices[idx] < minPrice){
    minPrice = prices[idx];
  }
  int todayProfit = prices[idx]-minPrice;
  if(todayProfit>maxProfit){
    maxProfit = todayProfit;
  }
  maxmProfit(prices,day,idx+1,minPrice,maxProfit);

}


int main(){
  int prices[] = {7,1,5,3,6,4};
  int day = 6;
  int minPrice = INT_MAX;
  int maxProfit = INT_MIN;
  
  maxmProfit(prices,day,0,minPrice,maxProfit);
  cout<<maxProfit<<endl;
}