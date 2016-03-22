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
	int n;
	cin >> n;
	cout << "Lumberjacks:" << endl;
	REP(i, n) {
		
		bool isOrdered = true;
		int x [10];
		REP(j, 10) {
			int a;
			cin >> a;
			x[j] = a;
		}
		if(x[0] < x[9]) {
			int max = 0;
			REP(j, 10) {
				if(max < x[j]) {
					isOrdered = isOrdered && true;
				} else {
					isOrdered = isOrdered && false;
				}
				max = x[j];
			}		
		} else {
			int max = 200;
			REP(j, 10) {
				if(max > x[j]) {
					isOrdered = isOrdered && true;
				} else {
					isOrdered = isOrdered && false;
				}
				max = x[j];
			}
		}
		if(isOrdered) cout << "Ordered" << endl;
		else cout << "Unordered" << endl;
	}
}