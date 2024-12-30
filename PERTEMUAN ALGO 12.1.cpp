#include <iostream>
using namespace std;

struct dosen {
	string nama;
	string umur;
};

struct matkul {
	string nama matkul;
	double ipk;
	string status;
	
	dosen dosen1, asdos;
};

int main ()

{
	dosen dosen1,asdos;
	matkul matkul1;
	
	dosen1.nama = "jemy"
	dosen1.umur = "36"
	
	asodos.nama = "helena"
	asdos.umur = "19"
	
	matkul1.dosen1 = dosen1;
	matkul1.asdos = asdos;
	
	matkul1.nama_matkul = "Algo dan struktur"
	matkul.ipk = 3.5;
	matkul1.status = "wajib"
	matkul.dosen1 = dosen1;
	
	cout << "nama matkul \t= " << matkul1.nama_matkul << endl;
	cout << "KKM Matkul \t= " << matkul1.ipk << endl;
	cout << "Status Matkul \t= " << matkul1.status << endl;
	cout << "Nama Dosen \t= " << matkul1.dosen1.nama << endl;
	cout << "Umur Dosen\t= " << 
}
