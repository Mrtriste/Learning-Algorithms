#include <iostream>
using namespace std;

int main(){
	long long f[55];
	f[0] = 0, f[1] = 1;
	for (int i = 2; i <= 50; ++i)
		f[i] = f[i - 1] + f[i - 2];
	int n;
	while (cin >> n&&n > -1){
		cout << f[n] << endl;
	}
}