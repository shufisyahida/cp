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
	
	while(!cin.eof()) {
		vector< pair<string, int> > v;
		int n;
		cin >> n;
		REP(i, n) {
			string name;
			cin >> name;
			pair<string, int> p = make_pair(name, 0);
			PB(v, p);
		}
		REP(i, n) {
			int amount, sum, give;
			string name;
			cin >> name >> amount >> sum;
			give = amount/sum;
			
		}
	}
	return 0;
}