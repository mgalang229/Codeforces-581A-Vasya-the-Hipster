#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b, cnt = 0, t = 0;
	cin >> a >> b;
	if(a > b){
		t = a-b;
	} else{
		t = b-a;
	}
	while(a != 0 && b != 0){
		a--;
		b--;
		cnt++;
	}
	cout << cnt << " " << t/2 << "\n";
	return 0;
}
