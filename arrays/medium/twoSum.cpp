#include<bits/stdc++.h>
using namespace std;

bool twoSum(vector<int>& vec, int target){
  int n = vec.size();
  sort(vec.begin(), vec.end());

  int i = 0, j = n-1;
  while(i<j){
    if(vec[i]+vec[j]<target){
      i++;
    }
    else if(vec[i]+vec[j]>target){
      j--;
    }
    else{
      return true;
    }
  }

  return false;
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

  int target;
  cout<<"enter the target: ";
  cin>>target;

  bool res = twoSum(vec,target);
  cout<<"target achievable: "<<boolalpha<<res<<endl;

  return 0;
}