//Crear una calculadora con opciones utilizando IF,ELSE IF Y ELSE

#include<stdio.h>

int main(){

	int n1,n2,op,total;
	
	printf("seleccionar opcion\n");
	printf("1.- suma\n, 2.-resta\n, 3.-multiplicacion\n, 4.-division\n");
	scanf("%d", &op);
	
	if(op==1){
	printf("introduzca primer digito\n");
	scanf("%d", &n1);
	printf("introduzca segundo digito\n");
	scanf("%d", &n2);
	total=n1+n2;
	printf("la respuesta es: %d",total);
	}
	
	else if(op==2){
	printf("introduzca primer digito\n");
	scanf("%d", &n1);
	printf("introduzca segundo digito\n");
	scanf("%d", &n2);
	total=n1-n2;
	printf("la respuesta es: %d", total);
	}
	
	else if(op==3){
	printf("introduzca primer digito\n");
	scanf("%d", &n1);
	printf("introduzca segundo digito\n");
	scanf("%d", &n2);
	total=(n1*n2);
	printf("la respuesta es: %d", total);
	}
	else if(op==4){
	printf("introduzca primer digito\n");
	scanf("%d", &n1);
	printf("introduzca segundo digito\n");
	scanf("%d", &n2);
	total=n1/n2;
	printf("la respuesta es: %d", total);
	}
	
	else{
	printf("no seleccionaste ninguna opcion");
	}
	
	return 0;
}
