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

int main() {
	int n;
	cin >> n;
	REP(i, n) {
		vector< pair<string, int> > v;
		int max = 0;
		REP(j, 10){
			pair<string, int> p;
			cin >> p.first >> p.second;
			v.push_back(p);
			if(max < p.second) {
				max = p.second;
			}
		}
		cout << "Case #" << i+1 << ":" << endl;
		REP(j, 10) {
			if(v[j].second == max)
				cout << v[j].first << endl;
		}
	}
	return 0;
}