#include <iostream>
using namespace std;

// Membuat array utama dan temporary array
int arr[20], B[20];
// n adalah input ukuran array
int n;

// Membuat input panjang array dengan batasan maksimal 20
void input()
{
    while (true)
    {
        cout << "Masukan Panjang elemnt array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimalkan panjang array adalah 20";
        }
    }
    cout << "\n-------------------------" << endl;
    cout << "\nInputkan Isi elemnt array" << endl;
    cout << "\n-------------------------" << endl;   
    
    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}

// Membuat fungsi margeSort
void margeSort(int low, int high)
