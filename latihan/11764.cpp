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
	int n, high, low, nTow, index;
	high = 0;
	low = 0;
	index = 20;
	cin >> n;
	REP(i, n){
		cin >> nTow;
		REP(j, nTow) {
			int tow;
			cin >> tow;
			if(j!=0) {
				if(index < tow)
					high++;
				if(index > tow)
					low++;
			}
			index = tow;
		}
		cout << "Case " << i+1 << ": " << high << " " << low << endl;
		high = 0;
		low = 0;
	}
	return 0;
}