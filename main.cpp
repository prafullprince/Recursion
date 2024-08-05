#include <iostream>
#include <vector>
using namespace std;
#include <limits.h>

// Q1 => My intuation to solve Print Array
/*
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
*/

// Q2 => My intuation to solve linearSearch
/*void linearSearch(int arr[],int size,int idx,int target){
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
*/

// Q3 => My intuation to solve maximum num in an array
/* int maximumNum(int arr[],int size,int idx,int &maxNum){
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
*/

// Q4 =>  My intuation to solve store in vector which is even num
/* void printArray(int arr[],int size,int idx, vector<int> &ans){
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
*/

// Q5 => My intuation to solve binary search by recursion
/* int binarySearch(vector<int> arr,int target,int start,int end){
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
*/

// Q6 => My intuation to solve digit from digits
/* void printDigits(int n){
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
*/

// Q7 => My intuation to solve check array is sorted or not
/* bool isSorted(vector<int> arr,int idx){
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
  */

// Q8 => My intuation to solve print all subsequences
/* void printSubsequences(string str, string output,int idx){
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
*/

// Q9 => My intuation to solve house robbery
/* int rob(vector<int> arr,int size,int idx){
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
*/

// Q10 => intuation come count dearrangement
/* 
int solve(int n){
  // base case
  if(n==1 || n==2){
    return n-1;
  }

  // 1case
  // mere pass 2 possibilities hai 1> main 1 element ko dusre kisi element se swap krwa de to ismn do element jagah badal chuke hain ab n-2 element bhi swap krenge recursion ko use krke.Hum 1 element ko ek hi jagah pe swap kiye hn but wo element to present 1 position ke allawa kahin n-1 jagah pe swap kr skata hai so code is
  int case1 = (n-1)*solve(n-2);
  // mere pass 2 possibilities hai 2> main 1 element ko dusre kisi element ke jagah pe rakh denge aur dusra element kahin aur bhi reh skta hai to is case mn mere pass 1 element jagah badal liya hai and n-1 element ko recursion se badal denge.Aur ye jagah n-1 jagah pe ki ja skti hai so code is
  int case2 = (n-1)*solve(n-1);

  // total possibilities is case1 + case2
  return case1+case2;

}
int main(){
  int n=2;
  int ans = solve(n);
  cout<<ans<<endl;
}
*/

// Q11 => My intuation to solve Buy And Sell Stocks 1
/*
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
*/

// Q14 => Wild Card Matching
/*
bool isMatchHelper(string &s, int si, string &p, int pi) {
  if (si == s.size() && pi == p.size()) {
    return true;
  }
  if (si == s.size() && pi < p.size()) {
    while (pi < p.size()) {
      if (p[pi] != '*') {
        return false;
      }
      pi++;
    }
    return true;
  }

  if (s[si] == p[pi] || p[pi] == '?') {
    return isMatchHelper(s, si + 1, p, pi + 1);
  }

  if (p[pi] == '*') {
    bool caseA = isMatchHelper(s, si, p, pi + 1);
    bool caseB = isMatchHelper(s, si + 1, p, pi);

    return caseA || caseB;
  }
  return false;
}

bool isMatch(string s, string p) {
  int si = 0;
  int pi = 0;

  return isMatchHelper(s, si, p, pi);
}
*/

// Q16 => My intuation to solve reverse an string
/*
void solve(vector<char> &s, int start, int end) {
  if (start > end) {
    return;
  }

  swap(s[start], s[end]);
  solve(s, start + 1, end - 1);
}

void reverseString(vector<char> &s) {
  int start = 0;
  int end = s.size() - 1;

  solve(s, start, end);
}
*/

// Q17 => merge two sorted arrays
/*
void mergeSorted(vector<int> arr, vector<int> brr, vector<int> &ans){
  int arrSize = arr.size();
  int brrSize = brr.size();
  int i=0;
  int j=0;

  while(i<arrSize && j<brrSize){
    if(arr[i]<brr[j]){
      ans.push_back(arr[i]);
      i++;
    }
    else{
      ans.push_back(brr[j]);
      j++;
    }
  }
  // when arr remains
  while(i<arrSize){
    ans.push_back(arr[i]);
    i++;
  }
  // when brr remains
  while(j<brrSize){
    ans.push_back(brr[j]);
    j++;
  }
}

int main(){
  vector<int> arr = {20,40,60,80,100};
  vector<int> brr = {10,30,50,70};
  vector<int> ans;

  mergeSorted(arr,brr,ans);

  for(int num:ans){
    cout<<num<<" ";
  }
}
*/

