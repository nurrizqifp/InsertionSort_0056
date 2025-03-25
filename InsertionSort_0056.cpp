#include <iostream>
using namespace std;

int arr[20]; //Membuat array dengan panjang data 20
int n; //Membuat variable inputan n

void input()
{
while (true)
    {
        cout <<"Masukkan Jumlah Data Pada Array : "; // Membuat Inputan jumlah elemen array
        cin >> n; // memanggil variable inputan n

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl; // Membuat jarak perbaris program
    cout << "====================="; // Membuat tampilan susunan data elemen array
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================";
}

void insertionSort()
{ // Procedure Insertionsort

}

int temp; // Membuat variable data temporary atau penyimpanan sementara
int j, i; // Membuat variable j sebagai penanda

void display()
{

}

int main()
{

}