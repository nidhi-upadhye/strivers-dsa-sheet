#include<iostream>
using namespace std;

void reverseArray(int arr[], int low, int high){
  if(low>high){
    return;
  }
  swap(arr[low], arr[high]);
  reverseArray(arr, ++low, --high);
}

int main(){
  int n;
  cout<<"enter value of n: ";
  cin>>n;

  int arr[n];
  cout<<"enter the elements: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  reverseArray(arr, 0, n-1);

  cout<<"reversed array: ";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}