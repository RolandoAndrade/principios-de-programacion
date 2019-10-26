#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main(int argc, char const *argv[])
{
	freopen("inputFiles/numeros triangulares.txt","r",stdin);
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int sum = 0;
		for(int i = 1;sum<n;sum+=i++);
		if(sum==n)
			cout<<n<<" es un numero triangular"<<endl;
		else
			cout<<n<<" no es un numero triangular"<<endl;
	}

	return 0;
}