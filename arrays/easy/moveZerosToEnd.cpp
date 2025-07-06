#include<bits/stdc++.h>
using namespace std;

void moveZerosToEnd(vector<int>& vec){
  int n = vec.size();

  int i = 0;
  while(vec[i]!=0){
    i++;
  }

  for(int j=i+1; j<n; j++){
    if(vec[j]!=0){
      swap(vec[j],vec[i]);
      i++;
    }
  }
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

  moveZerosToEnd(vec);

  cout<<"after moving zeros to the end: ";
  for(auto val: vec){
    cout<<val<<" ";
  }

  return 0;
}