#include <stdio.h>
#include <time.h>


void anaMenu(double bakiye){
    while(1){
        int islem;
        printf("Yapmak istediginiz islemi seciniz.\n1:PARA CEKME\n2:PARA YATIRMA \n3:BAKIYE SORGULAMA\n");
        scanf("%d",&islem);
        if (islem == 1){
            paraCekme(bakiye);
            break;
        }
        else if (islem == 2){
            paraYatirma(bakiye);
            break;
        }
        else if (islem == 3){
            bakiyeSorgulama(bakiye);
            break;
        }
        else{
            printf("Lutfen gecerli bir islem giriniz.");
        }
    }
}
void paraCekme(double bakiye){
    double cekilenMiktar;
    printf("Hesabinizda %lfTL bakiye bulunmaktadir.\n",bakiye);
    printf("Cekmek istediginiz miktari tuslayiniz: \n");
    scanf("%lf",&cekilenMiktar);
    bakiye = bakiye - cekilenMiktar;
    printf("%0.2lfTL cekim isleminiz basariyla tamamlandi. Yeni bakiyeniz %0.2lfTL.",cekilenMiktar,bakiye);
    sleep(1);
    anaMenu(bakiye);}
    
void paraYatirma(double bakiye){
    double yatirilanMiktar;
    printf("Hesabinizda %lfTL bakiye bulunmaktadir.\n",bakiye);
    printf("Yatirmak istediginiz miktari tuslayiniz: \n");
    scanf("%lf",&yatirilanMiktar);
    bakiye = bakiye + yatirilanMiktar;
    printf("%0.2lfTL yatirma isleminiz basariyla tamamlandi. Yeni bakiyeniz %0.2lfTL.",yatirilanMiktar,bakiye);
    sleep(1);
    anaMenu(bakiye);
}
int bakiyeSorgulama(double bakiye){
    printf("Guncel hesap bakiyeniz %lfTL`dir.",bakiye);
    anaMenu(bakiye);
}

int main(void){
    int hesapNo;
    int hesapSifre;
    double bakiye = 5000;
    printf("Hosgeldiniz!\n");
    sleep(1);
    printf("Hesap numaranizi giriniz: \n");
    scanf("%d",&hesapNo);
    printf("Sifrenizi giriniz: \n");
    scanf("%d",&hesapSifre);
    printf("Basariyla giris yapildi");
    sleep(1);
    
    anaMenu(bakiye);


    return 0;
}