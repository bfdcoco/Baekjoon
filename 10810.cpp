#include<iostream>
#include<list>
using namespace std;

int main() {
	int N, M;

	int Start_Basket, End_Basket, BallNum;

	int Basket_list[100] = { 0, };

	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		cin >> Start_Basket >> End_Basket >> BallNum;
		for (int j = Start_Basket - 1; j < End_Basket; j++) {
			Basket_list[j] = BallNum;
		}
	}

	for (int i = 0; i < N; i++) {
		cout << Basket_list[i] << " ";
	}

	return 0;
}