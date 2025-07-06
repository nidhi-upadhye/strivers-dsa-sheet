#include<bits/stdc++.h>
using namespace std;

int numberAppearingOnce(vector<int>& vec){
  int num = 0;
  
  for(auto val: vec){
    num ^= val;
  }

  return num;
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

  int num = numberAppearingOnce(vec);

  cout<<"number appearing once: "<<num<<endl;

  return 0;
}