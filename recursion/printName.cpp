#include<iostream>
using namespace std;

void printName(string name, int num){
  if(num==0){
    return;
  }
  cout<<name<<endl;
  printName(name,--num);
}

int main(){
  string name;
  int num;

  cout<<"enter your name: ";
  getline(cin,name);
  cout<<"enter the number of times: ";
  cin>>num;

  printName(name, num);

  return 0;
}