#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(){
	setlocale(LC_ALL,"Turkish");
	ensifirdan:
	printf(" --- MATEMAT�K ��LEMLER� --- \n \n");
	printf(" 1 - Toplama \n 2 - ��karma \n 3 - �arpma \n 4 - B�lme \n 5 - Fakt�riyel \n 6 - Tek �ift Say� \n 7 - Pozitif Negatif Say� \n 8 - Asal Say� \n 9 - �sl� Say� \n 10 - K�kl� Say� \n 11 - Tam Ondal�kl� Say� \n \n");
	
	double getValue, getValue2, toplam;
	int wannaGo, sayac = 1, selectMath, ifYouWannaGo, getValueIntGlobal = 0;
	
	
	printf("Yapmak istedi�iniz ��lemin Numaras�n� Giriniz : ");
	scanf("%d",&selectMath);
	
	
	if(selectMath == 1){
		printf("Toplama Se�ildi ! \n");
		
		toplam = 0,wannaGo = 0;
		sifirdan: toplam=0,sayac = 1;
		enbas: 
		if(sayac >= 1){
			
			printf("Toplamak �stedi�iniz %d. De�eri Giriniz : ",sayac);
			scanf("%lf",& getValue);
			toplam += getValue;
			
			printf("Toplama ��lemine Devam Etmek �stiyor Musunuz ? (Evet = 1, Hay�r = 2) : ");
			scanf("%d", &wannaGo);
			
			if(wannaGo == 1){
				sayac++; 
				goto enbas;
			}
			else if(wannaGo == 2){
				sayac = 0;
				printf("Girdi�iniz De�erlerin Toplam� : %.1lf \n",toplam);
				printf("��lem Sonland�r�ld� ! Anasayfaya D�nmek ��in 1'e bas�n�z..");
				scanf("%d",&ifYouWannaGo);
				if(ifYouWannaGo == 1) goto ensifirdan;
				
				/*
				
					else{
						goto enson;
					}
					
					ifYouWannaGo == 1 ? goto ensifirdan : goto enson ==> Bu �ekilde Hata Verdi
				
				*/
			}
			else {
				printf("Hatal� Giri� Yap�ld� ! ��lem Yeniden ba�lat�l�yor... \n");
				goto sifirdan;
			}
		}
		else{
			printf("Sayac De�eri 1'den K���k ! Sayac� Kontrol Ettikten Sonra Tekrar Deneyiniz...");
		}
		
	}
	else if(selectMath == 2){
		printf("��karma Se�ildi ! \n");
		
		toplam = 0, wannaGo = 0;
		sifirdan2: toplam=0,sayac = 1;
		enbas2: 
			
		printf("��karmak �stedi�iniz 1. De�eri Giriniz : ");
		scanf("%lf", &getValue);
			
		printf("��karmak �stedi�iniz 2. De�eri Giriniz : ");
		scanf("%lf", &getValue2);
			
		toplam = getValue - getValue2;
		printf("Girdi�iniz De�erlerin ��kar�lm�� Hali : %.1lf \n", toplam);
			
		printf("��karma ��lemine Devam Etmek �stiyor Musunuz ? (Evet = 1, Hay�r = 2) : ");
		scanf("%d", &wannaGo);	
			
		if(wannaGo == 1){ 
			goto enbas2;
		}
		else if(wannaGo == 2){
			printf("��lem Sonland�r�ld� ! Anasayfaya D�nmek ��in 1'e bas�n�z..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			//Buran�n Else K�sm�n� Yap enson'a gitsin
				
		}
		else {
			printf("Hatal� Giri� Yap�ld� ! ��lem Yeniden ba�lat�l�yor... \n");
			goto sifirdan2;
		}	
	}
	else if(selectMath == 3){
		printf("�arpma Se�ildi ! \n");
		
		toplam = 1, wannaGo = 0;
		sifirdan3: toplam=1,sayac = 1;
		enbas3: 
		if(sayac >= 1){
			
			printf("�arpmak �stedi�iniz %d. De�eri Giriniz : ",sayac);
			scanf("%lf", &getValue);
			toplam *= getValue;
			
			printf("�arpma ��lemine Devam Etmek �stiyor Musunuz ? (Evet = 1, Hay�r = 2) : ");
			scanf("%d", &wannaGo);
			
			
			if(wannaGo == 1){
				sayac++; 
				goto enbas3;
			}
			else if(wannaGo == 2){
				sayac = 0;
				printf("Girdi�iniz De�erlerin �arp�m� : %.1lf \n",toplam);
				printf("��lem Sonland�r�ld� ! Anasayfaya D�nmek ��in 1'e bas�n�z..");
				scanf("%d",&ifYouWannaGo);
				if(ifYouWannaGo == 1) goto ensifirdan;
				//Buran�n Else K�sm�n� Yap enson'a gitsin
			}
			else {
				printf("Hatal� Giri� Yap�ld� ! ��lem Yeniden ba�lat�l�yor... \n");
				goto sifirdan3;
			}
		}
		else{
			printf("Sayac De�eri 1'den K���k ! Sayac� Kontrol Ettikten Sonra Tekrar Deneyiniz...");
		}
	
	}
	else if(selectMath == 4){
		printf("B�lme Se�ildi ! \n");
		
		toplam = 1, wannaGo = 0;
		sifirdan4: toplam=1,sayac = 1;
		enbas4: 
			
		printf("B�lmek �stedi�iniz 1. De�eri Giriniz : ");
		scanf("%lf", &getValue);
			
		printf("B�lmek �stedi�iniz 2. De�eri Giriniz : ");
		scanf("%lf", &getValue2);
			
		toplam = getValue / getValue2;
		printf("Girdi�iniz De�erlerin B�l�m� : %.1lf \n", toplam);
			
		printf("B�lme ��lemine Devam Etmek �stiyor Musunuz ? (Evet = 1, Hay�r = 2) : ");
		scanf("%d", &wannaGo);
			
		if(wannaGo == 1){
			goto enbas4;
		}
		else if(wannaGo == 2){
			printf("��lem Sonland�r�ld� ! Anasayfaya D�nmek ��in 1'e bas�n�z..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			//Buran�n Else K�sm�n� Yap enson'a gitsin
				
		}
		else {
			printf("Hatal� Giri� Yap�ld� ! ��lem Yeniden ba�lat�l�yor... \n");
			goto sifirdan4;
		}	
	}
	
	else if(selectMath == 5){
		printf("Fakt�riyel Se�ildi ! \n");
		// Buray� Sifridan enbasa benzeterek yap
		int faktoriyel = 1, syac = 0;
		enbas5: faktoriyel = 1, syac = 0, getValueIntGlobal = 0;
		printf("Fakt�riyeli Al�nacak Say�y�y� Giriniz : ");
		scanf("%d", &getValueIntGlobal);
		
		tryFakt:
		if(syac < getValueIntGlobal){
			syac++;
			faktoriyel = faktoriyel * syac;
			goto tryFakt;
		}
		else if(syac >= getValueIntGlobal){
			printf("Fakt�riyelin Sonucu : %d \n",faktoriyel);
		}
		else{
			printf("Bir Hata Var !");
		}
		
		printf("Fakt�riyel ��lemine Devam Etmek �stiyor Musunuz ? (Evet = 1, Hay�r = 2) : ");
		scanf("%d", &wannaGo);
		
		if(wannaGo == 1){
			goto enbas5;
		}
		else if(wannaGo == 2){
			printf("��lem Sonland�r�ld� ! Anasayfaya D�nmek ��in 1'e bas�n�z..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			//Buran�n Else K�sm�n� Yap enson'a gitsin
		}
		else {
			printf("Hatal� Giri� Yap�ld� ! ��lem Yeniden ba�lat�l�yor... \n");
			goto enbas5;
		}
		
	}
	else if(selectMath == 6){
		printf("Tek �ift Say� Se�ildi ! \n");
		
		
		wannaGo = 0;
		sifirdan6: wannaGo = 0;
		enbas6: 
			
		printf("Tek Mi �ift Mi Hesaplamak �stedi�iniz De�eri Giriniz : ");
		scanf("%d", &getValueIntGlobal);
			
		if(getValueIntGlobal % 2 == 0){
			printf("Girdi�iniz De�er �ifttir ! \n");
		}
		else if(getValueIntGlobal % 2 == 1){
			printf("Girdi�iniz De�er Tektir ! \n");
		}
		else{
			printf("Hatal� Giri� Yap�ld� ! \n");
		}
				
		printf("Tek �ift ��lemine Devam Etmek �stiyor Musunuz ? (Evet = 1, Hay�r = 2) : ");
		scanf("%d", &wannaGo);
			
		if(wannaGo == 1){
			goto enbas6;
		}
		else if(wannaGo == 2){
			printf("��lem Sonland�r�ld� ! Anasayfaya D�nmek ��in 1'e bas�n�z..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			//Buran�n Else K�sm�n� Yap enson'a gitsin		
		}
		else {
			printf("Hatal� Giri� Yap�ld� ! ��lem Yeniden ba�lat�l�yor... \n");
			goto sifirdan6;
		}
	}
	else if(selectMath == 7){
		printf("Pozitif Negatif Say� Se�ildi ! \n");
		
	    wannaGo = 0;
		sifirdan7: wannaGo = 0;
		enbas7: 
			
		printf("��aretini ��renmek �stedi�iniz De�eri Giriniz : ");
		scanf("%lf",& getValue);
		
		if(getValue > 0){
			printf("Girdi�iniz De�er Pozitif ! \n");
		}
		else if(getValue == 0){
			printf("Girdi�iniz De�er S�f�ra E�it ! \n");
		}
		else if(getValue < 0){
			printf("Girdi�iniz De�er Negatif ! \n");
		}
		else{
			printf("Hatal� Giri� Yap�ld� !");
		}
			
		printf("��aret ��renme ��lemine Devam Etmek �stiyor Musunuz ? (Evet = 1, Hay�r = 2) : ");
		scanf("%d", &wannaGo);
			
		if(wannaGo == 1){
			goto enbas7;
		}
		else if(wannaGo == 2){
			printf("��lem Sonland�r�ld� ! Anasayfaya D�nmek ��in 1'e bas�n�z..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			
		}
		else {
			printf("Hatal� Giri� Yap�ld� ! ��lem Yeniden ba�lat�l�yor... \n");
			goto sifirdan7;
		}
		
	}
	else if(selectMath == 8){
		printf("Asal Say� Se�ildi ! \n");
		int ia,sayacA=0;
		sifirdan8: sayacA = 0, getValueIntGlobal = 0, wannaGo = 0;
			
	    printf("Asall��� Kontrol Edilecek Sayiyi girin : ");
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
	        printf("Girdi�iniz Say� Asal \n");                    
	    }
	    else
	    {
	        printf("Girdi�iniz Say� Asal Degil \n"); 
	    }
	    
		
		
		printf("Asall��� Kontrol Etme ��lemine Devam Etmek �stiyor Musunuz ? (Evet = 1, Hay�r = 2) : ");
		scanf("%d", &wannaGo);
			
		if(wannaGo == 1){
			goto sifirdan8;
		}
		else if(wannaGo == 2){
			printf("��lem Sonland�r�ld� ! Anasayfaya D�nmek ��in 1'e bas�n�z..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			
		}
		else {
			printf("Hatal� Giri� Yap�ld� ! ��lem Yeniden ba�lat�l�yor... \n");
			goto sifirdan8;
		}
	}
	else if(selectMath == 9){
		printf("�sl� Say� Se�ildi ! \n");
		sifirdan9: wannaGo = 0;
		int us, i, sonuc = 1;
		

		printf("Taban� Giriniz : ");
		scanf("%d", &getValueIntGlobal);
		
		printf("�ss� Giriniz : ");
		scanf("%d", &us);
		
		for(i = 0; i < us; i++){
			sonuc *= getValueIntGlobal;
		}
		printf("%d'in %d'nci kuvveti : %d \n", getValueIntGlobal,us,sonuc);
		
		printf("�ss� Hesaplanacak ��lemine Devam Etmek �stiyor Musunuz ? (Evet = 1, Hay�r = 2) : ");
		scanf("%d", &wannaGo);
			
		if(wannaGo == 1){
			goto sifirdan9;
		}
		else if(wannaGo == 2){
			printf("��lem Sonland�r�ld� ! Anasayfaya D�nmek ��in 1'e bas�n�z..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			
		}
		else {
			printf("Hatal� Giri� Yap�ld� ! ��lem Yeniden ba�lat�l�yor... \n");
			goto sifirdan9;
		}
		

		
	}
	else if(selectMath == 10){
		printf("K�kl� Say� Se�ildi ! \n");
		
		sifirdan10: getValueIntGlobal = 0, wannaGo = 0, toplam = 0;
		enbas10:
			
		
		printf("K�k� Hesaplanacak Say�y� Giriniz : ");
		scanf("%lf",&getValue);
		toplam = sqrt(getValue);
		printf("%lf \n",toplam);
		
		
		printf("K�k Hesaplama ��lemine Devam Etmek �stiyor Musunuz ? (Evet = 1, Hay�r = 2) : ");
		scanf("%d", &wannaGo);
			
		if(wannaGo == 1){
			goto enbas10;
		}
		else if(wannaGo == 2){
			printf("��lem Sonland�r�ld� ! Anasayfaya D�nmek ��in 1'e bas�n�z..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			
		}
		else {
			printf("Hatal� Giri� Yap�ld� ! ��lem Yeniden ba�lat�l�yor... \n");
			goto sifirdan10;
		}
		
		
	}
	else if(selectMath == 11){
		printf("Tam Ondal�kl� Say� Se�ildi ! \n");
		
		enbas11:
		
		printf("Tam Ondal�kl� Say� Olma Durumu Kontrol Edilecek Say�y� Giriniz : ");
		scanf("%lf", &getValue);
		
		if((getValue - (int)getValue) == 0){
			printf("Girdi�iniz Say� Tam Say�d�r ! \n");
		}
		else{
			printf("Girdi�iniz Say� Ondal�kl� Say�d�r ! \n");
		}
		
		printf("Tam Ondal�kl� Say� Kontrol ��lemine Devam Etmek �stiyor Musunuz ? (Evet = 1, Hay�r = 2) : ");
		scanf("%d", &wannaGo);
			
		if(wannaGo == 1){
			goto enbas11;
		}
		else if(wannaGo == 2){
			printf("��lem Sonland�r�ld� ! Anasayfaya D�nmek ��in 1'e bas�n�z..");
			scanf("%d",&ifYouWannaGo);
			if(ifYouWannaGo == 1) goto ensifirdan;
			
		}
		else {
			printf("Hatal� Giri� Yap�ld� ! ��lem Yeniden ba�lat�l�yor... \n");
			goto enbas11;
		}
	}
	else{
		printf("Hatal� Giri� Yap�ld� ! Program Yeniden Ba�lat�l�yor... \n");
		goto ensifirdan;
	}
	enson: // Buray� Hepsine Uygula
	getch();
}
