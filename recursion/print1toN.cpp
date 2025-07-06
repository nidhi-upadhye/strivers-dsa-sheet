#include<iostream>
using namespace std;

void print1toN(int cnt, int num){
  if(cnt>num){
    return;
  }
  cout<<cnt<<endl;
  print1toN(++cnt, num);
}

int main(){
  int n;
  cout<<"enter value of n: ";
  cin>>n;

  print1toN(1, n);

  return 0;
}