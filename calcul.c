#include<stdio.h>
int main(){
	float a,b,res;
	char p;
	printf ("entrer le premier nbr \n");
	scanf("%f",&a);
	printf ("entrer le deuxieme nbr ");
	scanf("%f",&b);
	printf ("entrer l'opérateur");
	scanf(" %c",&p);
	switch(p){
		case'+': printf("le resultat est :%f",(a+b));break;
		case'-': printf("le resultat est :%f",(a-b));break;
		case'*': printf("le resultat est :%f",(a*b));break;
		case'/': printf("le resultat est :%f",(a/b));break;
	}
}
