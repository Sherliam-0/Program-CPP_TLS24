#include <iostream> //operasi input dan output
#include <cmath> //Library matematika

using namespace std;

int main(){
    //Inisiasi variabel panjang, lebar dan luas
    float panjang, lebar, luas;

    //masukkan input berupa nilai dari panjang
    cout<< "Panjang (cm)=";
    cin>> panjang;

    //masukkan input berupa nilai dari lebar
    cout<< "Lebar (cm)=";
    cin>> lebar;

    //menghitung luas persegi panjang dengan rumus persegi panjang
    luas = fabs(panjang * lebar); //menggunakan fabs untuk memastikan hasil perhitungan adalah positif.
    cout<< "Luas="<<luas<<"cm"<<endl; 
}