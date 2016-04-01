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
	int a, b;
	vector<int> result;
	while(cin >> a >> b, a != -1 && b != -1) {
		if(abs(a-b) <= 50) {
			result.push_back(abs(a-b));
		} else {
			result.push_back(100 - abs(a-b));
		}
	}

	REP(i, result.size()) {
		cout << result[i] << endl;
	}
	return 0;
}