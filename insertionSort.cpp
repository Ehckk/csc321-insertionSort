#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &array) {
	for (unsigned i = 1; i < array.size(); i++) {
		int key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key; 
	}
}

vector<vector<int>> test_cases = {
	{ 50, 20, 40, 60, 10, 30 },
	{ 8, 6, 5, 10, 7, 10, 3, 9 },
	{ 63, 4, 70, 88, 74, 18, 55, 44, 85, 61 },
	{ 27, 28, 35, 58, 6, 97, 23, 34, 26, 14, 99, 61, 33, 41, 49 },
	{ 78, 52, 10, 85, 36, 90, 78, 89, 52, 58, 45, 80, 89, 78, 44, 7, 77, 89, 1, 27, 3, 84, 15, 93, 55, 42, 57, 69, 12, 16, 24, 64, 91, 1, 47 }
};

void print_array(vector<int> &array) {
	for (int num : array) {
		cout << num << " ";
	}
	cout << endl;
}

int main() {
	for (unsigned i = 0; i < test_cases.size(); i++) {
		vector<int> test_case = test_cases[i];
		cout << "Test Case " << i + 1 << endl;
		cout << "Initial:" << endl; 
		print_array(test_case);
		insertion_sort(test_case);
		cout << "Sorted:" << endl; 
	}
}