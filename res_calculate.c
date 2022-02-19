#include<stdio.h>                    //Semih Burak Sarac 170519841


int res,tol,resh,resl;

  void main()
{     
    printf("direnc degerini giriniz(ohm): ");
	scanf("%d", &res);
    printf("direncin yuzde tolerans degerini giriniz(0-99 arasi):  ");
	scanf("%d", &tol);
    resh= res+((res*tol)/100);
	resl= res-((res*tol)/100);
	printf("\n \n direncin toleransa gore maksimum degeri: %d ohm  \n \n ",resh);  
	printf("direncin toleransa gore minimum degeri: %d ohm \n ",resl);   
}