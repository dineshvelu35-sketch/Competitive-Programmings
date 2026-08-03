#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int A,B;
	cin>>A>>B;
	vector<vector<char> >Knight(N,vector<char>(N));
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>Knight[i][j];
		}
	}
	int K=0;
	for(int i=N-1;i>=0;i--)
	{
		for(int j=N-1;j>=0;j--)
		{
			if(Knight[i][j]=='#')
			{
				continue;
			}
			if(Knight[i][j]=='.')
			{
				if(i==0 && j==0)
				{
					if(Knight[i+A][j+B]!='o' && Knight[i+A][j+B]!='#' &&
					   Knight[i+B][j+A]!='o' && Knight[i+B][j+A]!='#' && 
					   )
					   {
					   	
					   }
				}
				if(i>0 && j==0)
				{
					if(i-A>=0)
					{
						if(Knight[i+B][j+A]!='o' && Knight[i+B][j+A]!='#')
						{
							
						}
					}
					if(i-B>=0)
					{
						if(Knight[i-B][j+A]!='o' && Knight[i-B][j+A]!='#')
						{
							
						}
					}
				}
				if(i==0 && j>0)
				{
					if(j-B>=0)
					{
						if(Knight[i+A][j-B]!='o' && Knight[i+A][j-B]!='#')
						{
							
						}
					}
					if(j-A>=0)
					{
						if(Knight[i+B][j-A]!='o' && Knight[i+B][j-A]!='#')
						{
							
						}
					}
					
				}
				if(i>0 && j>0)
				{
					if(i-A>=0 && j-B>=0)
					{
						if(Knight[i+B][j-A]!='o' && Knight[i+B][j-A]!='#' &&
						   Knight[i-A][j-B]!='o' && Knight[i-A][j-B]!='#' &&
						    Knight[i-B][j-A]!='o' && Knight[i-B][j-A]!='#' &&
							Knight[i+A][j-B]!='o' && Knight[i+A][j-B]!='#' &&
							Knight[i-B][j+A]!='o' && Knight[i-B][j+A]!='#)
							{
								
							}
					}
					if(i-A>=0 && j-B<0)
					{
						if(Knight[i-A][j+B]!='o' && Knight[i-A][j+B]!='#')
						{
							
						}
					}
					if(i-A<0 && j-B>=0)
					{
						if(Knight[i+A][j-B]!='o' && Knight[i+A][j-B]!='#')
	
						{
							
						}
					}
					if(i-B>=0 && j-A>=0)
					{
						if(Knight[i-B][j-A]!='o' && Knight[i-B][j-A]!='#')
						{
							
						}
					}
					if(i-B>=0 && j-A<0)
					{
						if(Knight[i-B][j+A]!='o' && Knight[i-B][j+A]!='#')
						{
							
						}
					}
					if(i-B<0 && j-A>=0)
					{
						if(Knight[i+B][j-A]!='o' && Knight[i+B][j-A]!='#')
						{
							
						}
					}
					if((i-A<0 && j-B<0) || (i-B<0 && j-A<0))
					{
						if(Knight[i+A][j+B]!='o' && Knight[i+A][j+B]!='#' &&
							Knight[i+B][j+A]!='o' && Knight[i+B][j+A]!='#' )
							{
								
							}
					}
				}
				if(i<N-1 && j<N-1 && i>0 && j>0)
				{
					if(i+A<=N-1 && j+B<=N-1)
					{
						if(Knight[i+A][j+B]!='o' && Knight[i+A][j+B]!='#' &&
				Knight[i+B][j+A]!='o' && Knight[i+B][j+A]!='# &&
				)
					}
					if(i+A>=N && j+B<=N-1)
					{
						
					}
					if(i+A<=N-1 && j+B>=N)
					{
						
					}
					if(i+B<=N-1 && j+A<=N-1)
					{
						
					}
					if(i+B>=N && j+A<=N-1)
					{
						
					}
					if(i+B<=N-1 && j+A>=N)
					{
						
					}
					if(i+A>=N && j+B>=N)
					{
						
					}
					if(i+B>=N && j+A>=N)
					{
						
					}
				}
				if(i==N-1 && j<N-1)
				{
					
				}
				if(i<N-1 && j<N-1)
				{
					
				}
				if(i==N-1 && j==N-1)
				{
					
				}
				if(Knight[i+A][j+B]!='o' && Knight[i+A][j+B]!='#' &&
				Knight[i+B][j+A]!='o' && Knight[i+B][j+A]!='#' && 
				Knight[i+B][j-A]!='o' && Knight[i+B][j-A]!='#' &&
				Knight[i-A][j-B]!='o' && Knight[i-A][j-B]!='#' &&
				Knight[i-B][j-A]!='o' && Knight[i-B][j-A]!='#' &&
				Knight[i+A][j-B]!='o' && Knight[i+A][j-B]!='#' &&
				Knight[i-B][j+A]!='o' && Knight[i-B][j+A]!='#' &&
				Knight[i-A][j+B]!='o' && Knight[i-A][j+B]!='#')
				{
					Knight[i][j]='o';
					K++;
				}
			}
		}
	}
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<Knight[i][j]<<" ";
		}
		cout<<endl;
	}
}
