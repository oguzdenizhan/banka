#include <stdio.h>
int main(void)
{
	int islem;
	float bakiye =2000;
	float tutar;
	int tc = 44;
	
	printf("TC numaranizi giriniz:\n");
	scanf("%d",&tc);
	
	if(tc == 44){
	
	
	printf("islemler:\n\n 1. Para Cekme\n 2. Para Yatirma\n 3. Bakiye Sorma\n 4. Kart Iade\n ");
	scanf("%d",&islem);
	

	switch(islem){
	
		case 1:
		    printf("bakiyeniz = %.2f\n", bakiye);
			printf("cekmek istediginiz tutari giriniz\n");
			scanf("%f",&tutar);
		
			if(tutar>bakiye)
			printf("yetersiz bakiye");
			
			else{
				bakiye= bakiye- tutar;
				printf("islem basariyla gerceklesti\n kalan bakiye: %.2f",bakiye);
			}
			break;
			
		case 2:
		    printf("bakiyeniz = %.2f\n", bakiye);
			printf("yatirmak istediginiz tutari giriniz");
			scanf("%f",&tutar);
			
			bakiye = bakiye+ tutar;
			printf("guncel bakiyeniz: %.2f",bakiye);
			break;
			
		case 3:
			printf("Guncel bakiyeniz: %.2f dir\n",bakiye);
			break;
	
	    case 4:
			printf("Kartiniz iade edildi\n");
			break;
			
			default: printf("basarisiz");
			
	
}
}
 else {
 
 
 printf("Hatali giris");
}
 
 
 
}

