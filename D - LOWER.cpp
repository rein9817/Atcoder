#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
typedef pair<int, int> PII;
int n, m;
 
#define fi first
#define se second
char s[N];
struct oper{
	int k;
	int sit;
	char c;
};
vector<oper> v;
int main()
{
	cin >> n;
	scanf("%s", (s + 1));
	cin >> m;
	int up = 0, low = 0, last = -1;
	for(int i = 1; i <= m; i ++ )
	{
		int op, sit;
		char c;
		cin >> op >> sit >> c;
		if(op == 1) v.push_back({i, sit, c});
		else if(op == 2) low ++, last = 2, low = i;
		else if(op == 3) up ++, last = 3, up = i;
	}
	if(last == 2)
	{
		for(int i = 1; i <= n; i ++ )
		{
			if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
		}
	}
	else if(last == 3) 
	{
		for(int i = 1; i <= n; i ++ )
			if(s[i] >= 'a' && s[i] <= 'z' ) s[i] = s[i] - 'a' + 'A';
	}
	
	for(auto[a, b, c] : v)
	{
		s[b] = c;
		if(last == 2 && a < low && c >= 'A' && c <= 'Z') s[b] = s[b] - 'A' + 'a';
		else if(last == 3 && a < up && c >= 'a' && c <= 'z')  s[b] = s[b] - 'a' + 'A';
	}
	for(int i = 1; i <= n; i ++ ) cout << s[i] ;
	cout << endl;
}