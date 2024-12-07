#include <stdio.h>
#include <string.h>
#define MAX_MENU 100

struct Menu {
    int kode;
    char nama[100];
    long long harga;
    int stok;
};

int main() {
    struct Menu menu[MAX_MENU];
    int kode, stok, jumlah, menuCount = 0;
    long long harga, penghasilan = 0;
    char cmd[10], nama[100];
    
    while(scanf("%s", cmd) != EOF) {
        if(strcmp(cmd, "ADD") == 0) {
            scanf("%d", &kode);
            scanf(" %[^\n]s", nama);
            scanf("%lld %d", &harga, &stok);
            
            int exists = 0;
            for(int i = 0; i < menuCount; i++) {
                if(menu[i].kode == kode) {
                    exists = 1;
                    break;
                }
            }
            
            if(exists) printf("Menu is already exists\n");
            else {
                menu[menuCount].kode = kode;
                strcpy(menu[menuCount].nama, nama);
                menu[menuCount].harga = harga;
                menu[menuCount].stok = stok;
                menuCount++;
                printf("Menu added\n");
            }
        }
        else if(strcmp(cmd, "REMOVE") == 0) {
            scanf("%d", &kode);
            
            int found = -1;
            for(int i = 0; i < menuCount; i++) {
                if(menu[i].kode == kode) {
                    found = i;
                    break;
                }
            }
            
            if(found == -1) printf("Menu does not exist\n");
            else {
                for(int i = found; i < menuCount-1; i++) menu[i] = menu[i+1];
                menuCount--;
                printf("Menu removed\n");
            }
        }
        else if(strcmp(cmd, "INFO") == 0) {
            scanf("%d", &kode);
            
            int found = -1;
            for(int i = 0; i < menuCount; i++) {
                if(menu[i].kode == kode) {
                    found = i;
                    break;
                }
            }
            
            if(found == -1) printf("Menu does not exist\n");
            else printf("#%d %s\nPrice : Rp%lld\nStock : %dx\n", menu[found].kode, menu[found].nama, menu[found].harga, menu[found].stok);
        }
        else if(strcmp(cmd, "ORDER") == 0) {
            scanf("%d %d", &kode, &jumlah);
            
            int found = -1;
            for(int i = 0; i < menuCount; i++) {
                if(menu[i].kode == kode) {
                    found = i;
                    break;
                }
            }
            
            if(found == -1) printf("Menu does not exist\n");
            else if(jumlah == 0) printf("So you want to order or what\n");
            else if(jumlah > menu[found].stok) printf("Apologize, the stock is not enough\n");
            else {
                menu[found].stok -= jumlah;
                long long harga_total = menu[found].harga * jumlah;
                penghasilan += harga_total;
                printf("Ordered %dx %s for Rp%lld\n", jumlah, menu[found].nama, harga_total);
            }
        }
        else if(strcmp(cmd, "CLOSE") == 0) {
            printf("Earnings: Rp%lld\nInformatics canteen is closing... thanks for the visit!\n", penghasilan);
            break;
        }
    }
}