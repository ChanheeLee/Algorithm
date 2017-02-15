#include<iostream>

using namespace std;

int quad[64][64]; //�迭�̸� array�� �ϸ� ������

void divide(int x, int y, int size) {
	char start = quad[x][y];
	bool AllSame = true;

	for (int a = x; a < x + size; a++) {
		for (int b = y; b < y + size; b++) {
			if (quad[a][b] != start) {
				AllSame = false;
				break;
			}
		}
		if (!AllSame)
			break;
	}
	if (AllSame) {
		cout << start;
	}
	else {
		int half = size / 2;
		cout << '(';
		divide(x, y, half);  //������
		divide(x, y + half, half); //��������
		divide(x + half, y, half); //���ʾƷ�
		divide(x + half, y + half, half); //���� �� �Ʒ�
		cout << ')';
	}


}

int main() {
	int N;
	cin >> N; //N�� ������ 64����
	char num;  
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> num; //0,1�Է�
			quad[i][j] = num;
		}
	}

	divide(0, 0, N); //array[0][0]����
}