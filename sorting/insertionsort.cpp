#include<bits/stdc++.h>
using namespace std;

void swapp(int* a, int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void insertionSort(vector<int>& vec){
  int len = vec.size();

  for(int i=1; i<len; i++){
    int j = i-1;
    int temp = vec[i];
    while(j>=0 && vec[j]>temp){
      vec[j+1] = vec[j];
      j--;
    }
    vec[j+1] = temp;
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

  insertionSort(vec);

  cout<<"after sorting: ";
  for(auto val: vec){
    cout<<val<<" ";
  }

  return 0;
}