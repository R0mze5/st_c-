#include <stdio.h>

using namespace std;


int main(int argc, char const *argv[])
{
	int x;
	scanf("%d", &x);

	if (x>0)
	{
		x = x*2;
		printf("x=%d\n", x);
	}
	else printf("error");
	
	return 0;
}