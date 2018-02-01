#include <bits/stdc++.h>
using namespace std;
void luas(int a, int t){
	printf("%.2lf\n", (double)a*t/2);
}

int a,t;
int main(int argc, char const *argv[])
{
	scanf("%d%d", &a,&t);
	luas(a,t);
	return 0;
}