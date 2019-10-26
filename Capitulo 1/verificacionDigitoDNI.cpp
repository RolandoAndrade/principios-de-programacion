#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
	freopen("inputFiles/verificacion letra dni.txt","r",stdin);
	string dni;
	while(getline(cin, dni))
	{
		if(dni.size()!=10)
		{
			cout<<dni<<" DNI invalido, no tiene los digitos suficientes"<<endl;
		}
		else
		{
			int number = stol(dni.substr(0,8))%23;
			string abc="TRWAGMYFPDXBNJZSQVHLCKE";
			if(abc[number]==dni[9])
				cout<<dni<<" DNI correcto"<<endl;
			else
				cout<<dni<<" DNI incorrecto, caracter equivocado"<<endl;
		}
	}

	return 0;
}