#include<bits/stdc++.h>
using namespace std;

int main(){
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);

  cout<<"after pushing: "<<q.front()<<" "<<q.back()<<endl;

  q.pop();
  q.pop();

  cout<<"after popping: "<<q.front()<<" "<<q.back()<<endl;

  return 0;
}