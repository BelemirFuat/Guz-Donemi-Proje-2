#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int basaynikontrol(int sayi) {//bu fonksiyonda tüm basamakların aynı olup olmadığını kontrol ettik.
	int *basamak=(int*)malloc(sizeof(int)*hanesayisi(sayi));
	int n=0,i,j,kontrol=0;
	while(sayi>0) {//sayımızı diziye çevirdik.
		basamak[n]=sayi%10;
		n++;
		sayi=sayi/10;
	}
	for(i=0; i<n; i++) {
		if(basamak[i]==basamak[i+1])
			kontrol++;
	}

	if(kontrol==(n-1))
		return 1;//hatalıysa 1; doğruysa 0 değerini döndürecek.
	else
		return 0;
}
int baskontrol(int sayi) {//bu fonksiyonda basamak sayısını kontrol ettik.
	if((sayi<10)||(sayi>999999999))
		return 1;
	else//hatalıysa 1; doğruysa 0 değerini döndürecek.
		return 0;
}
int maxkomb(int sayi) {//bu fonksiyonda sayımızın hanelerinin olabilceği en yüksek sayıyı bulduk.
	int *haneler=(int*)malloc(sizeof(int)*hanesayisi(sayi));//hane sayısı değişebildiğ için pointer dizi tanımladık.
	int i,a,j,l,m,maxsayi=0,hane,n=0;

	hane=hanesayisi(sayi);

	while(sayi>0) {
		haneler[n]=sayi%10;//sayımızı diziye geçirdik.
		n++;
		sayi=sayi/10;
	}

	for(l=1; l<=hane; l++) {//iterasyon sayısı için bir for kullandık.
		for(i=0; i<hane-1; i++) {//bubble sort benzeri bir algoritma ile sayılarımızı sıralamak üzere index numaralrı için ikinci foru kullandık.
			if(haneler[i]>haneler[i+1]) {
				a=haneler[i];
				haneler[i]=haneler[i+1];//swap kullandık.
				haneler[i+1]=a;
			}
		}

	}
	for(m=0; m<hane; m++) {//dizimizi bir sayıya çevirdik.
		maxsayi+=haneler[m]*pow(10,m);
	}
	return maxsayi;
}
int minkomb(int sayi) {//burada sadece minimum kombinasyonu bulduk onun dışında tamamen maxkomb() fonksiyonu ile aynı.
	int *haneler=(int*)malloc(sizeof(int)*hanesayisi(sayi));
	int i,a,j,l,m,minsayi=0,hane,n=0;

	hane=hanesayisi(sayi);

	while(sayi>0) {
		haneler[n]=sayi%10;
		n++;
		sayi=sayi/10;
	}

	for(l=1; l<=hane; l++) {

		for(i=0; i<hane-1; i++) {
			if(haneler[i]<haneler[i+1]) {
				a=haneler[i];
				haneler[i]=haneler[i+1];
				haneler[i+1]=a;
			}
		}

	}
	for(m=0; m<hane; m++) {
		minsayi+=haneler[m]*pow(10,m);
	}
	return minsayi;
}
int hanesayisi(int sayi) {//bu fonksiyonda hane sayımızı bulduk
	int n=0;

	while(sayi>0) {
		sayi=sayi/10;
		n++;
	}
	return n;
}
int rhesap(int sayi) {//bu fonksiyonda r'yi hesapladık.
	int s,l,r;
	s=minkomb(sayi);
	l=maxkomb(sayi);
	r=l-s;

	return r;
}
void serimikapalimi() {//bu foknsiyonda kalan tüm işlemleri yaptık.
	int sayi,n=0,kontrol=1,i,kapalisayi,seribas,serison,j;
	printf("Sayi giriniz: ");
	scanf("%d",&sayi);

	int *rler=(int*)malloc(sizeof(int)*hanesayisi(sayi)); //rler için pointer fonksiyon tanımladık çünkü eleman sayısı belli değil.

	if(basaynikontrol(sayi)+baskontrol(sayi)!=0) // sayımız istenen kurallara uyuyor mu diye kontrol ettik.
		return printf("Yanlis girdiniz.");
	
	n++;

	do {//sayı dizi mi yoksa kapalı sayı mı kontrol ettik.
		rler[n]=rhesap(sayi);//burada rler dizimize yeni eleman ekledik.
		printf("N = %d L = %d S = %d R= %d		rler n = %d\n",sayi,maxkomb(sayi),minkomb(sayi),rhesap(sayi),rler[n]);
		for(i=1; i<n; i++) {
			if((rler[i]==rler[i-1])) {
				kontrol=0;
				kapalisayi=1;
			} else if(rler[i-1]==rhesap(sayi)) {
				kontrol=0;
				kapalisayi=0;
				seribas=i;
				serison=n;
			}
		}

		
		if(hanesayisi(sayi)>hanesayisi(rhesap(sayi))) {//hane sayısı düşerse sayımızın sonuna 0 ekledik.
			sayi=rhesap(sayi)*10;
		} else {
			sayi= rhesap(sayi);
		}
		n++;

	} while(kontrol==1);
	printf("\n\n");
	if(kapalisayi==0) {
		printf("%d adimda bir seriye ulasildi. Serinin uzunlugu %d. Ve seriyi olusturan sayilar sirasiyla: \n",n-1,serison-seribas+1);
		for(j=seribas; j<=serison; j++) {
			printf("%d\n",rler[j]);
		}
	} else {
		printf("%d adimda kapali sayiya ulasilmistir ve bu kapali sayi: %d.\n",n-2,rler[n-1]);
	}
}
void main() {//bu fonksiyonumuz tamamen kod kontrolu sırasında kolaylık için yapıldı.
	int kontrol;

	do {
		serimikapalimi();
		printf("devam etmek icin 1; devam etmemek icin baska bir sayi giriniz: ");
		scanf("%d",&kontrol);
	} while(kontrol==1);
}