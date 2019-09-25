#include <iostream>
#include <string>
using namespace std;

int funcion(string n1){
	int acum = 0;
	for( int n = 0 ; n < n1.length(); n++){
		acum += int(n1[n]);
	}
	cout << acum << endl;
	return acum;
}

int main()
{
	int val = 0;
	cin >> val;
	cout << "Yo lei val: " << val << endl;
	string n1 = "Javier";
	string n2 = "Hans";
	cout << n1 + n2 << endl;

	cout << funcion(n1) + funcion(n2) << endl;
	
	return 0;
}