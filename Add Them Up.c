#include <stdio.h>

int main(void)
{
int A, t0, t1, t2;
int ok = 0;

scanf("%d", &A);

if (A >= 1000000){
	t0 = A%1000;
	A /= 1000;
	t1 = A%1000;
	t2 = A/1000;
	ok=1;
}
else if (A >= 10000){
	t0 = A%100;
	A /= 100;
	t1 = A%100;
	t2 = A/100;
	ok=1;
}
else if(A >= 100){
	t0 = A%10;
	A /= 10;
	t1 = A%10;
	t2 = A/100;
	ok=1;
}
if (ok) printf("%d,%d,%d\n", t2,t1,t0);
else {
	if (A>=10){
		t0 = A%10;
		t1 = A/10;
		printf("%d,%d,%d\n",0,t1,t2);
	}
	else {
		printf("%d,%d,%d\n",0,0,A);
	}
}

return 0;
}
