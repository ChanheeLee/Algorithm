#include<iostream>
using namespace std;

void hanoi_tower(int n, char from, char tmp, char to) {
	if (n == 1) //������ ������ �� ���� ��� �׳� from���� to�� �ٷ� �ű�� �ȴ�.
		cout << from << " " << to << endl;
	else { //������ ������ 2���̻��� ���
		hanoi_tower(n - 1, from, to, tmp);
		cout << from << " " << to << endl;
		hanoi_tower(n - 1, tmp, from, to);
	}
}
//ù ��° ��뿡�� �� ��° ���� �ű��
int main() {
	int n; //������ ����
	int k = 1; 
	cin >> n;
	
	//n���� ������ �̵��ϴ� Ƚ��: 2^n-1 
	//a1 = 1 ,a2=3, a3=7...
	for (int i = 0; i < n; i++)
		k *= 2; 
	cout << k - 1 << endl; //�ű� Ƚ��
	hanoi_tower(n, '1', '2', '3'); //������ ����, ���1, ���2, ���3

}