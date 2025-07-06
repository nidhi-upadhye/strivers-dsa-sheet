#include<iostream>
using namespace std;

int factorial(int fact, int cnt){
  if(cnt<0){
    return -1;
  }
  if(cnt==0){
    return fact;
  }
  fact *= cnt;
  factorial(fact, --cnt);
}

int main(){
  int num;
  cout<<"enter a number: ";
  cin>>num;

  int fact = factorial(1, num);
  cout<<"factorial of "<<num<<": "<<fact<<endl;

  return 0;
}