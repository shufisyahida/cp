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
	int n, budget, nHotels, nWeeks, result;

	while(cin >> n >> budget >> nHotels >> nWeeks) {
		int minCost = 1000000;
		REP(i, nHotels) {
			int price;
			cin >> price;
			bool posWeek = false;
			bool posBudget = false;
			REP(j, nWeeks) {
				int avaBed;
				cin >> avaBed;
				if(n <= avaBed)
					posWeek = posWeek || true;
				else
					posWeek = posWeek || false;
			}
			if(budget >= n*price)
				posBudget = true;
			if(posWeek && posBudget && minCost > n*price)
				minCost = n*price;
		}
		if(minCost == 1000000)
			cout << "stay home" << endl;
		else
			cout << minCost << endl;	
	}

	return 0;
}