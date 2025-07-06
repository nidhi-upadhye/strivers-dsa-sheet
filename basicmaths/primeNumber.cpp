#include<iostream>
using namespace std;

bool primeNumber(int num){
  for(int i=2; i*i<=num; i++){
    if(num%i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  int num;
  cout<<"enter the number: ";
  cin>>num;

  bool isPrimeNo = primeNumber(num);

  cout<<boolalpha;
  cout<<"prime number? "<<isPrimeNo<<endl;

  return 0;
}