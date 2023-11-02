#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n, s, r;
	cin >> n;
	while(cin >> n >> s >> r){
		cout << s-r; s -= s-r;
		for(int i = 1; i < n; i++)
			cout << ' ' << (s-i+n-1)/(n-1);
		cout << endl;
	}
}