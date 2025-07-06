#include<bits/stdc++.h>
using namespace std;

void displaySubarrays(vector<int>& vec){
  int n = vec.size();

  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      for(int k=i; k<=j; k++){
        cout<<vec[k]<<" ";
      }
      cout<<endl;
    }
    cout<<endl;
  }
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

  cout<<"the subarrays: "<<endl;
  displaySubarrays(vec);

  return 0;
}