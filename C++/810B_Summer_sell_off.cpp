#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	int n, f;
	cin >> n >> f;

	vector<long long int> k, l , p;
	long long int t1, t2;
	for(int i=0; i<n; ++i) {
		cin >> t1 >> t2;
		k.push_back(t1);
		l.push_back(t2);
		p.push_back(i);
	}

	sort(p.begin(), p.end(), [&](long long int a, long long int b){
		bool aa = min(l[a], 2*k[a]) > k[a];
		bool bb = min(l[b], 2*k[b]) > k[b];
		if(aa && bb){
			return min(l[a], 2*k[a]) - k[a] > min(l[b], 2*k[b]) - k[b];
		}
		if(aa) return true;
		return false;
	});

	long long int c = 0;
	for(int i=0; i<f; ++i) c += min(l[p[i]], 2*k[p[i]]);
	for(int i=f; i<n; ++i) c += min(l[p[i]], k[p[i]]);

	cout << c << endl;
	return 0;
}