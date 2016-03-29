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

bool check(vector< pair<string, bool> > v) {
	bool checked = true;
	REP(i, v.size()) {
		checked = checked && v[i].second;
	}
}

int main() {
	int n;
	cin >> n;
	vector<string> s;
	vector< pair<string, bool> > v;
	PB(s, "Happy");
	PB(s, "birthday");
	PB(s, "to");
	PB(s, "you");
	PB(s, "Happy");
	PB(s, "birthday");
	PB(s, "to");
	PB(s, "you");
	PB(s, "Happy");
	PB(s, "birthday");
	PB(s, "to");
	PB(s, "Rujia");
	PB(s, "Happy");
	PB(s, "birthday");
	PB(s, "to");
	PB(s, "you");
	REP(i, n) {
		string fam;
		cin >> fam;
		pair<string, bool> p;
		p.first = fam;
		p.second = false;
		PB(v, p);
	}
	
	bool isDone = false;
	while(!isDone) {

	}
	return 0;
}