#include <stdio.h>

int get_fibonacci(int x);

int main()	{
	int n;
	while(scanf("%d",&n))	{
		printf("%d",get_fibonacci(n));
	}
}

int get_fibonacci(int x)	{
	if(x==0)
		return 0;
	else if(x==1)
		    return 1;
		else
			return get_fibonacci(x-1) + get_fibonacci(x-2);
}
