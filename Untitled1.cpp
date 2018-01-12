#include <iostream>
using namespace std;

int main()
{
	int count = 2;
	float sum;
	while(count <= 69){
		sum = sum + 1.0/count;
		count = count + 1;
	}
	cout << sum;
	return 0;
}
