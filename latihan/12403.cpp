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
	int a, b, amount;
	string c;
	cin >> a;
	amount = 0;
	REP(i, a) {
		cin >> c;
		if(c == "donate") {
			cin >> b;
			amount += b;
		}
		if(c == "report") {
			cout << amount << endl;
		}
	}
}