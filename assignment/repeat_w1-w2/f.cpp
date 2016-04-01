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

void sliding_window(vector<int> v, int k) {
	deque< pair<int, int> > windowMax, windowMin;
	vector<int> min, max;
	for(int i = 0; i < k; i++) {
		while(!windowMin.empty() && windowMin.back().first >= v[i])
			windowMin.pop_back();

		while(!windowMax.empty() && windowMax.back().first <= v[i])
			windowMax.pop_back();

		windowMin.push_back(make_pair(v[i], i));
		windowMax.push_back(make_pair(v[i], i));
	}

	for(int i = k - 1; i < v.size(); i++) {
		while(!windowMin.empty() && windowMin.back().first >= v[i])
			windowMin.pop_back();

		while(!windowMax.empty() && windowMax.back().first <= v[i])
			windowMax.pop_back();

		windowMin.push_back(make_pair(v[i], i));
		windowMax.push_back(make_pair(v[i], i));

		while(windowMin.front().second <= i - k)
			windowMin.pop_front();

		while(windowMax.front().second <= i - k)
			windowMax.pop_front();

		min.push_back(windowMin.front().first);
		max.push_back(windowMax.front().first);
	}

	REP(i, min.size()-1){
		cout << min[i] << " ";
	}
	cout << min[min.size()-1] << endl;

	REP(i, max.size()-1){
		cout << max[i] << " ";
	}
	cout << max[max.size()-1] << endl;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> data;
	REP(i, n) {
		int a;
		cin >> a;
		data.push_back(a);
	}

	sliding_window(data, k);

	return 0;
}