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
		int a;
		bool isMileCheaper = true;
		bool isSame = false;
		int cheaper = 0;
		cin >> a;
		REP(j, a) {
			int b;
			cin >> b;
			int mileTariff = 0;
			int juiceTariff = 0;
			if(b%29 == 0)
				mileTariff = (b/29) * 10;
			else
				mileTariff = ((b/29) * 10) + 10;

			if(b%59 == 0)
				juiceTariff = (b/59) * 15;
			else
				juiceTariff = ((b/59) * 15) + 15;

			if(mileTariff < juiceTariff) {
				isMileCheaper = true;
				cheaper = mileTariff;
			} else if (mileTariff > juiceTariff) {
				isMileCheaper = false;
				cheaper = juiceTariff;
			} else {
				isSame = true;
				cheaper = juiceTariff;
			}
		}
		if(isMileCheaper)
			cout << "Case " << i+1 << ": Mile " << cheaper << endl;
		else if (!isMileCheaper)
			cout << "Case " << i+1 << ": Juice " << cheaper << endl; 
		else if(isSame)
			cout << "Case " << i+1 << ": Mile Juice " << cheaper << endl;
	}
	return 0;
}