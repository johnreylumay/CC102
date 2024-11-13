#include <iostream>

using namespace std;

int main ()
{
	int age;
	cout << "what is youe age";
	cin >> age;
	
	if(age <16){
		cout << "To young to drive" << endl;
	}
	else if(age ==16){
		cout << "Better clear the road" << endl;
	}
	else{
		cout << "You are getting pretty old" << endl;
	}
	
	return 0;

}