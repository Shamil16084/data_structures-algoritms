	#include <iostream>
    #include <cstring>
	#include <cstdlib>
	#include <cstdio>
	#include <map>
    #include <set>
	#include <algorithm> 
	#include <math.h> 
	#include <queue> 
	#include <stack> 
	#include <deque>
	// #define MAX  50000000 
	using namespace std;

int arr[11111];
	int main(void)
	{
	
		int n;
		
		vector<int> v;
		
	
while(cin>>n){
	v.push_back(n);
}

sort(v.begin(),v.end());
int x;
while(!v.empty()){
	x 	= v.front();
	cout<<x<<" ";
	v.erase(v.begin());
}
	
	return 0;
			
	}
		
		
		
		
		
		
		
		
		
		

		
	
		
		
		


	