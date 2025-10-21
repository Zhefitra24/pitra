#include <iostream>

using namespace std;
struct nilai{
    float Mtk;
    float BIn;
    float Big;
    float IPA;
};
struct siswa{
    string nama;
    string NISN;
    string jurusan;
    nilai Nilai; // struct in struct
};
void namaSiswa(){
    cout << "Masukkan nama : ";
};
void nisnSiswa(){
    cout << "Masukkan NISN : ";
};
void jurusanSiswa(){
    cout << "Masukkan jurusan : ";
};
void mtkSiswa(){
    cout << "Masukkan nilai MTK : ";
};
void BInSiswa(){
    cout << "Masukkan nilai B.INDO : ";
};
void BIgSiswa(){
    cout << "Masukkan nilai B.INGGRIS: ";
};
void IPASiswa(){
    cout << "Masukkan nilai IPA : ";
};
void tambahDataSiswa();//menambahkan data pada file siswa.txt
void tampilDataSiswa();//membaca data dari file siswa.txt dan ditampilkan
void cariSiswa();// berdasarkan NISN
float nilaiAkhir();// nilai akhir = 40%matematika+30%IPA+20%B indonesia +20%B Inggris
void ranking(); // menampilkan data siswa berdasarkan peringkatnya

int main()
{
  siswa data;
    namaSiswa();
    cin >> data.nama;
    nisnSiswa();
    cin >> data.NISN;
    jurusanSiswa();
    cin >> data.jurusan;
    mtkSiswa();
    cin >> data.Nilai.Mtk;
    BInSiswa();
    cin >> data.Nilai.BIn;
    BIgSiswa();
    cin >> data.Nilai.Big;
    IPASiswa();
    cin >> data.Nilai.IPA;
    
}
