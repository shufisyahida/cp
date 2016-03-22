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
	REP(i, n) {
		int a;
		int max = 0;
		cin >> a;
		REP(j, a) {
			int b;
			cin >> b;
			if(max < b)
				max = b;
		}
		cout << "Case " << i+1 << ": " << max << endl;
	}
}