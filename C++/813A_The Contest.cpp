#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	long long int n, time=0;

	cin >> n;
	for(long long int i=0; i<n; ++i){
		long long int tmp;
		cin >> tmp;

		time += tmp;
	}

	cin >> n;

	long long int l, r;
	long long int f = -1LL;

	for(long long int i=0; i<n; ++i){
		cin >> l >> r;

		if( l<= time && time <= r){
			f = time;
			break;
		} else if(l >= time ){
			f = l;
			break;
		}
	}

	cout << f << endl;

	return 0;
}