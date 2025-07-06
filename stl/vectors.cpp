#include<bits/stdc++.h>
using namespace std;

int main(){
  // basic push_back and pop_back operations with size and capacity
  vector<int> v1;
  cout<<v1.size()<<" "<<v1.capacity()<<endl;
  v1.push_back(1);
  cout<<v1.size()<<" "<<v1.capacity()<<endl;
  v1.push_back(2);
  cout<<v1.size()<<" "<<v1.capacity()<<endl;
  v1.emplace_back(3);
  cout<<v1.size()<<" "<<v1.capacity()<<endl;
  v1.push_back(4);
  cout<<v1.size()<<" "<<v1.capacity()<<endl;
  v1.push_back(5);
  cout<<v1.size()<<" "<<v1.capacity()<<endl;

  cout<<"after pushing: ";
  for(auto it: v1){
    cout<<it<<" ";
  }

  v1.pop_back();

  cout<<"\nafter popping: ";
  for(auto it: v1){
    cout<<it<<" ";
  }

  // difference between push_back and emplace_back
  vector<pair<int,int>> v2;
  v2.push_back({1,2});
  v2.emplace_back(3,4);

  for(auto it: v2){
    cout<<it.first<<" "<<it.second<<endl;
  }

  // different methods of defining a vector
  vector<int> v3(5,30);
  vector<int> v4(5);
  vector<int> v5(v3);

  for(auto it: v5){
    cout<<it<<" ";
  }

  // iterators
  vector<int> v6 = {10,20,30,40,50};
  cout<<v6.size()<<" "<<v6.capacity()<<endl;
  vector<int>::iterator it = v6.begin();
  cout<<*it<<endl;
  it += 2;
  cout<<*it<<endl;

  for(vector<int>::iterator it = v6.begin(); it<v6.end(); it++){
    cout<<*it<<" ";
  }

  // erase and insert
  vector<int> v7 = {1,2,3,4,5};

  v7.erase(v7.begin()+3);
  for(auto it: v7){
    cout<<it<<" ";
  }
  cout<<endl;

  v7.erase(v7.begin(),v7.begin()+2);
  for(auto it: v7){
    cout<<it<<" ";
  }
  cout<<endl;

  v7.insert(v7.begin(),7);
  v7.insert(v7.begin(),2,0);
  for(auto it: v7){
    cout<<it<<" ";
  }
  cout<<endl;

  vector<int> extra(3,100);
  v7.insert(v7.end(), extra.begin(), extra.end());
  for(auto it: v7){
    cout<<it<<" ";
  }
  cout<<endl;

  // empty
  vector<int> v8 = {1};
  cout<<v8.empty()<<endl;

  return 0;
}