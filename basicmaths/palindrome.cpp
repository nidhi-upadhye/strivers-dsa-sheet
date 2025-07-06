#include<iostream>
using namespace std;

bool palidrome(int num){
  int n = num;
  int revNo = 0;

  while(num!=0){
    revNo = (revNo*10) + (num%10);
    num /= 10;
  }

  if(revNo == n){
    return true;
  }
  return false;
}

int main(){
  int num;
  cout<<"enter the number: ";
  cin>>num;

  bool isPalidrome = palidrome(num);

  cout<<boolalpha;
  cout<<"palidrome number? "<<isPalidrome<<endl;

  return 0;
}