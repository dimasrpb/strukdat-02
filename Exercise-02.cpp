/*

* Author : Dimas Ramadhan Pradipta Bagaskara

* NPM : 140810180072

* Deskripsi : Program

* Tahun : 2019

*/



#include <iostream>

#include <string.h>

using namespace std;

struct theatre {

int room;

char seat[3];

char movieTitle[30];

};

int main() {

theatre XXI;

XXI.room = 10;

strcpy(XXI.seat, "A5");
strcpy(XXI.movieTitle, "Avengers");


cout << XXI.room << endl;

cout << XXI.seat << endl;

cout << XXI.movieTitle << endl;


}
