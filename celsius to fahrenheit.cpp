#include <iostream>
#include <string>
using namespace std;
int main ()
{
	float c, f;
	cout << "Enter Celsius temperature :";
	cin >> c;
	f = ((c*9)/5.0)+32;
	cout << "Fahrenheit = " << f << endl;
	string message = (f >= 70)? "Now weather in Thailand is Hot " :"Now weather in Thailand is Cool ";
	cout << message << endl;

	return (0);
}