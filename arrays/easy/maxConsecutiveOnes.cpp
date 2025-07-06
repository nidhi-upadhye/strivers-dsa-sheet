#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int>& vec){
  int n = vec.size()+1;
  int maxOnes = 0;

  int i = 0;
  int newMax = 0;
  while(i<n){
    if(vec[i]==1){
      newMax++;
    }
    else{
      newMax = 0;
    }
    maxOnes = max(maxOnes,newMax);
    i++;
  }

  return maxOnes;
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

  int maxOnes = maxConsecutiveOnes(vec);

  cout<<"maximum consecutive ones: "<<maxOnes<<endl;

  return 0;
}