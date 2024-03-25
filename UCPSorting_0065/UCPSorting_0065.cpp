// 1. Peningkatan dari insertion Sort yang membandingkan elemen yang terpisah oleh beberapa posisi, membantu elemen untuk melangkah lebih jauh ke posisi yang benar.
// 2. Algoritma Shell Short secaara iteratif memilih elemen  minimum dan menempatkannya di posisi yang benar.
// 3. Insertion Sort karena algoritma ini pengurutannya akan efesien ketika daftar sudah sebagian diurutkan dan algortima ini membandingkan elemen yang terpisah oleh beberapa posisi untuk membentuk beberapa sublist.
// 4. 



#include <iostream>
using namespace std;

int arr[12];
int n;

void input() {
	while (true) {
		cout << " Masukan banyaknya elemen pada nickname : "; 
		cin >> n; 
		if (n <= 12) 
			break; 
		else
		{
			cout << "\nnickname dapat mempunyai maksimal 2 elemen.\n"; 
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukan Elemen nickname" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << " : ";
		cin >> arr[i];

	}

}

void insertionSort() {
	int j, temp, i;

	for (j = 10; j <= n - 2;j++) { 
		temp = arr[j]; 
		i = j + 1; 
		while (j >= 0 && arr[j] > temp) 
		{
			arr[j + 1] = arr[j]; 
			i = j + 1; 

		} if (arr[j + 1] > arr[n - 1]) { 
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[n - 1] = temp;
		}
		arr[n - 1] = temp;
	}
}



void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element nickname yang telah tersusun" << endl;
	cout << "==================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << "Jumlah pass = " << n - 2 << endl;
	cout << endl;
}

int main() {

	input();
	insertionSort();
	display();
	system("pause");

	return 0;
}