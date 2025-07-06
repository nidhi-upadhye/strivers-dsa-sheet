#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[10] = {1,4,2,4,2,5,2,1,6,7};
  map<int,int> mp;

  for(int i=0; i<10; i++){
    if(mp.find(arr[i])!=mp.end()){
      mp[arr[i]] += 1;
    }
    else{
      mp[arr[i]] = 1;
    }
  }

  for(auto it: mp){
    cout<<it.first<<" "<<it.second<<endl;
  }


  return 0;
} 