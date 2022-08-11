#include <stdio.h>

bool kiemtra(int a){
	 if (a < 2) {
        return false;
	 }
	for (int i = 2 ; i*i <= a; i++) 
	{
		if(a % i == 0) return false;
	}

	return true;

}
int main () {
	printf(" nhap so nguyen duong bat ky \n");
	int x;
	do { 
	scanf("%d", &x);
	if ( x <= 0) {printf ("nhap lai \n");} 
} while (x <= 0);

    if ( kiemtra(x)) {
    	printf (" %d is  a prime number", x);
	} else {
		printf (" %d is not a prime number", x);
	}
	return 0;
	}
