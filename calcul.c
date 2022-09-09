#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float calcule_usuelle(){
	float a,b;
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
int fact(int a){
	int fact=1,i;
	if(a==0)
		return 1;
	for(i=1;i<=a;i++){
		fact *= i;
	}
	return fact;
}
int main(){
	int nbr;
	char opr;
    int c,n;
	printf("si vous voulez calcule usuelle entrez 1 ,si vous voulez calcule scientifique entrez 2:");
	scanf("%d",&n);
	if(n==1){
		c=calcule_usuelle();
	}
	else{
		printf("entrer la fonction (sous forme xxx()):");
		scanf(" %c", &opr);
		printf("entrez le nombre:");
		scanf("%d",&nbr);
	
		switch(opr){
			case'f':printf("le fact est: %d",fact(nbr));break;
			case'c' :printf("le cos de %d est :%Lf",nbr,cos(nbr));break;
			case's' :printf("le sin de %d est :%Lf",nbr,sin(nbr));break;
			case'q':printf("le carré de %d est :%d",nbr*nbr);break;
			}

	}

}
