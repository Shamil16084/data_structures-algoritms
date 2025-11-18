		#include <iostream>
	    #include <cstring>
		#include <cstdlib>
		#include <cstdio>
		#include <map>
	    #include <set>
		#include <algorithm> 
		#include <cstdlib> // for std::atoi
		#include <math.h> 
		#include <queue> 
		#include <stack> 
		#include <deque>
		// #define MAX  500000 
		using namespace std;
	
		int arr[111][111],i,j,val,a,b,cnt=0;
		int v[111];
//		vector<vector<int> > v;
	
		int main(void)
		{
			
		int n,m;
		
		memset(arr,sizeof(arr),0);
		
		
		cin>>n>>m;
		
	for(i=1;i<=m;i++){
		
		cin>>a>>b;
		arr[a][b]++;
		arr[b][a]++;
	}
		
		for( i=1;i<=n;i++){
			
			for(j=1;j<=n;j++){
				v[i]+=arr[i][j];
			}
			
		}		
		
		for(int i=1;i<=n;i++){
			cout<<v[i]<<" ";
		}
		

		
		return 0;
				
		}
			
			
			
	
	
	
		