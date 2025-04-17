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

// Membuat fungsi mergeSort
void mergeSort(int low, int high)
{
    if (low >= high) // step 1
    {
        return; // step 1.a
    }
    int mid = (low + high) / 2; // step 2

    // Langkah 3
    // Fungsi rekursi - memanggil diri sendiri
    mergeSort(low, mid);        // Langkah 3.a
    mergeSort(mid + 1, high);   // Langkah 3.b

    // Langkah 4
    int i = low;        // Langkah 4.a
    int j = mid + 1;    // Langkah 4.b
    int k = low;        // Langkah 4.c

    while (i <= mid && j <= high) // Langkah 4.d
    {
        if (arr[i] <= arr[j]) // Langkah a.d.i
        {
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++; // Langkah 4.d.ii
    }
    while (j <= high) // Langkah 4.e
    {
        B[k] = arr[j];  // Langkah 4.e.i
        j++;            // Langkah 4.e.ii
        k = k + 1;      // Langkah 4.e.iii
    }

    while (i <= mid) // Langkah 4.f
    {
        B[k] = arr[i];  // Langkah 4.f.i
        i++;            // Langkah 4.f.ii
        k++;            // Langkah 4.f.iii
    }

    // Langkah 5
    for (int x = low; x <= high; x++) 
    {
        arr[x] = B[x];
    }
}

// Menampilkan hasil array yang telah di sorting
void output()
{
    cout << "\nData setelah diurutkan (Merge Sort): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Memanggil fungsi yang dibuat
int main()
{
    input();
    mergeSort(0, n - 1);
    output();
}