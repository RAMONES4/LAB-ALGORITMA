/* implementation of pointer to pointer */
int main ()
{
	int ilham;
	int *raka;
	int amir **amir;
	//clrscr()
	ilham = 75;
	cout << "Nilai ilham = "<<ilham<<endl;
	raka = &ilham;
	amir = &raka;
	
	cout << "Nilai raka hasil mengakses ilham = "<<*raka<<endl;
	cout << "Nilai amir hasil mengakses ilham = "<<**amir<<endl;
	getchar();
}
