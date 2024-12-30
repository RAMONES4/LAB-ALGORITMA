//==============================================
//implementation of changing a value by pointer
int main ()
{
	int yofrie = 93;
	int *hardiansyah;
	//clrscr():
	cout << "Nilai awal yofrie = "<<yofrie<<endl;
	hardiansyah = &yofrie;
	cout << "Nilai hardiansyah sekarang = "<< *hardiansyah <<endl;
	*hardisansyah = 50;
	cout <<"Nilai hardiansyah sekarang = "<< *hardiansyah <<endl;
	getchar();
}
