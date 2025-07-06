#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int>& vec){
  int n = vec.size();
  int largest = vec[0];
  int secondLargest = -1;

  for(int i=1; i<n; i++){
    if(vec[i]>largest){
      secondLargest = largest;
      largest = vec[i];
    }
    if(vec[i]>secondLargest && vec[i]!=largest){
      secondLargest = vec[i];
    }
  }

  return secondLargest;
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

  int secondLargest = secondLargestElement(vec);

  cout<<"second largest element: "<<secondLargest<<endl;

  return 0;
}