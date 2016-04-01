#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <map>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
 
#define REP(a,b) for (int a = 0; a < b; a++)

bool check(string c) {
		stack<char> s;
		REP(i, c.length()) {
			char a = c[i];
			if(a == '[' || a == '(') s.push(a);
			else if (a == ']' || a == ')') {
				if (s.empty()) return false;
				
				switch(a) {
					case ']':
						if(s.top() != '[') {
							s.pop();
							return false;
						} else s.pop();
						break;
					case ')':
						if(s.top() != '(') {
							s.pop();
							return false;
						} else s.pop();
						break;
					default:
						break;
				} 
			}
		}
		if(s.empty()) return true;
		else return false;
	}

int main() {
	int n;
	string str;
	cin >> n;
	getline(cin, str);
	REP(i, n) {
		getline(cin, str);
		if(str.empty()) cout << "Yes" << endl;
		else if (check(str)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}