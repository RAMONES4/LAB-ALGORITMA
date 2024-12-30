// implementation of pointer in string
int main ()
{
	char bandMetal[] = "SEPUL TURA";
	char *bandPunk{} = "RANCID";
	
	cout << "Nama Band Metal : " << bandMetal <<endl;
	cout << "Nama Band Punk : " << bandPunk <<endl;
	bandPunk += 3; // menambah nilai petunjuk / pointer
	cout << "\nNama Band Metal : " << bandMetal <<endl;
	cout << "Nama Band Punk : " << bandPunk;
	getchar();
}
