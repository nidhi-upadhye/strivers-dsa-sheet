#include<iostream>
using namespace std;

int countDigits(int num){
  int count = 0;

  while(num!=0){
    count++;
    num /= 10;
  }

  return count;
}

int main(){
  int num;
  cout<<"enter the number: ";
  cin>>num;

  int digits = countDigits(num);

  cout<<"no. of digits: "<<digits<<endl;

  return 0;
}