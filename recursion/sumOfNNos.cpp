#include<iostream>
using namespace std;

int sumOfNNos(int sum, int cnt){
  if(cnt==0){
    return sum;
  }
  sum += cnt;
  return sumOfNNos(sum, --cnt);
}

int main(){
  int n;
  cout<<"enter value of n: ";
  cin>>n;

  int sum = sumOfNNos(0, n);
  cout<<"sum of first n numbers: "<<sum<<endl;

  return 0;
}