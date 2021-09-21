/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  float celcius;

  cout << "====== Aplikasi Pengukur Suhu ======\n";
  cout << "masukkan suhu dalam celcius : ";
  cin >> celcius;
  cout << "\n";

  float farenheit = celcius * 1.8 + 32;
  float reamur = celcius * 0.8;

  cout << "====== HASIL ======\n";
  cout << "suhu dalam farenheit : " << farenheit << endl;
  cout << "suhu dalam reamur : " << reamur << endl;


  return 0;
}