// Q18 => Merge Sort
/*
void merge(int arr[],int size,int start,int end,int mid){
  int lArrayLen = mid-start+1;
  int rArrayLen = end-mid;

  // create l & rArray
  int *lArray = new int[lArrayLen];
  int *rArray = new int[rArrayLen];

  // copy arr into l & rArray
  int index = start;
  for(int i=0;i<lArrayLen;i++){
    lArray[i] = arr[index];
    index++;
  }
  for(int i=0;i<rArrayLen;i++){
    rArray[i] = arr[index];
    index++;
  }
  // now merge lArray and rArray in main arr
  int i=0;
  int j=0;
  int mainIndex=start;
  while(i<lArrayLen && j<rArrayLen){
    if(lArray[i]<rArray[j]){
      arr[mainIndex] = lArray[i];
      mainIndex++;
      i++;
    }
    else{
      arr[mainIndex] = rArray[j];
      mainIndex++;
      j++;
    }
  }
  // 2 remaining cases
  while(i<lArrayLen){
    arr[mainIndex] = lArray[i];
    mainIndex++;
    i++;
  }
  while(j<rArrayLen){
    arr[mainIndex] = rArray[j];
    mainIndex++;
    j++;
  }

  // delete heap memory
  delete[] lArray;
  delete[] rArray;
}

void mergeSort(int arr[],int size,int start,int end){
  int mid = start + (end-start)/2;
 if(start>=end){
   return;
 }
  mergeSort(arr,size,start,mid);
  mergeSort(arr,size,mid+1,end);
  merge(arr,size,start,end,mid);
}

int main(){
  int arr[] = {20,30,50,70,90,80,60,40};
  int size = 8;
  int start = 0;
  int end = 7;
  mergeSort(arr,size,start,end);

  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}
*/

// Q19 => Permutation of string
/*void solve(string &str,int i,int n){
  if(i>=n){
    cout<<str<<endl;
  }

  for(int j=i;j<n;j++){
    swap(str[i], str[j]);
    solve(str, i+1, n);
    // backtracking
    swap(str[i], str[j]);
  }
}

int main(){
  string str = "abc";
  int i=0;
  int n=3;
  solve(str,i,n);
}
*/

// Q20 => My intuation to solve Palindrome
/*
bool isPalindrome(string &str,int i,int j){
  if(i>j){
    return true;
  }
  if(str[i]!=str[j]){
    return false;
  }
  return isPalindrome(str,i+1,j-1);
}

int main(){
  string str = "121";
  int len = str.size();
  int i=0;
  int j=len-1;
  // if(len < 0){
  //   return 0;
  // }

  bool ans = isPalindrome(str,i,j);
  cout<<ans<<endl;
}
*/

// Q21 => My intuation to solve coin change problem
/*    int solve(vector<int>& coins, int amount,int idx) {
        // base case
        if (amount == 0) {
            return 0;
        }
        if(idx>=coins.size() || amount < 0){
            return INT_MAX;
        }
        int mini = INT_MAX;

        // 1 case
        // take coin
        int coin = coins[idx];
        // int takeCoin = INT_MAX;
        int takeCoin = solve(coins,amount-coin,idx);
        if(takeCoin != INT_MAX){
            int coinUsed = 1 + takeCoin;
            mini = min(mini,coinUsed);
        }
        int notTakeCoin = solve(coins,amount,idx+1);

        return min(mini,notTakeCoin);
    }

    int coinChange(vector<int>& coins, int amount) {
        int idx = 0;
        int ans = solve(coins, amount,idx);
        if(ans == INT_MAX){
            return -1;
        }
        return ans;
    }
};
*/

