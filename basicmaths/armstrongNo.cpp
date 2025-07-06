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

int power(int base, int exp){
  int result = 1;

  while(exp--){
    result *= base;
  }

  return result;
}

bool armstrongNo(int num){
  int n = num;
  int cnt = countDigits(num);
  int sum = 0;
  int rem;

  while(num!=0){
    rem = num%10;
    sum += power(rem, cnt);
    num /= 10;
  }

  if(sum == n){
    return true;
  }
  return false;
}

int main(){
  int num;
  cout<<"enter the number: ";
  cin>>num;

  bool isArmstrongNo = armstrongNo(num);

  cout<<boolalpha;
  cout<<"armstrong number? "<<isArmstrongNo<<endl;

  return 0;
}