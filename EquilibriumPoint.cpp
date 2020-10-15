#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    vector<int> arr;
	    cin >> n;
	    int arr_input;
	    
	    for(int i = 0; i < n; i++) {
	        cin >> arr_input;
	        arr.push_back(arr_input);
	    }
	    
	    if(n == 1){
	        cout << "1" << endl;
	        continue;    
	    }
	    
		    int sum_left = arr[0], sum_right = arr[n-1];
		    int i = 1, j = n-2;
		    while(i <= j) {
		    	if(sum_left < sum_right) {
		    		sum_left += arr[i];
		    		i++;
		    		continue;
		    	}
		    	if(sum_left > sum_right) {
		    		sum_right += arr[j];
		    		j--;
		    		continue;
		    	}
		   		if(sum_right == sum_left) 
					if(i == j){
						cout << i << endl;
						break;
		    		}else {
		    			sum_left += arr[i];
		    			sum_right += arr[j];
		    			i++; j--;
		    		}
			}
		cout << "-1" << endl;
			
	}
	return 0;
}