#include<iostream>
using namespace std;

int findGCD(int num1, int num2){
  for(int i=min(num1,num2); i>1; i--){
    if(num1%i == 0 && num2%i ==0){
      return i;
    }
  }
  return 1;
}

int main(){
  int num1, num2;
  cout<<"enter the numbers: ";
  cin>>num1>>num2;

  int gcd = findGCD(num1, num2);

  cout<<"gcd of "<<num1<<" and "<<num2<<": "<<gcd<<endl;

  return 0;
}