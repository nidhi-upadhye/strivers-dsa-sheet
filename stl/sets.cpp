#include<bits/stdc++.h>
using namespace std;

int main(){
  set<int> s;
  s.insert(1);
  s.insert(1);
  s.insert(8);
  s.insert(6);
  s.insert(3);

  cout<<"after inserting: ";
  for(auto val: s){
    cout<<val<<" ";
  }
  cout<<endl;

  auto it = s.find(8);
  cout<<*it<<endl;

  s.erase(1);

  cout<<"after erasing: ";
  for(auto val: s){
    cout<<val<<" ";
  }
  cout<<endl;

  cout<<s.count(1)<<endl;

  return 0;
} 