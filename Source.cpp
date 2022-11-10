#include<iostream>
#include<ctime>
using namespace std;
int main() {
	//11
	/*const int n = 10;
	int arr[n];
	int k;
	cin >> k;
	srand(time(nullptr));
	for (int i = k; i < n; i+=k) {
		arr[i] = rand() % 51;
		cout <<i<<" "<< arr[i] << endl;
	}*/
	//12
	/*const int n = 50;
	int arr[n+1];
	srand(time(nullptr));
	for (int i = 2; i <= n; i += 2) {
		arr[i] = rand() % 51;
		cout << i << " " << arr[i] << endl;
	}*/
	//13
	/*const int n = 10;
	int arr[n + 1];
	srand(time(nullptr));
	for (int i = 0; i <=n; i++) {
		arr[i] = rand() % 51;
	}
	for (int i = n; i >= 0; i -=2) {
		cout << i << " " << arr[i] << endl;
	}*/
	//14
	/*const int n = 10;
	int arr[n + 1];
	srand(time(nullptr));
	for (int i = 0; i <= n; i++) {
		arr[i] = rand() % 51;
	}
	for (int i = 2; i <= n; i += 2) {
		cout << i << " " << arr[i] << endl;
	}
	for (int i = 1; i <= n; i +=2) {
		cout << i << " " << arr[i] << endl;
	}*/
	//15
	/*const int n = 10;
	int arr[n + 1];
	srand(time(nullptr));
	for (int i = 0; i <= n; i++) {
		arr[i] = rand() % 51;
	}
	for (int i = 1; i <= n; i += 2) {
		cout << i << " " << arr[i] << endl;
	}
	for (int i = n; i >= 0; i -= 2) {
		cout << i << " " << arr[i] << endl;
	}*/
	//16
	/*const int n = 10;
	int arr[n + 1];
	int k;
	k = 0;
	srand(time(nullptr));
	for (int i = 0; i <= n; i++) {
		arr[i] = rand() % 51;
	}
	for (int i = 1; i <= n/2; i ++) {
		cout << i << " " << arr[i] << endl;
		cout << n-k << " " << arr[n-k] << endl;
		k++;
	}*/
	//17
	/*const int n = 10;
	int arr[n + 1];
	int k;
	k = 0;
	srand(time(nullptr));
	for (int i = 0; i <= n; i++) {
		arr[i] = rand() % 51;
	}
	for (int i = 1; i <= n / 2; i+=2) {
		cout << i << " " << arr[i] <<endl << i+1 << " " << arr[i+1] << endl;
		cout << n - i+1 << " " << arr[n - i+1] << endl << n - i << " " << arr[n - i] << endl;
		k++;
	}*/
	//18
	/*const int n = 10;
	int arr[n];
	int k=0;
	srand(time(nullptr));
	for (int i = 0; i < n; i ++) {
		arr[i] = rand() % 51;
		cout << i << " " << arr[i] << endl;
		if (arr[i] < 10) {
			k = arr[i];
			break;
		}
	}
	cout << k << endl;*/
	//19
	/*const int n = 10;
	int arr[n];
	int k = 0;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 51;
		cout << i << " " << arr[i] << endl;
		if (1 < arr[i] and arr[i] < 10) {
			k = arr[i];
		}
	}
	cout << k << endl;*/
	//20
	/*const int n = 10;
	int arr[n];
	float k,l,sum=0;
	cin >> k >> l;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 51;
		cout << i << " " << arr[i] << endl;
		if ((k <= arr[i] and arr[i] <= l)or(l <= arr[i] and arr[i] <= k)) {
			sum = sum + arr[i];
		}
	}
	cout << sum << endl;*/
	//21
	/*const int n = 10;
	int arr[n];
	float k,l,count=0,sum=0;
	cin >> k >> l;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 51;
		cout << i << " " << arr[i] << endl;
		if ((k <= arr[i] and arr[i] <= l)or(l <= arr[i] and arr[i] <= k)) {
			count++;
			sum = sum + arr[i];
		}
	}
	cout << sum/count << endl;*/
	//22
	/*const int n = 10;
	int arr[n];
	float k,l,sum=0;
	cin >> k >> l;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 51;
		cout << i << " " << arr[i] << endl;
		if ((k > arr[i] and arr[i] < l)or (k < arr[i] and arr[i] > l)) {
			sum = sum + arr[i];
		}
	}
	cout << sum << endl;*/
	//23
	/*const int n = 10;
	int arr[n];
	float k,l,sum=0,count=0;
	cin >> k >> l;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 51;
		cout << i << " " << arr[i] << endl;
		if ((k > arr[i] and arr[i] < l)or (k < arr[i] and arr[i] > l)) {
			sum = sum + arr[i];
			count++;
		}
	}
	cout << sum/count << endl;*/
	//24
	return 0;
}