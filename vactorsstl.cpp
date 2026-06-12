#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int> arr = { 1,2,3,4,5 };
	int element = 3;
	arr.erase(remove(arr.begin(),arr.end(), element),arr.end());
	for (int i : arr) {
		cout << i << " ";
		return 0;

	}
}
   
