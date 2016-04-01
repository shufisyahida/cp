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

string count(string a, int len) {
	int result = 0;
	REP(i, len) {
		result = result + stoi(a.substr(i, 1));
	}
	return to_string(result);
}

int main() {
	string a;
	while(cin >> a, a != "0") {
		while(a.length() != 1) {
			a = count(a, a.length());
		}
		cout << a << endl;
	}
	return 0;
}