#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int jarak = abs(a-c) + abs(b-d);
	printf("%d\n", jarak);
	return 0;
}