// Problem: A - When?
// Contest: AtCoder - AtCoder Beginner Contest 258
// URL: https://atcoder.jp/contests/abc258/tasks/abc258_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int K;
  cin>>K;
  int N=K/60;
  K-=(N*60);
  cout<<N+21<<":";
  if(K<10)
  {
  	cout<<"0"<<K;
  }
  else
  {
  	cout<<K;
  }
  return 0; 
}