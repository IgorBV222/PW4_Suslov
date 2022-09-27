//Шаблон
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
//Задача 1.
template <typename T>
void clear_arr(T arr[], const int length, int key) {
	for (int i = 0; i < length; i++)
		if (arr[i] == key) 
			arr[i] = 0;				
}

//Задача 2.
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
//Задача 3.
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

//Задача 4.
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
	//Задача 1. Создайте шаблонную функцию clear_arr, которая принимает массив, его длину и ключевое значение.Функция обнуляет все элементы массива,
	//которые равны ключевому значению
	cout << "Задача 1. \n";
	const int size = 5;
	int mas[size]{ 1, 2, 3, 4, 5 };
	clear_arr(mas, size, 2);
	cout << "\n\n";

	//Задача 2. Создайте функцию index_sum, которая	принимает два массива и число - индекс.Функция должна возвращать сумму элементов массива под указанным индексом.
	cout << "Задача 2. \n";
	int n;
	const int size1 = 5;
	const int size2 = 4;
	cout << "Введите число-индекс: \n";
	cin >> n;
	int mas1[size1]{1, 2, 3, 4, 5};
	int mas2[size2]{1, 2, 3, 4};
	
	cout <<"Сумма элементов массивов под индексом " << n << " : " << index_sum(mas1, size1, mas2, size2, n);
	cout << "\n\n";


	//Задача 3. Создайте шаблонную функцию mean_arr, которая находит минимальный и максимальный элементы массива, после чего возвращает их среднее арифметическое.
	cout << "Задача 3. \n";
	const int size3 = 5;
	int mas3[size3]{ 1, 2, 3, 4, 5 };
	cout << "Среднее арифметическое минимального и максимального элементов: " << mean_arr(mas3, size3) << "\n\n";

	//Задача 4. Создайте функцию prime_range, которая принимает два числа, являющиеся началом и концом диапазона.Функция должна вывести все простые числа,
	//которые входят в переданный диапазон.
	cout << "Задача 4. \n";
	int A, B;
	cout << "Введите диапазон от А до В: ";
	cin >> A;
	cin >> B;
	prime_range(A, B);


	return 0;
}