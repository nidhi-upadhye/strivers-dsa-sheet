#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& vec){
  int n = vec.size();
  int i = 0;

  for(int j=1; j<n; j++){
    if(vec[j]!=vec[i]){
      i++;
      vec[i] = vec[j];
    }
  }
  
  return i+1;
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

  int k = removeDuplicates(vec);
  
  cout<<"after removing duplicates: ";
  for(int i=0; i<k; i++){
    cout<<vec[i]<<" ";
  }

  return 0;
}