#include<bits/stdc++.h>
using namespace std;

vector<int> unionOfSortedArrays(vector<int>& vec1, vector<int>& vec2){
  int n = vec1.size();
  int m = vec2.size();

  vector<int> unionArr;
  int i = 0, j = 0;
  while(i<n && j<m){
    if(vec1[i]<vec2[j]){
      if(unionArr.size() == 0 || unionArr.back()!=vec1[i]){
        unionArr.push_back(vec1[i]);
      }
      i++;
    }
    else if(vec1[i]>vec2[j]){
      if(unionArr.size() == 0 || unionArr.back()!=vec2[j]){
        unionArr.push_back(vec2[j]);
      }
      j++;
    }
    else{
      if(unionArr.size() == 0 || unionArr.back()!=vec1[i]){
        unionArr.push_back(vec1[i]);
      }
      unionArr.push_back(vec1[i]);
      i++; j++;
    }
  }

  while(i<n){
     if(unionArr.size() == 0 || unionArr.back()!=vec1[i]){
      unionArr.push_back(vec1[i]);
      i++;
    }
  }

  while(j<m){
    if(unionArr.size() == 0 || unionArr.back()!=vec2[j]){
      unionArr.push_back(vec2[j]);
      j++;
    }
  }

  return unionArr;
}

int main(){
  int n, m;
  cout<<"enter the value of n and m: ";
  cin>>n>>m;

  vector<int> vec1(n);
  cout<<"enter the first array elements: ";
  for(int i=0; i<n; i++){
    cin>>vec1[i];
  }

  vector<int> vec2(m);
  cout<<"enter the second array elements: ";
  for(int i=0; i<m; i++){
    cin>>vec2[i];
  }

  vector<int> unionArr = unionOfSortedArrays(vec1,vec2);

  for(auto val: unionArr){
    cout<<val<<" ";
  }
  return 0;
}