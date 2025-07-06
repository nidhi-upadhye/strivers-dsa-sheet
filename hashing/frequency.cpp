#include<iostream>
using namespace std;

int largestNo(int arr[], int n){
  int largest = arr[0], pos = 0;
  for(int i=1; i<n; i++){
    if(arr[i]>largest){
      largest = arr[i];
      pos = i;
    }
  }
  return pos;
}

void mapping(int arr[], int hash[], int n){
  for(int i=0; i<n; i++){
    hash[arr[i]] += 1;
  }
}

int main(){
  int n;
  cout<<"enter the value of n: ";
  cin>>n;

  int arr[n];
  cout<<"enter the elements: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int largest = arr[largestNo(arr, n)];

  int len = largest+1;
  int hash[len] = {0};

  mapping(arr, hash, n);

  cout<<"highest frequency: "<<largestNo(hash, len);

  return 0;
}