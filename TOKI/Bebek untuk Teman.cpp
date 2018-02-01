#include <bits/stdc++.h>
using namespace std;



void out(int a,int b){
	printf("masing-masing %d\n", a/b);
	printf("bersisa %d\n", a%b);
}

int a,b;
int main(int argc, char const *argv[])
{
	scanf("%d%d", &a,&b);
	out(a,b);
	return 0;
}