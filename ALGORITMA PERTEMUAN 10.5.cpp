#include<iostream>  // Modern C++ input/output header
using namespace std;

void tambah(int *c, int *d);  // Function declaration with proper return type

int main() 
{ 
    int a = 4, b = 6;  // Initialize a and b
    
    // Display initial values
    cout << "Nilai Sebelum Pemanggilan Fungsi" << endl;
    cout << "a = " << a << " b = " << b << endl;
    
    tambah(&a, &b);  // Pass the addresses of a and b to the function
    
    // Display values after function call
    cout << "\nNilai Setelah Pemanggilan Fungsi" << endl;
    cout << "a = " << a << " b = " << b << endl;

    return 0;  // Exit the program
}

// Function definition to modify values using pointers
void tambah(int *c, int *d) 
{ 
    *c += 7;  // Add 7 to the value pointed to by c
    *d += 5;  // Add 5 to the value pointed to by d
    
    // Output the modified values
    cout << "\nNilai di Akhir Fungsi Tambah()" << endl;
    cout << "c = " << *c << " d = " << *d << endl;  // Dereference pointers to get values
}


