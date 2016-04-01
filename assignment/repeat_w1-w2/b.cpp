#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <queue>
#include <vector>
#include <utility>
using namespace std;
 
#define REP(a,b) for (int a = 0; a < b; a++)
#define PB(v,a) v.push_back(a)

int main() {
	int a, b, c, d, e;
	vector<int> result;
	while(cin >> a >> b >> c >> d >> e, a != 0 && b != 0 && c != 0 && d != 0 && e != 0) {
		result.push_back(a * b * c * d * d * e * e);
	}

	REP(i, result.size()) {
		cout << result[i] << endl;
	}
	return 0;
}