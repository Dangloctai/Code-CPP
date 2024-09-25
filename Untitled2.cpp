#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << binary_search(a, a + n, 2);
	return 0;
}
