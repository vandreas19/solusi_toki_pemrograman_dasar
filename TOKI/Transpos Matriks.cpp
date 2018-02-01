#include <bits/stdc++.h>
using namespace std;


int a[3][3];
int main(int argc, char const *argv[])
{
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int j=0;j<3;j++){
		for(int i=0;i<3;i++){
			if(i == 2)printf("%d\n", a[i][j]);
			else printf("%d ", a[i][j]);
		}
	}
	/* code */
	return 0;
}