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
		pi[p].push_back(i);   //���������������Ӧ�ĸ�������pi[a][b],a��ʾ��������b+1��ʾ�ø������¶�������
	}

	cout << pi[3][0];

	return 0;
}
