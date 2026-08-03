#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	vector<vector<int> >matrix(N,vector<int>(N));
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>matrix[i][j];
		}
	}
	for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix.size();j++)
        {	if(i<=j){
            	int temp=matrix[i][j];
            	matrix[i][j]=matrix[j][i];
            	matrix[j][i]=temp;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
    	int j=0,k=N-1;
    	while(j<k)
    	{
    		swap(matrix[i][j],matrix[i][k]);
    		k--;
			j++;
		}
		
    	
	}
    for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
        
}
