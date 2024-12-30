 #include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung pangkat
int hitungPangkat(int x, int y) {
    if (y == 0) {
        return 1; // Basis: x^0 = 1
    } else {
        return x * hitungPangkat(x, y - 1); // Rekursif
    }
}

int main() {
    int x, y;

    cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF" << endl;
    cout << "Masukkan Nilai X = ";
    cin >> x;
    cout << "Masukkan Nilai Y = ";
    cin >> y;

    int hasil = hitungPangkat(x, y);

    cout << x << " Dipangkatkan " << y << " = " << hasil << endl;

    return 0;
}
