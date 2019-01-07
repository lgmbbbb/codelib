#include<iostream>
#include<vector>
using namespace std;
vector<int> pi[300001];

int main()
{
	int n;
	int p;
	int q;

	cin >> n;

	for (int i = 2; i <= n; i++) {
		cin >> p;
		pi[p].push_back(i);   //保存各顶点编号所对应的父项数；pi[a][b],a表示父项数，b+1表示该父项数下顶点数；
	}

	cout << pi[3][0];

	return 0;
}
