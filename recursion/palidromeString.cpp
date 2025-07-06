#include<iostream>
using namespace std;

bool palidromeString(string str, int low, int high){
  if(low>high){
    return true;
  }
  if(str[low]==str[high]){
    return palidromeString(str,++low,--high);
  }
  return false;
}

int main(){
  string str;
  cout<<"enter a string: ";
  getline(cin,str);

  bool isPalidrome = palidromeString(str, 0, str.size()-1);
  
  cout<<boolalpha;
  cout<<"string palindrome? "<<isPalidrome<<endl;

  return 0;
}