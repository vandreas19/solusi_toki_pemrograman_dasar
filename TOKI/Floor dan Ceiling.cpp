#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	double n;
	scanf("%lf", &n);
	int y = floor(n);
	int z = ceil(n);

	printf("%d %d\n", y,z);
	return 0;
}