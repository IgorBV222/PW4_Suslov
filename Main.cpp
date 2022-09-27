//������
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
//������ 1.
template <typename T>
void clear_arr(T arr[], const int length, int key) {
	for (int i = 0; i < length; i++)
		if (arr[i] == key) 
			arr[i] = 0;				
}

//������ 2.
template <typename T>
int index_sum(T arr1[], const int length1, T arr2[], const int length2, int index) {
	if (index > length1 || index > length2) {
		cout << "ERROR\n";
		return 0;
	}
	else {
		int sum = 0;
		sum += (arr1[index] + arr2[index]);
		return sum;
	}
}
//������ 3.
template <typename T>
double mean_arr(T arr3[], const int length) {
	int min = arr3[0];
	int max = arr3[0];
	
	for (int i = 0; i < length; i++) {
		min = min < arr3[i] ? min : arr3[i];				
	}
	for (int i = 0; i < length; i++) {
		max = max > arr3[i] ? max : arr3[i];
	}
	
	return (min + max) / 2.0;
}

//������ 4.
int prime_range(int num1, int num2) {
	for (int i = num1; i <= num2; i++) {
		int counter = 1;
		for (int j = 1; j <= i / 2; j++)
			if (i % j == 0)
				counter++;
		if (counter == 2)
			cout << i << " ";
	}
	cout << "\n\n";

	return 0;
}







int main() {
	setlocale(LC_ALL, "Russian");
	//int n, m;
	//������ 1. �������� ��������� ������� clear_arr, ������� ��������� ������, ��� ����� � �������� ��������.������� �������� ��� �������� �������,
	//������� ����� ��������� ��������
	cout << "������ 1. \n";
	const int size = 5;
	int mas[size]{ 1, 2, 3, 4, 5 };
	clear_arr(mas, size, 2);
	cout << "\n\n";

	//������ 2. �������� ������� index_sum, �������	��������� ��� ������� � ����� - ������.������� ������ ���������� ����� ��������� ������� ��� ��������� ��������.
	cout << "������ 2. \n";
	int n;
	const int size1 = 5;
	const int size2 = 4;
	cout << "������� �����-������: \n";
	cin >> n;
	int mas1[size1]{1, 2, 3, 4, 5};
	int mas2[size2]{1, 2, 3, 4};
	
	cout <<"����� ��������� �������� ��� �������� " << n << " : " << index_sum(mas1, size1, mas2, size2, n);
	cout << "\n\n";


	//������ 3. �������� ��������� ������� mean_arr, ������� ������� ����������� � ������������ �������� �������, ����� ���� ���������� �� ������� ��������������.
	cout << "������ 3. \n";
	const int size3 = 5;
	int mas3[size3]{ 1, 2, 3, 4, 5 };
	cout << "������� �������������� ������������ � ������������� ���������: " << mean_arr(mas3, size3) << "\n\n";

	//������ 4. �������� ������� prime_range, ������� ��������� ��� �����, ���������� ������� � ������ ���������.������� ������ ������� ��� ������� �����,
	//������� ������ � ���������� ��������.
	cout << "������ 4. \n";
	int A, B;
	cout << "������� �������� �� � �� �: ";
	cin >> A;
	cin >> B;
	prime_range(A, B);


	return 0;
}