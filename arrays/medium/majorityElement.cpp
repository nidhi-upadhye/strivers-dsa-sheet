#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& vec){
  int n = vec.size();
  sort(vec.begin(), vec.end());
  return vec[(n/2)];
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

  int ele = majorityElement(vec);
  cout<<"majority element: "<<ele<<endl;

  return 0;
}