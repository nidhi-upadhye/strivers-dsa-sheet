#include<iostream>
using namespace std;

int reverseNumber(int num){
  int revNo = 0;

  while(num!=0){
    revNo = (revNo*10) + (num%10);
    num /= 10;
  }

  return revNo;
}

int main(){
  int num;
  cout<<"enter the number: ";
  cin>>num;

  int revNo = reverseNumber(num);

  cout<<"reversed number: "<<revNo<<endl;

  return 0;
}