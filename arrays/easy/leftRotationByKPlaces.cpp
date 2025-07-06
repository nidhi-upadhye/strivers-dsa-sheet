#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& vec, int low, int high){
  while(low<high){
    swap(vec[low],vec[high]);
    low++; high--;
  }
}

void leftRotationByKPlaces(vector<int>& vec, int k){
  int n = vec.size();

  reverseArray(vec,0,k-1);
  reverseArray(vec,k,n-1);
  reverseArray(vec,0,n-1);
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

  int k;
  cout<<"enter the value of k: ";
  cin>>k;

  k = k%(vec.size());
  leftRotationByKPlaces(vec,k);  

  cout<<"after left rotation: ";
  for(auto val: vec){
    cout<<val<<" ";
  }

  return 0;
}