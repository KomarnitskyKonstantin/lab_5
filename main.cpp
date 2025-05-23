#include <iostream>

int main()
{
	unsigned int n;
	int m;
	int max;
	int min = INT_MAX;
	int s;

	max = 0;
	s = 1;
	std::cin>>m; 
	std::cin>>n;
	for (int i = 0; i <= m; i++)
	{
		int d = i % 10;
		if (d != 2 && d != 4)
		continue;
		s = s*i;
		if(d < min)
		min = d;
	}
	std::cout<<min<<std::endl;
	std::cout<<s<<std::endl;
	while(n>0)
	{int d = n % 10;
   if(d > max)
         max=d;
   n/=10;
	}
std::cout<<max<<std::endl;

	
	return 0;
}