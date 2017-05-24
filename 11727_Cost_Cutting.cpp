#include <bits/stdc++.h>
using namespace std;
int main()	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	int c=1;
	cin >> t;
	int arr[3];
	while(t>0)	{
		for(int i=0;i<3;i++)	
			cin >> *(arr+i);
		
		for(int i=1;i<3;i++)	{		//Insertion sort.
			int key = arr[i];
			int j=i-1;
			while(j>=0 && arr[j]>key)	{
				arr[j+1]=arr[j];
				arr[j]=key;
				j--;
			}
		}

		cout << "Case " << c << ": " << *(arr+1) << "\n";
		c++;
		t--;
	}
}