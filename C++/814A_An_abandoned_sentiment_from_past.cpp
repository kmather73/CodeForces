#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	

	long long int n, k;
	cin >> n >> k;
	vector<long long int> seq;
	for(long long int i=0; i<n; ++i){
		long long int tmp;
		cin >> tmp;
		seq.push_back(tmp);
	}

	vector<long long int> spell;
	for(long long int i=0; i<k; ++i){
		long long int tmp;
		cin >> tmp;
		spell.push_back(tmp);
	}


	sort(spell.begin(), spell.end());

	long long int sMax = INT_MIN;
	bool canBreak = false;
	int j = 0;
	if(seq[0] == 0) seq[0] = spell[k-1-j++];
	for(long long int i=1; i<n; ++i){
		if(seq[i] == 0) seq[i] = spell[k-1-j++];
		
		if(seq[i-1] > seq[i]) canBreak = true;
	}


	if(canBreak) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}