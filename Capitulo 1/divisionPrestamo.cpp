#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>


using namespace std;


int main(int argc, char const *argv[])
{
	freopen("inputFiles/division prestamo.txt","r",stdin);
	double a,b;
	while(scanf("%lf %lf",&a,&b)!=EOF)
	{
		cout<<a<<" / "<<b<<" = "<<((int)(a/b)==a/b?round(a/b):(int)(a/b)+1)<<endl;
	}

	return 0;
}