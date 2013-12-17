/*
Teht�v�: Harjoitus 7
Tekij�: Hanna Lukkarinen
Kuvaus:
Tee ohjelma, joka kysyy k�ytt�j�lt� nimen, pituuden senttein� ja painon kiloina.
Ohjelma laskee ja tulostaa k�ytt�j�n ihannepainon (pituus-100). Lis�ksi
ohjelma kertoo k�ytt�j�n nykyisen painon eron kiloina verrattuna ihanne-
painoon. Ohjelman k�ytt�liittym� toimii seuraavasti:

Ihannepaino

Ohjelma laskee ihannepainosi
pituutesi perusteella.

Anna nimesi > Mooses
Anna pituutesi senttein� > 175
Anna osoitteesi > Peikkovuori 5 as 4
Anna painosi kiloina > 89


Arvoisa Mooses
Osoitteesi on Peikkovuori 5 as 4
Nykyinen painosi 89.0 kg
Ihannepainosi 75.0 kg
Erotus 14.0 kg
*/

#include <iostream> 
using namespace std; 
int main() 
{ 
 char nimi[30], osoite[30];
 double paino, pituus, ihannepaino, erotus;

 cout<<"Ihannepaino\nOhjelma laskee ihannepainosi\npituutesi perusteella."<<endl;
 cout<<"Anna nimesi: ";
 cin.get(nimi, 30);
 cin.get();

 cout<<"Anna pituutesi senttein�: ";
 cin>>pituus;
 cin.get();

 cout<<"Anna osoitteesi: ";
 cin.get(osoite, 30);
 cin.get();

 cout<<"Anna painosi kiloina: ";
 cin>>paino;
 cin.get();

 ihannepaino = pituus - 100;
 erotus = paino - ihannepaino;

 cout<<"Arvoisa "<<nimi<<"\nOsoitteesi on "<<osoite<<"\nNykyinen painosi on "<<paino<<" kg\nIhannepainosi on "<<ihannepaino<<" kg"<<"\nErotus on "<<erotus<<" kg"<<endl;

}