#include <iostream>
#include <random>
using namespace std;

random_device rd;
mt19937 gen(rd());
int rentangAngka;
int jawaban;
int tebakan = 1;

int main()
{
    // Memasukan batas angka untuk di tebak
    cout << "masukan maksimum rentang angka : ";
    cin >> rentangAngka;

    // Menampilkan rentang angka yang harus ditebak
    cout << "Tebak angka dengan rentang 0 - " << rentangAngka << endl;

    // generate angka random dengan rentang yang sudah ditentukan
    uniform_int_distribution<int> distrib(0, rentangAngka);
    int angkaRandom = distrib(gen);
    // cout << angkaRandom;
    cin >> jawaban;

    // pengecekan jawaban
    while (jawaban != angkaRandom)
    {
        if (jawaban > angkaRandom)
        {
            cout << "Lebih kecil" << endl;
        }
        else if (jawaban < angkaRandom)
        {
            cout << "Lebih besar" << endl;
        }
        tebakan++;
        cin >> jawaban;
    }

    // Hasil jika jawaban benar 
    if (jawaban == angkaRandom)
    {
        cout << "Jawaban benar dalam " << tebakan << " tebakan";
    }

    return 0;
}