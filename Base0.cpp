#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

#define fast() std::ios::sync_with_stdio(false)
#define ifor(i, a, b) for(int i = a; i <= b; i++)
#define dfor(i, a, b) for(int i = a; i >= b; i--)
#define INF 1e9 + 2804
#define all(a) a.begin(), a.end()
#define sz(a) int((a).size())
#define fi first
#define se second
#define mp make_pair
#define pb push_back


typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pi;
typedef vector<int> vi;

void Lon_Nhat(const vector<int> a){
	int min = INT_MIN;
	int dem;
	for(int i = 0; i < a.size(); i++){
		if(a[i] >= min){
			min = a[i];
			dem = i;
		}
	}
	cout << min << ' ' << dem << endl;
}

void Nho_Nhat(const vector<int> a){
	int max = INT_MAX;
	int dem;
	for(int i = 0; i < a.size(); i++){
		if(a[i] <= max){
			max = a[i];
			dem = i;
		}
	}
	cout << max << ' ' << dem << endl;
}

int ngto(int a){
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0){
			return 0;
		}
	}
	return a > 1;
}

void SoLuong_Ngto(const vector<int> a){
	int dem = 0;
	for(int i = 0; i < a.size(); i++){
		if(ngto(a[i])){
			dem += 1;
		}
	}
	cout << dem << endl;
}



long long Tich_Am(const vector<int> a){
	int max = INT_MAX;
	int dem = 0;
	for(int i = 0; i < a.size(); i++){
		if(a[i] <= max){
			max = a[i];
		}
	}
	for(int i = 0; i < a.size(); i++){
		if(a[i] == max){
			dem += 1;
		}
	}
	if(dem >= 2 && dem % 2 == 0 && max < 0){
		return pow(1ll * max, dem);
	}
	return 0;
}

void Tich_Duong(const vector<int> a){
	int min = INT_MIN;
	int dem = 0;
	int n = 0;
	for(int i = 0; i < a.size(); i++){
		if(a[i] >= min){
			min = a[i];
		}
	}
	for(int i = 0; i < a.size(); i++){
		if(a[i] == min){
			dem += 1;
		}
	}
	int Lon_Thu2 = INT_MIN;
	for(int i = 0; i < a.size(); i++){
		if(a[i] >= Lon_Thu2 && a[i] != min){
			Lon_Thu2 = a[i];
		}
	}
	if(dem == 1){
		cout << 1ll * min * Lon_Thu2 << endl;
	}
	else{
		cout << pow(1ll * min, dem) << endl;
	}
}

int Doi_Xung(const vector<int> a){
	int left = 0, right = a.size() - 1;
	while(left <= right){
		if(a[left] != a[right]){
			return 0;
		}
		left++;
		right--;
	}
	return 1;
}

void Super_Tich(const vector<int> a){
	long long tich = 1;
	for(int i = 0; i < a.size(); i++){
		tich *= a[i];
		tich %= 1000000007;
	}
	cout << tich << endl;
}

int main(){
	fast();
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	Lon_Nhat(a);
	Nho_Nhat(a);
	SoLuong_Ngto(a);
	if(Tich_Am(a) == 0){
		Tich_Duong(a);
	}
	else{
		cout << Tich_Am(a) << endl;
	}
	if(Doi_Xung(a)){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	Super_Tich(a);
	return 0;
}