// Q22 => My intuition to solve -> no. of ways coin change
/*    int solve(int amount,vector<int>& coins,int idx) {
        // base case
        if (amount == 0) {
            return 1;
        }
        if(idx>=coins.size() || amount < 0){
            return 0;
        }
        // int mini = INT_MAX;
        int ways = 0;
        // 1 case
        // take coin
        int coin = coins[idx];
        // int takeCoin = INT_MAX;
        int takeCoin = solve(amount-coin,coins,idx);
        if(takeCoin != 0){
            ways = takeCoin;
            // mini = min(mini,coinUsed);
        }
        int notTakeCoin = solve(amount,coins,idx+1);

        return ways+notTakeCoin;
    }

    int change(int amount, vector<int>& coins) {
        int idx = 0;
        int ans = solve(amount, coins,idx);
        // if(ans == 0){
        //     return 0;
        // }
        return ans;
    }

};
*/

// Q23 => My intituation to solve -> Buy and sell stocks 2
/*int maxmProfit(vector<int>& prices,int idx,int &maxProfit,int &buyPrice,int &sum){
  if(idx >= prices.size()){
      return sum;
  }
  if(buyPrice>prices[idx]){
      buyPrice = prices[idx];
  }
  int profit = prices[idx] - buyPrice;
  if(profit>maxProfit){
      maxProfit = profit;
      sum = sum + maxProfit;
      if(profit>0){
          buyPrice = prices[idx];
          maxProfit = INT_MIN;
      }
  }
  return maxmProfit(prices,idx+1,maxProfit,buyPrice,sum);
}

int maxProfit(vector<int>& prices) {
  int maxProfit = INT_MIN;
  int buyPrice = INT_MAX;
  int idx =0;
  int sum = 0;
  int ans = maxmProfit(prices,idx,maxProfit,buyPrice,sum);
  return ans;

}
*/

// void solve(string &S,int i,int j){
//   int size = S.length();
//  // base case
//  if(i==size-1 || j==size-1){
//      // output.push_back(S);
//    cout<<S<<endl;
//    return;
//  }
//  // 1 case
//  swap(S[i],S[j]);
//  // include
//  solve(S,i,i+1);
//   swap(S[i],S[j]);
//  //exclude
//  solve(S,i+1,i+1);
// }
// int main()
// {
// // Code here there
// string S = "abc";
// int i = 0;
// int j = 0;
// // vector<string> output;
// solve(S,i,j);
//   // for(int k=0;k<S.length();k++){
//   //   cout<<output[k]<<endl;
//   // }
// }


// Q24 => My intuation to solve max sum of non-adjacent element
/*int solve(vector<int> arr,int idx){
  int size = arr.size();
  // base case
  if(idx>=size){
    return 0;
  }

  // 1 case
  // include
  int includeAns = arr[idx] + solve(arr,idx+2);
  // exclude
  int excludeAns = solve(arr,idx+1);
  // cout<<max(includeAns,excludeAns)<<endl;
  return max(includeAns,excludeAns);
}
int main(){
  vector<int> arr = {12,4,1,6,8,5,2};
  int idx = 0;
  int ans = solve(arr,idx);
  cout<<"ans is: "<<ans<<endl;
}
*/

// Q25 => My intuation to solve house robbery 2
/*    int solve(vector<int>& nums,int idx){
        // base case
        if(idx>=nums.size()){
            return 0;
        }
        // 1 case
        // include
        int includeAns = nums[idx] + solve(nums,idx+2);
        // exclude
        int excludeAns = solve(nums,idx+1);

        return max(includeAns,excludeAns);
    }

    int rob(vector<int>& nums) {
        // created a dp array
        vector<int> dp(nums.size()+1,-1);
        int idx = 0;
        int ans = solve(nums,idx);
        return ans;
    }
*/

// Q26 => painting fence algorithm


int solve(int n){
  int k=3;
  if(n==1){
    return k;
  }
  if(n==2){
    return k*k;
  }
  // 1 case
  int diff = solve(n-1)*(k-1);
  int same = solve(n-2)*(k-1);
  return same+diff;
}

int main(){
  int n=6;
  int ans = solve(n);
  cout << ans << endl;
}