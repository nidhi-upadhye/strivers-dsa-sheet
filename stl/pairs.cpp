#include<bits/stdc++.h>
using namespace std;

int main(){
  pair<int, int> p1 = {1,2};
  cout<<p1.first<<" "<<p1.second<<endl;

  pair<pair<char,char>, int> p2 = {{'a','b'},3};
  cout<<p2.first.first<<" "<<p2.first.second<<endl;
  cout<<p2.second<<endl;

  pair<char,int> arr[3] = {{'a',1},{'b',2},{'c',3}};
  cout<<arr[1].first<<endl;

  return 0;
}