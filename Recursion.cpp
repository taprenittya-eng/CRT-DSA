//print numbers to N
#include<iostream>
using namespace std;
void printnumber(int n) {
	if (n == 0) {
		return;
	}
	printnumber(n - 1);
	cout << n << " ";
}
int main() {
	int n = 5;
	printnumber(n);
	return 0;
}

//facorial
#include<iostream>
using namespace std;
int factorial(int n) {
	if (n == 0||n==1) {
		return 1;
	}
	return n * factorial(n - 1);
}
int main() {
	cout << factorial(5);
	return 0;
}

//exponential
#include<iostream>
using namespace std;
int power(int base,int exp) {
	if (exp==0) {
		return 1;
	}
	return base * power(base, exp - 1);
}
int main() {
	cout << power(2,5);
	return 0;
}

//reverse string
#include<iostream>
using namespace std;
int reversestring(char str[],int start,int end) {
	if (start>=end) {
		return 0;
	}
	char temp = str[start];
	str[start] = str[end];
	str[end] = temp;
	reversestring(str, start + 1, end - 1);

}
int main() {
	char str[] = "hello";
	reversestring(str, 0, 4);
	cout << str;
	return 0;
}

