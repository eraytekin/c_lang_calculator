#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(){
	setlocale(LC_ALL,"Turkish");
	ensifirdan:
	printf(" --- MATEMATÝK ÝÞLEMLERÝ --- \n \n");
	printf(" 1 - Toplama \n 2 - Çýkarma \n 3 - Çarpma \n 4 - Bölme \n 5 - Faktöriyel \n 6 - Tek Çift Sayý \n 7 - Pozitif Negatif Sayý \n 8 - Asal Sayý \n 9 - Üslü Sayý \n 10 - Köklü Sayý \n 11 - Tam Ondalýklý Sayý \n \n");
	
	double getValue, getValue2, toplam;
	int wannaGo, sayac = 1, selectMath, ifYouWannaGo, getValueIntGlobal = 0;
	
	
	printf("Yapmak istediðiniz Ýþlemin Numarasýný Giriniz : ");
	scanf("%d",&selectMath);
	
	
	if(selectMath == 1){
		printf("Toplama Seçildi ! \n");
		
		toplam = 0,wannaGo = 0;
		sifirdan: toplam=0,sayac = 1;
		enbas: 
		if(sayac >= 1){
			
			printf("Toplamak Ýstediðiniz %d. Deðeri Giriniz : ",sayac);
			scanf("%lf",& getValue);
			toplam += getValue;
			
			printf("Toplama Ýþlemine Devam Etmek Ýstiyor Musunuz ? (Evet = 1, Hayýr = 2) : ");
			scanf("%d", &wannaGo);
			
			if(wannaGo == 1){
				sayac++; 
				goto enbas;
			}
			else if(wannaGo == 2){
				sayac = 0;
				printf("Girdiðiniz Deðerlerin Toplamý : %.1lf \n",toplam);
				printf("Ýþlem Sonlandýrýldý ! Anasayfaya Dönmek Ýçin 1'e basýnýz..");
				scanf("%d",&ifYouWannaGo);
				if(ifYouWannaGo == 1) goto ensifirdan;
				
				/*
				
					else{
						goto enson;
					}
					
					ifYouWannaGo == 1 ? goto ensifirdan : goto enson ==> Bu Þekilde Hata Verdi
				
				*/
			}
			else {
				printf("Hatalý Giriþ Yapýldý ! Ýþlem Yeniden baþlatýlýyor... \n");
				goto sifirdan;
			}
		}
		else{
			printf("Sayac Deðeri 1'den Küçük ! Sayacý Kontrol Ettikten Sonra Tekrar Deneyiniz...");
		}
		
	}
	else if(selectMath == 2){
		printf("Çýkarma Seçildi ! \n");
		
		toplam = 0, wannaGo = 0;
		sifirdan2: toplam=0,sayac = 1;
		enbas2: 
			
		printf("Çýkarmak Ýstediðiniz 1. Deðeri Giriniz : ");
		scanf("%lf", &getValue);
			
		printf("Çýkarmak Ýstediðiniz 2. Deðeri Giriniz : ");
		scanf("%lf", &getValue2);
			
		toplam = getValue - getValue2;
		printf("Girdiðiniz Deðerlerin Çýkarýlmýþ Hali : %.1lf \n", toplam);
			
		printf("Çýkarma Ýþlemine Devam Etmek Ýstiyor Musunuz ? (Evet = 1, Hayýr = 2) : ");
		scanf("%d", &wannaGo);	
			
		if(wannaGo == 1){ 
			goto enbas2;
		}
		else if(wannaGo == 2){
			printf("Ýþlem Sonlandýrýldý ! Anasayfaya Dönmek Ýçin 1'e basýnýz..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			//Buranýn Else Kýsmýný Yap enson'a gitsin
				
		}
		else {
			printf("Hatalý Giriþ Yapýldý ! Ýþlem Yeniden baþlatýlýyor... \n");
			goto sifirdan2;
		}	
	}
	else if(selectMath == 3){
		printf("Çarpma Seçildi ! \n");
		
		toplam = 1, wannaGo = 0;
		sifirdan3: toplam=1,sayac = 1;
		enbas3: 
		if(sayac >= 1){
			
			printf("Çarpmak Ýstediðiniz %d. Deðeri Giriniz : ",sayac);
			scanf("%lf", &getValue);
			toplam *= getValue;
			
			printf("Çarpma Ýþlemine Devam Etmek Ýstiyor Musunuz ? (Evet = 1, Hayýr = 2) : ");
			scanf("%d", &wannaGo);
			
			
			if(wannaGo == 1){
				sayac++; 
				goto enbas3;
			}
			else if(wannaGo == 2){
				sayac = 0;
				printf("Girdiðiniz Deðerlerin Çarpýmý : %.1lf \n",toplam);
				printf("Ýþlem Sonlandýrýldý ! Anasayfaya Dönmek Ýçin 1'e basýnýz..");
				scanf("%d",&ifYouWannaGo);
				if(ifYouWannaGo == 1) goto ensifirdan;
				//Buranýn Else Kýsmýný Yap enson'a gitsin
			}
			else {
				printf("Hatalý Giriþ Yapýldý ! Ýþlem Yeniden baþlatýlýyor... \n");
				goto sifirdan3;
			}
		}
		else{
			printf("Sayac Deðeri 1'den Küçük ! Sayacý Kontrol Ettikten Sonra Tekrar Deneyiniz...");
		}
	
	}
	else if(selectMath == 4){
		printf("Bölme Seçildi ! \n");
		
		toplam = 1, wannaGo = 0;
		sifirdan4: toplam=1,sayac = 1;
		enbas4: 
			
		printf("Bölmek Ýstediðiniz 1. Deðeri Giriniz : ");
		scanf("%lf", &getValue);
			
		printf("Bölmek Ýstediðiniz 2. Deðeri Giriniz : ");
		scanf("%lf", &getValue2);
			
		toplam = getValue / getValue2;
		printf("Girdiðiniz Deðerlerin Bölümü : %.1lf \n", toplam);
			
		printf("Bölme Ýþlemine Devam Etmek Ýstiyor Musunuz ? (Evet = 1, Hayýr = 2) : ");
		scanf("%d", &wannaGo);
			
		if(wannaGo == 1){
			goto enbas4;
		}
		else if(wannaGo == 2){
			printf("Ýþlem Sonlandýrýldý ! Anasayfaya Dönmek Ýçin 1'e basýnýz..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			//Buranýn Else Kýsmýný Yap enson'a gitsin
				
		}
		else {
			printf("Hatalý Giriþ Yapýldý ! Ýþlem Yeniden baþlatýlýyor... \n");
			goto sifirdan4;
		}	
	}
	
	else if(selectMath == 5){
		printf("Faktöriyel Seçildi ! \n");
		// Burayý Sifridan enbasa benzeterek yap
		int faktoriyel = 1, syac = 0;
		enbas5: faktoriyel = 1, syac = 0, getValueIntGlobal = 0;
		printf("Faktöriyeli Alýnacak Sayýyýyý Giriniz : ");
		scanf("%d", &getValueIntGlobal);
		
		tryFakt:
		if(syac < getValueIntGlobal){
			syac++;
			faktoriyel = faktoriyel * syac;
			goto tryFakt;
		}
		else if(syac >= getValueIntGlobal){
			printf("Faktöriyelin Sonucu : %d \n",faktoriyel);
		}
		else{
			printf("Bir Hata Var !");
		}
		
		printf("Faktöriyel Ýþlemine Devam Etmek Ýstiyor Musunuz ? (Evet = 1, Hayýr = 2) : ");
		scanf("%d", &wannaGo);
		
		if(wannaGo == 1){
			goto enbas5;
		}
		else if(wannaGo == 2){
			printf("Ýþlem Sonlandýrýldý ! Anasayfaya Dönmek Ýçin 1'e basýnýz..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			//Buranýn Else Kýsmýný Yap enson'a gitsin
		}
		else {
			printf("Hatalý Giriþ Yapýldý ! Ýþlem Yeniden baþlatýlýyor... \n");
			goto enbas5;
		}
		
	}
	else if(selectMath == 6){
		printf("Tek Çift Sayý Seçildi ! \n");
		
		
		wannaGo = 0;
		sifirdan6: wannaGo = 0;
		enbas6: 
			
		printf("Tek Mi Çift Mi Hesaplamak Ýstediðiniz Deðeri Giriniz : ");
		scanf("%d", &getValueIntGlobal);
			
		if(getValueIntGlobal % 2 == 0){
			printf("Girdiðiniz Deðer Çifttir ! \n");
		}
		else if(getValueIntGlobal % 2 == 1){
			printf("Girdiðiniz Deðer Tektir ! \n");
		}
		else{
			printf("Hatalý Giriþ Yapýldý ! \n");
		}
				
		printf("Tek Çift Ýþlemine Devam Etmek Ýstiyor Musunuz ? (Evet = 1, Hayýr = 2) : ");
		scanf("%d", &wannaGo);
			
		if(wannaGo == 1){
			goto enbas6;
		}
		else if(wannaGo == 2){
			printf("Ýþlem Sonlandýrýldý ! Anasayfaya Dönmek Ýçin 1'e basýnýz..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			//Buranýn Else Kýsmýný Yap enson'a gitsin		
		}
		else {
			printf("Hatalý Giriþ Yapýldý ! Ýþlem Yeniden baþlatýlýyor... \n");
			goto sifirdan6;
		}
	}
	else if(selectMath == 7){
		printf("Pozitif Negatif Sayý Seçildi ! \n");
		
	    wannaGo = 0;
		sifirdan7: wannaGo = 0;
		enbas7: 
			
		printf("Ýþaretini Öðrenmek Ýstediðiniz Deðeri Giriniz : ");
		scanf("%lf",& getValue);
		
		if(getValue > 0){
			printf("Girdiðiniz Deðer Pozitif ! \n");
		}
		else if(getValue == 0){
			printf("Girdiðiniz Deðer Sýfýra Eþit ! \n");
		}
		else if(getValue < 0){
			printf("Girdiðiniz Deðer Negatif ! \n");
		}
		else{
			printf("Hatalý Giriþ Yapýldý !");
		}
			
		printf("Ýþaret Öðrenme Ýþlemine Devam Etmek Ýstiyor Musunuz ? (Evet = 1, Hayýr = 2) : ");
		scanf("%d", &wannaGo);
			
		if(wannaGo == 1){
			goto enbas7;
		}
		else if(wannaGo == 2){
			printf("Ýþlem Sonlandýrýldý ! Anasayfaya Dönmek Ýçin 1'e basýnýz..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			
		}
		else {
			printf("Hatalý Giriþ Yapýldý ! Ýþlem Yeniden baþlatýlýyor... \n");
			goto sifirdan7;
		}
		
	}
	else if(selectMath == 8){
		printf("Asal Sayý Seçildi ! \n");
		int ia,sayacA=0;
		sifirdan8: sayacA = 0, getValueIntGlobal = 0, wannaGo = 0;
			
	    printf("Asallýðý Kontrol Edilecek Sayiyi girin : ");
		scanf("%d",&getValueIntGlobal);
		
		for(ia = 2; ia < getValueIntGlobal; ia++)
	    {
	       if(getValueIntGlobal % ia==0)
	       {
	           sayacA++;
	       }    
	    }

		if(sayacA==0)
	    {
	        printf("Girdiðiniz Sayý Asal \n");                    
	    }
	    else
	    {
	        printf("Girdiðiniz Sayý Asal Degil \n"); 
	    }
	    
		
		
		printf("Asallýðý Kontrol Etme Ýþlemine Devam Etmek Ýstiyor Musunuz ? (Evet = 1, Hayýr = 2) : ");
		scanf("%d", &wannaGo);
			
		if(wannaGo == 1){
			goto sifirdan8;
		}
		else if(wannaGo == 2){
			printf("Ýþlem Sonlandýrýldý ! Anasayfaya Dönmek Ýçin 1'e basýnýz..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			
		}
		else {
			printf("Hatalý Giriþ Yapýldý ! Ýþlem Yeniden baþlatýlýyor... \n");
			goto sifirdan8;
		}
	}
	else if(selectMath == 9){
		printf("Üslü Sayý Seçildi ! \n");
		sifirdan9: wannaGo = 0;
		int us, i, sonuc = 1;
		

		printf("Tabaný Giriniz : ");
		scanf("%d", &getValueIntGlobal);
		
		printf("Üssü Giriniz : ");
		scanf("%d", &us);
		
		for(i = 0; i < us; i++){
			sonuc *= getValueIntGlobal;
		}
		printf("%d'in %d'nci kuvveti : %d \n", getValueIntGlobal,us,sonuc);
		
		printf("Üssü Hesaplanacak Ýþlemine Devam Etmek Ýstiyor Musunuz ? (Evet = 1, Hayýr = 2) : ");
		scanf("%d", &wannaGo);
			
		if(wannaGo == 1){
			goto sifirdan9;
		}
		else if(wannaGo == 2){
			printf("Ýþlem Sonlandýrýldý ! Anasayfaya Dönmek Ýçin 1'e basýnýz..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			
		}
		else {
			printf("Hatalý Giriþ Yapýldý ! Ýþlem Yeniden baþlatýlýyor... \n");
			goto sifirdan9;
		}
		

		
	}
	else if(selectMath == 10){
		printf("KöklÜ Sayý Seçildi ! \n");
		
		sifirdan10: getValueIntGlobal = 0, wannaGo = 0, toplam = 0;
		enbas10:
			
		
		printf("Kökü Hesaplanacak Sayýyý Giriniz : ");
		scanf("%lf",&getValue);
		toplam = sqrt(getValue);
		printf("%lf \n",toplam);
		
		
		printf("Kök Hesaplama Ýþlemine Devam Etmek Ýstiyor Musunuz ? (Evet = 1, Hayýr = 2) : ");
		scanf("%d", &wannaGo);
			
		if(wannaGo == 1){
			goto enbas10;
		}
		else if(wannaGo == 2){
			printf("Ýþlem Sonlandýrýldý ! Anasayfaya Dönmek Ýçin 1'e basýnýz..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			
		}
		else {
			printf("Hatalý Giriþ Yapýldý ! Ýþlem Yeniden baþlatýlýyor... \n");
			goto sifirdan10;
		}
		
		
	}
	else if(selectMath == 11){
		printf("Tam Ondalýklý Sayý Seçildi ! \n");
		
		enbas11:
		
		printf("Tam Ondalýklý Sayý Olma Durumu Kontrol Edilecek Sayýyý Giriniz : ");
		scanf("%lf", &getValue);
		
		if((getValue - (int)getValue) == 0){
			printf("Girdiðiniz Sayý Tam Sayýdýr ! \n");
		}
		else{
			printf("Girdiðiniz Sayý Ondalýklý Sayýdýr ! \n");
		}
		
		printf("Tam Ondalýklý Sayý Kontrol Ýþlemine Devam Etmek Ýstiyor Musunuz ? (Evet = 1, Hayýr = 2) : ");
		scanf("%d", &wannaGo);
			
		if(wannaGo == 1){
			goto enbas11;
		}
		else if(wannaGo == 2){
			printf("Ýþlem Sonlandýrýldý ! Anasayfaya Dönmek Ýçin 1'e basýnýz..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			
		}
		else {
			printf("Hatalý Giriþ Yapýldý ! Ýþlem Yeniden baþlatýlýyor... \n");
			goto enbas11;
		}
	}
	else{
		printf("Hatalý Giriþ Yapýldý ! Program Yeniden Baþlatýlýyor... \n");
		goto ensifirdan;
	}
	enson: // Burayý Hepsine Uygula
	getch();
}
