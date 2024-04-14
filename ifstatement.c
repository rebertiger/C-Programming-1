#include <stdio.h>


int main(void){
    int yas;

    printf("\nKac yasindasiniz: ");
    scanf("%d",&yas);
    if(yas >= 18 && yas < 99){
        printf("Kayit islemine devam edebilirsiniz.");
    
    }
    else if(yas <=0){
        printf("Henuz dogmadiysaniz kayit da olamazsiniz.");
    
    }
    else if (yas>=99){
        printf("Uzun omurler diliyoruz, kayit islemine devam edebilirsiniz.");
    }
    else{
        printf("Yas sartini karsilamadiginiz icin kayit olamazsiniz.");
    }
    return 0;
}
