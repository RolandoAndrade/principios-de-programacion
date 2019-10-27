#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>


using namespace std;


int main(int argc, char const *argv[])
{
	freopen("inputFiles/division entera.txt","r",stdin);
	double a,b;
	while(scanf("%lf %lf",&a,&b)!=EOF)
	{
		cout<<a<<" / "<<b<<" = "<<round(a/b)<<endl;
	}

	return 0;
}