/*

* Author : Dimas Ramadhan Pradipta Bagaskara

* NPM : 140810180072

* Deskripsi : Program

* Tahun : 2019

*/



#include <iostream>

#include <string.h>

using namespace std;

struct Orang {

int umur;

char nama[40];

char jk[10];

char goldar[10];

};

int main() {

Orang orang;

orang.umur = 19;

strcpy(orang.nama, "Dimas Ramadhan Pradipta Bagaskara");
strcpy(orang.jk, "L");
strcpy(orang.goldar, "AB");

// add your code below

// add your code up there

cout << orang.umur << endl;

cout << orang.nama << endl;

cout << orang.goldar << endl;

cout << orang.jk << endl;

}
