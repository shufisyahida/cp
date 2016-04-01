#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream file;
	file.open("input.txt");
	int n = 1000000;
	int k = 3;
	file << n << " " << k << endl;
	for(int i = 0; i < n-1; i++) {
		file << rand() % 19999999999 + (-9999999999) << " ";
	}
	file << rand() % 19999999999 + (-9999999999) << endl; 
	return 0;
}