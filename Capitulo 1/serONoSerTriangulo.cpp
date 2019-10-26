#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	freopen("inputFiles/ser o no ser triangulo.txt","r",stdin);
	int a,b,c;
	while(scanf("%d %d %d", &a,&b,&c)!=EOF)
	{
		cout<<a<<" "<<b<<" "<<c<<": ";
		if(a+b>c&&a+c>b&&b+c>a)
		{
			if(a==b&&a==c)
			{
				cout<<"es un triangulo equilatero"<<endl;
			}
			else if(a==b||a==c||b==c)
			{
				cout<<"es un triangulo isosceles"<<endl;
			}
			else
			{
				cout<<"es un triangulo escaleno"<<endl;
			}
		}
		else
		{
			cout<<"no es un triangulo"<<endl;
		}
	}

	return 0;
}