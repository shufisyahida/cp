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
	int a, b, c, d;
	cin >> a;
	REP(i, a) {
		cin >> b >> c >> d;
		if(b <= 20 && c <= 20 && d <= 20) {
			cout << "Case " << i+1 << ": good" << endl;			
		} else {
			cout << "Case " << i+1 << ": bad" << endl;
		}
	}
	return 0;
}