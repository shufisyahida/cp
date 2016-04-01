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

int count(int p, int index, vector< pair<string, int> > v) {
	if(v[index-1].first == "RIGHT")
		p++;
	else if(v[index-1].first == "LEFT")
		p--;
	else
		p = count(p, v[index-1].second, v);

	return p;
}

int main() {
	
	int n;
	cin >> n;
	REP(i, n){
		int a,p;
		p = 0;
		vector< pair<string, int> > v;
		pair<string, int> pa;
		cin >> a;
		REP(j, a){
			string b;
			cin >> b;
			if(b == "LEFT"){
				p--;
				pa.first = "LEFT";
				pa.second = -1;
				v.push_back(pa);
			}
			else if(b == "RIGHT") {
				p++;
				pa.first = "RIGHT";
				pa.second = -1;
				v.push_back(pa);
			} else {
				string temp;
				cin >> temp;
				int index;
				cin >> index;
				pa.first = "SAME AS";
				pa.second = index;
				v.push_back(pa);
				p = count(p, index, v);
				
			}
		}
		cout << p << endl;
	}
	return 0;
}