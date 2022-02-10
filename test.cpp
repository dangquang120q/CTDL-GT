#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin >> t;
	while(t--){
		long long N;
		cin>>N;
		long long arr[N];
		for(long long i=0;i<N;i++)
		{
			cin>>arr[i];
		}
		long long a,b,c;
		sort(arr,arr+N);
		for(long long i=0; i < N; i++)
		arr[i] = (arr[i] * arr[i]);
		long long x = 0;
		for(long long i=0; i<N; i++)
		{
			long long left = N-2 , right = N-1;
			a = arr[i];
			while(left > i) 
			{
				b = arr[left];
				c = arr[right];
				long long calculated_side = c - b;
				if(calculated_side == a)
				{
					x = 1;
					cout << "YES" << endl;
					break; 
				}
				else if (calculated_side > a)
					right--;
				else
					left--;
			}
		}
		if(x == 0) cout << "NO" << endl;
	}
	return 0;
}