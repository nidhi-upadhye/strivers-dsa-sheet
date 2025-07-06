#include<bits/stdc++.h>
using namespace std;

void leftRotationByOne(vector<int>& vec){
  int n = vec.size();
  int temp = vec[0];

  for(int i=1; i<n; i++){
    vec[i-1] = vec[i];
  }

  vec[n-1] = temp;
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

  leftRotationByOne(vec);  

  cout<<"after left rotation: ";
  for(auto val: vec){
    cout<<val<<" ";
  }

  return 0;
}