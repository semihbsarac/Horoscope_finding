#include<stdio.h>                    //Semih Burak Sarac 170519841

int res,tol,resh,resl,res_b1,res_b2,dec;

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
    res_b2= res/10;
    dec=1;
   
	while(res_b2>99){
    res_b2=res_b2/10;
    dec++;
	}
    res_b1=res_b2/10;
    res_b2=res_b2-(res_b1*10);
     if (res<=100){
	
    res_b1=res/10;
    res_b2=res-(res_b1*10);
}
	printf("direncin renk karsiligi: ");
    
	switch(res_b1){
		case 0:printf("siyah-"); break;
		case 1:printf("kahverengi-"); break;
        case 2:printf("kirmizi-"); break;
        case 3:printf("turuncu-"); break;	
	    case 4:printf("sari-"); break;
	    case 5:printf("yesil-"); break;
	    case 6:printf("mavi-"); break; 
	 	case 7:printf("mor-"); break;
	    case 8:printf("gri-"); break;
	    case 9:printf("beyaz-"); break;
	}
	
	switch(res_b2){
        case 0:printf("siyah-"); break;
		case 1:printf("kahverengi-"); break;
        case 2:printf("kirmizi-"); break;
        case 3:printf("turuncu-"); break;	
	    case 4:printf("sari-"); break;
	    case 5:printf("yesil-"); break;
	    case 6:printf("mavi-"); break; 
	 	case 7:printf("mor-"); break;
	    case 8:printf("gri-"); break;
	    case 9:printf("beyaz-"); break;
	}
	switch(dec){
	  case 0:printf("siyah"); break;
		case 1:printf("kahverengi"); break;
        case 2:printf("kirmizi"); break;
        case 3:printf("turuncu"); break;	
	    case 4:printf("sari"); break;
	    case 5:printf("yesil"); break;
	    case 6:printf("mavi"); break; 
	 	case 7:printf("mor"); break;
	    case 8:printf("gri"); break;
	    case 9:printf("beyaz"); break;
	}
	
}