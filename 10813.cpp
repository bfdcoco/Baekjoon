#include<iostream>

using namespace std;

int main() {
	
	int N, M;

	int Selected_Basket, Changed_Basket, Tmp;
	
	int Basket_list[100] = {0,};

	cin >> N >> M;

	// �ٱ��� ����� �� �ֱ�
	for (int i = 0; i < N; i++) {
		Basket_list[i] = i+1;
	}

	for (int i = 0; i < M; i++) {
		cin >> Selected_Basket >> Changed_Basket; 
		Tmp = Basket_list[Selected_Basket-1];
		Basket_list[Selected_Basket-1] = Basket_list[Changed_Basket-1];
		Basket_list[Changed_Basket-1] = Tmp;
	}

	for (int i = 0; i < N; i++) {
		cout << Basket_list[i] << " ";
	}

	return 0;
}