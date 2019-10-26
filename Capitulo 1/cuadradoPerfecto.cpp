#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main(int argc, char const *argv[])
{
	freopen("inputFiles/cuadrado perfecto.txt","r",stdin);
	int i;
	while(scanf("%d",&i)!=EOF)
	{
		if((int)sqrt(i)*(int)sqrt(i)==i)
			cout<<i<<" es cuadrado perfecto de "<<sqrt(i)<<endl;
		else
			cout<<i<<" no es un cuadrado perfecto"<<endl;
	}

	return 0;
}