#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

vector<pair<int,int>> getCoords(string s)
{
	stringstream ss;
	ss<<s;
	vector<pair<int,int>> r;
	int i,j;
	while(ss>>i&&ss>>j)
	{
		r.push_back(make_pair(i,j));
	}
	return r;
}

int isARectangle(vector<pair<int,int>> coords)
{
	return (coords[0].first==coords[1].first&&coords[2].first==coords[3].first&&coords[0].first!=coords[2].first&&
	coords[0].second!=coords[1].second&&coords[2].second!=coords[3].second)||
	(coords[0].first==coords[2].first&&coords[1].first==coords[3].first&&coords[0].first!=coords[1].first&&
	coords[0].second!=coords[2].second&&coords[1].second!=coords[3].second)||
	(coords[0].first==coords[3].first&&coords[2].first==coords[1].first&&coords[0].first!=coords[2].first&&
	coords[0].second!=coords[3].second&&coords[2].second!=coords[1].second);
}

int main(int argc, char const *argv[])
{
	freopen("inputFiles/rectangulos.txt","r",stdin);
	string s;
	while(getline(cin,s))
	{
		if(isARectangle(getCoords(s)))
			cout<<"Es un rectangulo"<<endl;
		else
			cout<<"No es un rectangulo"<<endl;
	}

	return 0;
}