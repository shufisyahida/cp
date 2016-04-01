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
	string a;
	int b=1;
	while(cin >> a, a != "*"){
		if(a == "Hajj")
			cout << "Case " << b++ << ": Hajj-e-Akbar" << endl;
		if(a == "Umrah")
			cout << "Case " << b++ << ": Hajj-e-Asghar" << endl;
	}
	return 0;
}