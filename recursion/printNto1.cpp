#include<iostream>
using namespace std;

void print1toN(int cnt){
  if(cnt==0){
    return;
  }
  cout<<cnt<<endl;
  print1toN(--cnt);
}

int main(){
  int n;
  cout<<"enter value of n: ";
  cin>>n;

  print1toN(n);

  return 0;
}