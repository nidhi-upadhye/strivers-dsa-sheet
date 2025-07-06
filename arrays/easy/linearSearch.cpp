#include<bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int>& vec, int target){
  for(auto val: vec){
    if(val == target){
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

  cout<<"element present: "<<boolalpha<<linearSearch(vec,target)<<endl;

  return 0;
}