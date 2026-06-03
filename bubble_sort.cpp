#include<iostream>
#include<vector>
using namespace std;
int main() {
	int arr[] = { 1,0,2,1,0,2 };
	int n = 6;
	for (int i = 1;i < n;i++) {
		for (int j = 0;j < n - i;j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j],arr[j + 1]);
			}
		}
	}
	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}
}
//0 0 1 1 2 2
