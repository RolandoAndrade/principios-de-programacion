#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> getSquares(string s)
{
	stringstream ss;
	ss<<s;
	vector<string> v;
	string r;
	while(ss>>r)
	{
		v.push_back(r);
	}
	return v;

}
int rey(string a, string b)
{
	return abs(a[0]-b[0])<=1&&abs(a[1]-b[1])<=1;
}

int torre(string a, string b)
{
	return a[0]==b[0]||a[1]==b[1];
}
int alfil(string a, string b)
{
	return abs(a[0]-b[0])==abs(a[1]-b[1]);
}
int dama(string a, string b)
{
	return alfil(a,b)+torre(a,b);
}
int caballo(string a, string b)
{
	return abs(b[0]-a[0])==1&&abs(b[1]-a[1])==2||abs(b[0]-a[0])==2&&abs(b[1]-a[1])==1;
}

int main(int argc, char const *argv[])
{
	freopen("inputFiles/movimientos ajedrez.txt","r",stdin);
	string s;
	while(getline(cin,s))
	{
		vector<string> a= getSquares(s);
		cout<<"Desde "<<a[0]<<" hasta "<<a[1]<<endl;
		
		if(rey(a[0],a[1]))
			cout<<"El Rey puede ir"<<endl;
		else
			cout<<"El Rey no puede ir"<<endl;
		if(torre(a[0],a[1]))
			cout<<"La torre puede ir"<<endl;
		else
			cout<<"La torre no puede ir"<<endl;
		if(alfil(a[0],a[1]))
			cout<<"El alfil puede ir"<<endl;
		else
			cout<<"El alfil no puede ir"<<endl;
		if(dama(a[0],a[1]))
			cout<<"La dama puede ir"<<endl;
		else
			cout<<"La dama no puede ir"<<endl;
		if(caballo(a[0],a[1]))
			cout<<"El caballo puede ir"<<endl;
		else
			cout<<"El caballo no puede ir"<<endl;
		cout<<endl;
	}

	return 0;
}