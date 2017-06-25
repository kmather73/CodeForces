#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	cin >> n;

	vector<vector<int>> v(n, vector<int>(n));
	unordered_map<int, unordered_set<int>> rows;
	unordered_map<int, unordered_set<int>> cols;

	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			int tmp;
			cin >> tmp;
			v[i][j] = tmp;
			rows[i].insert(tmp);
			cols[j].insert(tmp);
		}
	}

	bool valid = true;
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(v[i][j] == 1) continue;

			bool isValid = false;
			for(const int &x : rows[i]){
				if(cols[j].count(v[i][j] - x) > 0){
					isValid = true;
					int y = *cols[j].find(v[i][j] - x);
				}
				
			}

			valid &= isValid;
			
		}
		
	}

	if(valid) cout << "Yes" << endl;
	else cout << "No" << endl;

}