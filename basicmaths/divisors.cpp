#include<iostream>
using namespace std;

void printDivisors(int num){
  for(int i=1; i<=num; i++){
    if(num%i == 0){
      cout<<i<<" ";
    }
  }
}

int main(){
  int num;
  cout<<"enter the number: ";
  cin>>num;

  cout<<"divisors of "<<num<<": ";
  printDivisors(num);

  return 0;
}