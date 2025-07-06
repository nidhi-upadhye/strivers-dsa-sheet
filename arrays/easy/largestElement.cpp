#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& vec){
  int n = vec.size();
  int largest = vec[0];

  for(int i=1; i<n; i++){
    largest = max(largest, vec[i]);
  }

  return largest;
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

  int largest = largestElement(vec);

  cout<<"largest element: "<<largest<<endl;

  return 0;
}