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

    for (int i = 0; i < n; i++) // Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i + 1) << ": "; // Memasukkan atau menginputkan nilai data n
        cin >> arr[i]; // Menyimpan nilai data n kedalam array arr
    }
}

void insertionSort()
{ // Procedure Insertionsort
    
    int temp; // Membuat variable data temporary atau penyimpanan sementara
    int j, i; // Membuat variable j sebagai penanda

    for (i = 1; i <= n; i++)
    { // Step 1
        temp = arr[i]; // Step 2

        j = i - 1; // Step 3

        while (j >= 0 && arr[j] > temp) // Step 4
        {
            arr[j + 1] = arr[j]; // Step 4a
            j--; //Step 4b
        }

        arr[j + 1] = temp; // Step 5
    }
}


void display()
{
    cout << endl;
    cout << "=================================" << endl;
    cout << "Total Passs = " << n - 1 << endl; // count element movement
    cout << "=================================" << endl; // Output ke layar
    cout << "Element Array yang telah tersusun " << endl; // Output ke layar
    cout << "=================================" << endl; // Output ke layar

    for (int j = 0; j < n; j++)
    { // Looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl; // Output ke layar
    }
    cout << endl;
}

int main()
{
    input ();
    insertionSort();
    display();
    system("Pause");
    return 0;
}