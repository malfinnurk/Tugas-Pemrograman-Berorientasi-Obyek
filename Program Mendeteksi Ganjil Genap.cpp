#include<iostream>
#include<conio.h>

using namespace std;

int main(int){
long bil;
cout << "====================================\n";
cout << "  Program mendeteksi Ganjil Genap\n";
cout << "====================================\n";
cout << "\n\nMasukan Sebuah Bilangan : ";
cin >> bil;

if (bil == 0) {
cout << "Bilangan " << bil << " bilangan Nol";
}
else  if ( bil > 0){
if (bil % 2 == 0) {
cout << "Bilangan " << bil << " bilangan Genap Positif";
}
else{
cout << "Bilangan " << bil << " bilangan Ganjil Positif";
}
}
else{
if (bil % 2 == 0) {
cout << "Bilangan "<< bil << " bilangan Genap Negatif";
}
else{
cout << "Bilangan " << bil << " bilangan Ganjil Negatif" ;
}
}

getch();
}
