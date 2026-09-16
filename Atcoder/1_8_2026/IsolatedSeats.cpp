// Problem: B - Isolated Seats
// Contest: AtCoder - AtCoder Beginner Contest 469
// URL: https://atcoder.jp/contests/abc469/tasks/abc469_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	string S;
	cin>>N;
	cin>>S;
	int Cnt=0;
	for(int i=0;i<N;i++) 
	{
        if(S[i]=='x') 
        {
            bool left=(i==0 || S[i-1]=='x');
            bool right = (i==N-1 || S[i+1]=='x');
            if (left && right)
                Cnt++;
        }
    }
    cout<<Cnt<<endl;

    return 0;
}