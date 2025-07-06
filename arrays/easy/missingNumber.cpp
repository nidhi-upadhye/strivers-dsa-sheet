#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& vec){
  int n = vec.size()+1;

  int sumOfNNums = (n*(n+1))/2;

  int sum = 0;
  for(int i=0; i<n-1; i++){
    sum += vec[i];
  }

  int missingNum = sumOfNNums - sum;
  return missingNum;
}

int main(){
  int n;
  cout<<"enter the value of n: ";
  cin>>n;

  vector<int> vec(n-1);
  cout<<"enter the (n-1) elements: ";
  for(int i=0; i<n-1; i++){
    cin>>vec[i];
  }

  int num = missingNumber(vec);

  cout<<"missing number: "<<num<<endl;

  return 0;
}