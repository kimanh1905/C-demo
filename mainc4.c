 #include <stdio.h> 
 #include <stdbool.h> 
 int main(){
	while("true"){
	int a;
	int b;
	printf("MENU\n");
	printf("1. tong hai so la:\n ");
	printf("2. hieu hai so la:\n");
	printf("3. tich hai so la:\n");
	printf("4. thuong hai so la:\n");
	printf("5. vui long nhap lai\n");
	printf(" nhap giá tri a la:\n");
	scanf("%i", &a);
			switch (a){
			case 1:
				printf("vui long nhap gia tri a la:\n");
				scanf("%i", &a);
				printf("vui long nhap gia tri b la:");
				scanf("%i", &b);
				printf("\ntong hai so: %i + %i = %i", a, b, a + b);
				break;
			case 2:	
				printf("vui long nhap gia tri a la:\n");
				scanf("%i", &a);
				printf("vui long nhap gia tri b la:");
				scanf("%i", &b);
			    printf("hieu hai so: %i -%i = %i",a, b, a - b);
			    break;
			case 3:	
				printf("vui long nhap gia tri a la:\n");
				scanf("%i", &a);
				printf("vui long nhap gia tri b la:");
				scanf("%i", &b);
				printf("tich hai so: %i * %i = %i", a, b, a * b);
			    break;
			case 4:	
				printf("vui long nhap gia tri a la:\n");
				scanf("%i", &a);
				printf("vui long nhap gia tri b la:");
				scanf("%i", &b);
				if("!b=0");
				printf("thuong hai so: %i / %i = %i",a, b, a / b);
				break;
			case 5:
				printf("vui long nhap lai");
				break;
			if(a == 5){
			printf("\n");	
			break;
		}
		}
		return 0;
	}
	}

