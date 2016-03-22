#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <queue>
#include <vector>
using namespace std;
 
#define REP(a,b) for (int a = 0; a < b; a++)

int main() {
	int a;
	string b;

	cin >> a;
	REP(i,a) {
		cin >> b;
		int len = b.length();
		if(b == "1" || b == "4" || b == "78") {
			cout << "+" << endl;
		}
		else if(len >= 2 && b.substr(len-2) == "35") {
			cout << "-" << endl;	
		}
		else if(len >= 2 && b.substr(len-1) == "4" && b.substr(0,1) == "9") {
			cout << "*" << endl;	
		}
		else if(len >= 3 && b.substr(0, 3) == "190") {
			cout << "?" << endl;
		}
	}
	return 0;
}