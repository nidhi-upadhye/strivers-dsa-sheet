#include<bits/stdc++.h>
using namespace std;

void swapp(int* a, int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(vector<int>& vec){
  bool isSorted;
  int len = vec.size();

  for(int i=0; i<len-1; i++){
    isSorted = true;
    for(int j=0; j<len-i-1; j++){
      if(vec[j]>vec[j+1]){
        swapp(&vec[j],&vec[j+1]);
        isSorted = false;
      }
    }
    if(isSorted){
      break;
    }
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

  bubbleSort(vec);

  cout<<"after sorting: ";
  for(auto val: vec){
    cout<<val<<" ";
  }

  return 0;
}