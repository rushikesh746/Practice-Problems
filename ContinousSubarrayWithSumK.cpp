#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, N, S;
	cin >> T;
	while(T--) {
	    cin >> N >> S;
	    int arr[N];
	    // cout << "hi";

	    for(int k = 0; k < N; k++)
	        cin >> arr[k];
	    // cout << "bye";
	    int i, j;
	    int min = INT_MAX;    
        int current_sum, start, end;
        for(i = 0; i < N; i++) {
        	current_sum = 0;
            for(j = i; (j < N) && current_sum <= S; j++) {
                current_sum += arr[j];
	            if(current_sum == S){
	                if(min > ((j) - i)){
	                    end = j;
	                    start = i;
	                    min = end - start;
	                    break;
	                }
            	}
        	}
	    }
	    cout << start << "\t" << end;
	}
	return 0;
}