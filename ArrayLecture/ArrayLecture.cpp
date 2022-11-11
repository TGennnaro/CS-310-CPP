#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void printArray(const double array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void initializeArray(double array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter a grade: ";
		cin >> array[i];
	}
}

double average(double array[], int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += array[i];
	}
	return sum / size;
}

double max(double array[], int size) {
	double max = array[0];
	for (int i = 1; i < size; i++) {
		if (array[i] > max)
			max = array[i];
	}
	return max;
}

void reverseArray(const double original[], double reversal[], int size) {
	for (int i = 0, j = size-1; i < size; i++, j--) {
		reversal[i] = original[j];
	}
}

void reverseArray(double array[], int size) {
	for (int i = 0, j = size-1; i < j; i++, j--) {
		swap(array[i], array[j]);
	}
}

void lshift(double array[], int size) {
	for (int i = 0; i < size-1; i++) {
		array[i] = array[i+1];
	}
}

int main() {
	const int SIZE = 4;
	double grades[SIZE] = {0};
	double reversal[SIZE] = {0};
	initializeArray(grades, SIZE);
	cout << "Your inputs: ";
	printArray(grades, SIZE);
	cout << endl;
	// reverseArray(grades, SIZE);
	// cout << "Reversed: ";
	// printArray(grades, SIZE);
	// cout << endl;

	lshift(grades, SIZE);
	cout << "Left shifted: ";
	printArray(grades, SIZE);
	cout << endl;
	cout << "Input the new grade: ";
	cin >> grades[SIZE-1];
	printArray(grades, SIZE);


	return 0;
}

// int main() {
// 	const int SIZE = 5;
// 	char letters[SIZE] = { 'A', 'B' };
// 	double grades[SIZE];
// 	double grades1[SIZE] = { 100 };
// 	// cout << "First element: " << grades[0] << endl;
// 	grades[0] = 90.5;
// 	grades[1] = 80;
// 	// cout << "Now first expected as 90.5, " << grades[0] << endl;
// 	// cout << "Second expected as 80, " << grades[1] << endl;
// 	// cout << "Last element not initialized: " << grades[14] << endl;
// 	// cout << "Outside range unexpected value: " << grades[-1] << endl;
// 	// for (int i = 0; i < SIZE; i++) {
// 	// 	cout << "Enter grade " << i + 1 << ": ";
// 	// 	cin >> grades[i];
// 	// }
// 	for (int i = 0; i < SIZE; i++) {
// 		cout << letters[i] << " ";
// 	}
// 	cout << endl;
// 	initializeArray(grades, SIZE);
// 	cout << sizeof(grades) << " bytes of memory" << endl;
// 	cout << "Each double size: " << sizeof(double) << endl;
// 	cout << "The number of elements in grades: " << sizeof(grades) / sizeof(double) << endl;
// 	cout << "Memory address of grades array: " << grades << endl;
// 	for (int i = 0; i < SIZE; i++) {
// 		grades1[i] = grades[i];
// 	}
// 	printArray(grades1, SIZE);
// 	cout << "Average: " << average(grades, SIZE) << endl;
// 	cout << "Largest grade: " << max(grades, SIZE) << endl;

// 	return 0;
// }