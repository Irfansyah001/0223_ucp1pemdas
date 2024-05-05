// 1. Contoh deklarasi variable. Berikan min 3 var dengan tipe data yang berbeda,
// 
// #include <iostream>
// using namespace std;
//int NIM;         
//int UMUR;            
//string NAMA;     
// float IPK;
// char Nilai IPK; //Nilai IPK berdasarkan huruf seperti A,B,C,D,E,F
// 
// 2. contoh implementasi dari prosedur dan fungsi,
// a. fungsi opsional menggunakan parameter bisa menggunakan parameter ataupun tidak menggunakan parameter
// 
// 3. contoh implementasi dari looping,
// 
// for(int i=0; i<10; i++) {
// std :: cout << i <<" ";
// }
// Output 0 1 2 3 4 5  6 7 8 9
// 
// 4. contoh min 1 implementasi dari conditional statement,
// 
// int Angka = 10;
// if (Angka > 5) {
// std :: cout << "Angka lebih besar dari 5";
// }
// Output Angka lebih besar dari 5
// 
// 5. contoh implementasi dari struct,
// 
// #include <iostream>
// #include <string>
// //Mendeklarasikan struck pada Mahasiswa
// struct Mahasiswa{
//int NIM;         
//int UMUR;            
//string NAMA;     
// float IPK;
// char Nilai IPK; //Nilai IPK berdasarkan huruf seperti A,B,C,D,E,F
//};
//
//6. 
#include <iostream>
using namespace std;

struct KualitasUdara {
    float Sensor1;
    float Sensor2;
    float Sensor3;
    float Rerata;
    string NamaKota;
    string Status;
};

void inputDanEvaluasi(KualitasUdara Pol) {

    cout << "Masukkan Nama Kota: ";
    cin >> Pol.NamaKota;
    cout << "Masukkan Nilai Sensor1:  ";
    cin >> Pol.Sensor1;
    cout << "Masukkan Nilai Sensor2: ";
    cin >> Pol.Sensor2;
    cout << "Masukkan Nilai Sensor3: ";
    cin >> Pol.Sensor3;

    //Menghitung rerata
    Pol.Rerata = (Pol.Sensor1 + Pol.Sensor2 + Pol.Sensor3) / 3;

    //menentukan status sehat dan tidak sehat
    if (Pol.Rerata > 75 || Pol.Sensor1 >= 45 || Pol.Sensor2 >= 45 || Pol.Sensor3 >= 45) {
        Pol.Status = "TIDAK SEHAT";
    }
    else {
        Pol.Status = "SEHAT";
    }

    cout << "Rerata:" << Pol.Rerata << endl;
    cout << "Status:" << Pol.Status << endl;
    cout << endl;
}

    int main() {
        char Mengulang;

        do {
            int ngulang;
            cout << "Memasukkan data per kota sebanyak berapa kali? " << endl;
            cin >> ngulang;

            for (int i = 0; i < ngulang; i++) {
                KualitasUdara Pol;
                inputDanEvaluasi(Pol);
            }

            cout << "Apakah Anda ingin mengulang memasukkan data Kota baru? (Y/N): ";
            cin >> Mengulang;
        } while (Mengulang == 'Y' || Mengulang == 'y');  // Loop terus menerus sampai pengguna memasukkan selain 'Y' atau 'y'

        return 0;
    }