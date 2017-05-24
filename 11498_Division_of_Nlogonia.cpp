#include <bits/stdc++.h>
using namespace std;
int main()	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int k;
	int x0,y0;
	int x,y;
	cin >> k;
	while(k !=0)	{
		
		for(int i=0 ; i<k ; i++)	{
			if(i==0)
				cin >> x0 >> y0;
			cin >> x >> y;
			x=x-x0;
			y=y-y0;
			if(x>0 && y>0)
				cout << "NE" << "\n";
			else 
				if(x<0 && y>0)
				cout << "NO" << "\n";
			else
				if(x<0 && y<0)
				cout << "SO" << "\n";
			else
				if(x>0 && y<0)
				cout << "SE" << "\n";
			else
				cout << "divisa" << "\n";


		}
		cin >> k;
	}
}