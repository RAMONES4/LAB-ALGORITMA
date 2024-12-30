//implementation of pointer dereference

#include <iostream>
using namespace std;

int main ()
{
	int ilham, amir, *raka;
	ilham = 75;
	amir = ilham;
	raka = &ilham;
	cout << "Nilai ilham = "<<ilham<<endl;
	cout << "Nilai amir = "<< amir<<endl;
	cout << "Nilai raka = "<<*raka<<endl;
	getchar();
}

