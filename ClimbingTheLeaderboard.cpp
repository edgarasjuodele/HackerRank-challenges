#include <iostream>
#include <set>
#include <cstdio>
#include <vector>
using namespace std;

vector<int> convertToSorted(vector<int> v){
	set<int> s;
	set<int>::iterator it;
    vector<int> sorted;
    for(int x : v){
    	s.insert(x);
	}
	for(it = s.begin(); it!=s.end(); it++){
		sorted.push_back(*it);
	}
    return sorted;
}

void solve(vector<int> a, vector<int> s){
	vector<int> ans;
	int curIndex = 0;
	for(int i = 0; i < a.size(); i++){
		for(int j = curIndex; j < s.size(); j++){
			if(a[i] < s[j]){
				ans.push_back(s.size()-j+1);
				curIndex = j;
				break;
			} else if (j == s.size()-1 && a[i] >= s[j]){
				ans.push_back(1);
				curIndex = j;
				break;
			}
		}
	}
	for(int x : ans){
		cout << x << endl;
	}
}

int main() {
    int n, m;
    
    cin >> n;
    vector<int> scores(n);
    for(int i = 0; i < n; i++){
    	cin >> scores[i];
	}
	
	cin >> m;
    vector<int> alice(m);
    for(int i = 0; i < m; i++){
    	cin >> alice[i];
	}
    
    vector<int> scoreset = convertToSorted(scores);
    solve(alice, scoreset);
}
