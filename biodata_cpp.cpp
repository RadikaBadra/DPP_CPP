/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int
main ()
{
  string nama, prodi, alamat, hobi;
  int tahun;
  cout << "====== Masukan Data-data Anda ======\n";
  cout << "Nama : ";
  getline (cin, nama);
  cout << "Prodi : ";
  getline (cin, prodi);
  cout << "Alamat : ";
  getline (cin, alamat);
  cout << "Hobi: ";
  getline (cin, hobi);
  cout << "Tahun Kelahiran : ";
  cin >> tahun;
  cout << "\n";

  cout << "====== Informasi Data-data Anda ======\n";
  cout << "Nama anda : " << nama << endl;
  cout << "Prodi anda : " << prodi << endl;
  cout << "Alamat anda : " << alamat << endl;
  cout << "Hobi anda : " << hobi << endl;
  cout << "Tahun Kelahiran anda : " << tahun << endl;
  cout << "Umur anda : " << 2021 - tahun << endl;

  return 0;
}
