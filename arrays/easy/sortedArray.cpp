#include<bits/stdc++.h>
using namespace std;

bool sortedArray(vector<int>& vec){
  int n = vec.size();

  for(int i=0; i<n-1; i++){
    if(vec[i]>vec[i+1]){
      return false;
    }
  }
  return true;
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

  bool isSorted = sortedArray(vec);

  cout<<"sorted array: "<<boolalpha<<isSorted<<endl;

  return 0;
}