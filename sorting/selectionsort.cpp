#include<bits/stdc++.h>
using namespace std;

void swapp(int* a, int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(vector<int>& vec){
  int len = vec.size();
  int smallest, sIdx;

  for(int i=0; i<len-1; i++){
    smallest = vec[i];
    sIdx = i;
    for(int j=i+1; j<len; j++){
      if(vec[j]<smallest){
        smallest = vec[j];
        sIdx = j;
      }
    }
    swapp(&vec[i],&vec[sIdx]);
  }
}

int main(){
  int n, x;
  cout<<"enter value of n: ";
  cin>>n;

  vector<int> vec(n);
  cout<<"enter the elements: ";
  for(int i=0; i<n; i++){
    cin>>vec[i];
  }

  selectionSort(vec);

  cout<<"after sorting: ";
  for(auto val: vec){
    cout<<val<<" ";
  }

  return 0;
}