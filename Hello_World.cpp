#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int min = 2147483647;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] < min && a[j] > 0) {
				min = a[j];
			}
		}
	}
	int min_pos = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] == min) {
			min_pos = i;
			break;
		}
	}
	cout << min_pos;
	delete[]a;
	return 0;
}
