#include <stdio.h>
#include <string.h>

int main(){

	//Para yatýrma,para çekme,
    //Bankamatikte kayýtlý kullanýcý bilgileri
	char isim[10]="nisa";
	int parola=1126;
	char istenilecekisim[10];
	int istenilecekparola;
	int secim;
	int yatirilacakpara;
	int cekilecekpara;
	int bakiye=100;
	
	printf("BANKAMATIGE HOSGELDINIZ");
	printf("\nIsminizi giriniz: ");
	scanf("%s",&istenilecekisim);
	
	printf("\nParolanizi giriniz: ");
	scanf("%d",&istenilecekparola);
	
	if(strcmp(isim,istenilecekisim)==0 && istenilecekparola==parola){
		printf("Kullanici bilgileri eslesmistir.");
		printf("\nAsagidaki seceneklerden birini seciniz\n\n[1]-Para yatirma\n[2]-Para cekme\n[3]-Kullanici bilgileri\n\nSeceneklerden birini seciniz: ");
		scanf("%d",&secim);
		if(secim==1){
			printf("Para yatirma islemindesiniz.Kac para yatirmak istersiniz? ");
			scanf("%d",&yatirilacakpara);
			bakiye=bakiye+yatirilacakpara;
			printf("Yatirilan para miktari: %d\n\nSon toplam bakiye: %d",yatirilacakpara,bakiye);
		}
		else if(secim==2){
		printf("Para cekme islemindesiniz.Kac para cekmek istersiniz? ");
		scanf("%d",&cekilecekpara);
		bakiye=bakiye-cekilecekpara;
		printf("Cekilen para miktari: %d\n\nSon toplam bakiye: %d",cekilecekpara,bakiye);
	    }
	    else if(secim==3){
	    	printf("Kullanici adiniz: %s\n\nHesap sifreniz: %d\n\nHesap bakiyeniz: %d",isim,parola,bakiye);
		}
		else{
			printf("Yanlis secim yaptiniz,lutfen tekrar deneyiniz.");
		}
	}
	else{
		printf("Kullanici adi veya sifreniz yanlistir.");
	}
	return 0;
}
