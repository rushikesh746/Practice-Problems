#include <bits/stdc++.h>
using namespace std;

struct activity {
	int start, finish, index;
};

bool activityCompare(activity a1, activity a2) {
	return a1.finish < a2.finish;
}

int main(int argc, char const *argv[]) {
	
	int t, n;
	cin >> t;
	cin.ignore();
	while(t--) {
		cin >> n;
		int i;
		activity arr[n];
		for(i = 0; i < n; i++) {
			cin >> arr[i].start;
			arr[i].index = i;
		}

		for(i = 0; i < n; i++) 
			cin >> arr[i].finish;

		sort(arr, arr+n, activityCompare);

		i = 0;
		cout << arr[i].index+1 << " ";

		for(int j = 1; j < n; j++) {
			if(arr[j].start >= arr[i].finish) {
				cout << arr[j].index+1 << " ";
				i = j;
			}
		}
		cout << "\n";
	}

	return 0;
}