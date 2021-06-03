using namespace std;
#include <iostream>
int main()
{
	int a[10];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0)
			cout << 0 << endl;
		else
			cout << a[i] << endl;
	}
	return 0;
}
