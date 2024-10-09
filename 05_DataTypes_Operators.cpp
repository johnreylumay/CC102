#include <iostream>
using namespace std;

int main()
 {
	int N1 , N2;
	cout << "Enter first number: ";
	cin >> N1;
	cout << " Enter second number: ";
	cin >> N2;
	
	cout << " sum: " << N1 << '+' << N2 << '=' << N1 + N2 << endl;
	cout << " Difference: " << N1 << '-' << '=' << N1 - N2 << endl;
	cout << " Quotient: " << N1 << '*' << '=' << N1 * N2 << endl;
	cout << " product: " << N1 << '/' << '=' << N1 / N2 << endl;
	cout << "Remainder: " << N1 << '%' << '=' << N1 % N2 << endl;
return 0;
}