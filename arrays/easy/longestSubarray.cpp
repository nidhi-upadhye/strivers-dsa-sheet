#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& vec, int target){
  int n = vec.size();
  int sum = 0, len = 0;

  int i = 0, j = 0;
  while(j<n){
    sum += vec[j];

    while(i<=j && sum>target){
      sum -= vec[i];
      i++;
    }
    
    if(sum==target){
      len = max(len,j-i+1);
    }
    j++;
  }

  return len;
}

int main(){
  int n;
  cout<<"enter the value of n: ";
  cin>>n;

  vector<int> vec(n);
  cout<<"enter the elements: ";
  for(int i=0; i<n; i++){
    cin>>vec[i];
  }

  int sum;
  cout<<"enter the sum: ";
  cin>>sum;

  int longestSub = longestSubarray(vec, sum);

  cout<<"longest subarray for the sum: "<<longestSub<<endl;

  return 0;
}