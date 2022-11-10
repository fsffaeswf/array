#include <iostream>
#include <ctime>
using namespace std;

int main() {
	/*6
	int arr[10];
	int A, B;
	cin >> A >> B;
	arr[0] = A;
	arr[1] = B;
	for (int i = 2; i < 10; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}*/


	
	/*7
	const int N = 10;
	int arr[N];
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout <<endl;
	for (int i = 9; i >= 0; i--) {
		cout << arr[i] << ' ';
	}*/

	
	
	/*8
	const int N = 10;
	int arr[N],k = 0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0) {
			cout << arr[i]<<' ';
			k++;
		}
	}
	cout <<endl<< k;*/

	
	/*9
	const int N = 10;
	int arr[N], k = 0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 9; i >= 0; i--) {
		if (arr[i] % 2 == 0) {
			cout << arr[i] << ' ';
			k++;
		}
	}
	cout << endl << k;*/

	
	/*10
	const int N = 10;
	int arr[N];
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			cout << arr[i] << ' ';
		}
	}
	cout << endl;
	for (int i = 9; i >= 0; i--) {
		if (arr[i] % 2 != 0) {
			cout << arr[i] << ' ';
		}
	}*/

	

	
	/*11
	const int N = 10;
	int arr[N],k;
	cin >> k;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i=k+i) {
		cout <<arr[i]<<' ';
	}*/

	/*12
	const int N = 10;
	int arr[N];
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i+=2) {
		cout << arr[i] << ' ';
	}*/

	/*13
	const int N = 10;
	int arr[N];
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 9; i >= 0; i-=2) {
		cout << arr[i] << ' ';
	}*/

	/*14
	const int N = 10;
	int arr[N];
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i+=2) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 1; i < 10; i += 2) {
		cout << arr[i] << ' ';
	}*/
	
	/*arr26
	const int N = 10;
	int arr[N],  i = 0;
	bool c = 1;
	for (int i = 0; i < N; i++) {
		cin>>arr[i];
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	while(i<N-1 && c == 1) {
		c = (arr[i] % 2 == 0 && arr[i+1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i+1] % 2 == 0);
		i++;
	}
	if (c == 0) {
		cout << i;
	}
	else {
		cout << 0;
	}*/


	/*arr25
	const int N = 10;
	int arr[N], i = 0, k = 0;
	bool c = 1;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	float q = arr[1] / arr[0];
	while(i<N-1 && c == 1) {
		c = q == arr[i+1] / arr[i];
		i++;
	}
	if (c == 1) {
		cout << q;
	}
	else {
		cout << 0;
	}*/

	/*arr24
	const int N = 10;
	int arr[N], i = 0, k = 0;
	bool c = 1;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	int d = arr[1] - arr[0];
	while(i<N-1 && c == 1) {
		c = d == arr[i+1] - arr[i];
		i++;
	}
	if (c == 1) {
		cout << d;
	}
	else {
		cout << 0;
	}*/

	/*arr27
	const int N = 10;
	int arr[N],  i = 0;
	bool c = 1;
	for (int i = 0; i < N; i++) {
		cin>>arr[i];
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	while(i<N-1 && c == 1) {
		c = (arr[i] > 0 && arr[i+1] < 0) || (arr[i]  < 0 && arr[i+1] > 0);
		i++;
	}
	if (c == 0) {
		cout << i;
	}
	else {
		cout << 0;
	}*/

	/*arr28
	const int N = 10;
	int arr[N],min =0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < N; i += 2) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << min;*/
	
	/*arr29
	const int N = 10;
	int arr[N],max =0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 1; i < N; i += 2) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << max;*/
	
	/*arr30
	const int N = 10;
	int arr[N],max =0,k = 0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < N-1; i ++) {
		if (arr[i] > arr[i + 1]) {
			cout << i << ' ';
			k++;
		}
	}
	cout << endl<<k;*/
	
	
	/*arr31
	const int N = 10;
	int arr[N],max =0,k = 0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = N-1; i > 0; i --) {
		if (arr[i] > arr[i - 1]) {
			cout << i << ' ';
			k++;
		}
	}
	cout << endl<<k;*/

	/*arr32
	const int N = 10;
	int arr[N],max =0,k = 0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 1; i < N-1; i++) {
		if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
			cout << arr[i];
			break;
		}
	}*/






	}



















