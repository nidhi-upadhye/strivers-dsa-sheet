#include<bits/stdc++.h>
using namespace std;

int main(){
  stack<char> st;
  st.push('a');
  st.push('b');
  st.push('c');
  st.push('d');
  st.push('e');
  st.push('f');

  cout<<"after pushing: "<<st.top()<<endl;

  st.pop();
  st.pop();

  cout<<"after popping: "<<st.top()<<endl;

  cout<<"size: "<<st.size()<<endl;
  cout<<"empty: "<<boolalpha<<st.empty()<<endl;

  return 0;
}