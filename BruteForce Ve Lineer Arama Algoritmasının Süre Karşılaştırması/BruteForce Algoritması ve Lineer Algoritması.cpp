#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int n = 10000;
    int arr[10000];
    srand(time(0));
    for(int i=0; i<n; i++) {
        arr[i] = rand() % 1000;
    }

    int largest = arr[0];
    clock_t start_time = clock();
    for(int i=1; i<n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    clock_t end_time = clock();
    cout << "En buyuk sayi: " << largest << endl;
    cout << "Tekrarlayan Arama Algoritmasi Calisma Suresi: " << end_time - start_time << " ticks" << endl;

    largest = arr[0];
    start_time = clock();
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[j] > largest) {
                largest = arr[j];
            }
        }
    }
    end_time = clock();
    cout << "En buyuk sayi: " << largest << endl;
    cout << "BruteForce Algoritmasi Calisma Suresi: " << end_time - start_time << " ticks" << endl;

    return 0;
}
