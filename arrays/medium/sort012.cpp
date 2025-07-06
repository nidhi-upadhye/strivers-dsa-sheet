#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int>& vec){
  int n = vec.size();
  int low = 0, mid = 0, high = n-1;

  while(mid<=high){
    if(vec[mid]==0){
      swap(vec[low],vec[mid]);
      low++; mid++;
    }
    else if(vec[mid]==1){
      mid++;
    }
    else{
      swap(vec[mid],vec[high]);
      high--;
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

  sort012(vec);
  cout<<"after sorting: ";
  for(auto val: vec){
    cout<<val<<" ";
  }

  return 0;
}