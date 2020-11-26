#include <iostream>
#include <string>
#include <fstream>
#include "Header.h"
using namespace std;
int main() {
	setlocale(0, "Rus");
	const int size = 10;
	int arr[size];
	int min, pos;
	/*ofstream outFile;
	outFile.open("my_arr.txt");
	string str;
	for (int i = 0; i < size; i++) {
		outFile << rand() % 11 << endl;
	}
	outFile.close();*/

	 

	ifstream inFile;
	inFile.open("my_arr.txt");
	string str1;
	int i = 0;
	while (getline(inFile, str1)) {
		arr[i] = stoi(str1);
		i++;
	}
	inFile.close();
	minArr(arr, size, min, pos);
	cout << endl;
	cout << " Минимум = " << min << " позиция " << pos << endl;
	return 0;
}
