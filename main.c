#include <stdio.h>
main() {
	int a;
	int b;
	printf("so cua a la:");
	scanf("%i", &a);
	printf("so cua b la:");
	scanf("%i", &b);
	printf("%i\n", plus(a,b));
	printf("%i\n", minus(a,b));
	printf ("%i\n", multiply (a,b));
	printf ("%i", devision (a,b));


}
	//tinh tong, hieu, nhân, chia cua hai so bat ki 
	// la a, b la hai so nguyen.

	int plus (int a,int b){
		return a + b ;
}
	int minus (int a,int b){
		return a - b;
}
	int multiply (int a,int b){
		return a * b;
}
	int devision ( int a, int b){
		return a / b;
}		
	 
	 
