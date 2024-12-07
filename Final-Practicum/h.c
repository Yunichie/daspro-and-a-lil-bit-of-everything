#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void chessChecker(char *wk, char *wq, char *bk, char *bq, char x) {
    int wk_kolom = wk[0] - 'a', wk_baris = wk[1] - '1', wq_kolom = wq[0] - 'a', wq_baris = wq[1] - '1';
    int bk_kolom = bk[0] - 'a', bk_baris = bk[1] - '1', bq_kolom = bq[0] - 'a', bq_baris = bq[1] - '1';
    int is_empty = 0;

    if (x == 'w') {
        int baris = wq_baris < bk_baris ? wq_baris : bk_baris;
        int baris_max = wq_baris > bk_baris ? wq_baris : bk_baris;
        int kolom = wq_kolom < bk_kolom ? wq_kolom : bk_kolom;
        int kolom_max = wq_kolom > bk_kolom ? wq_kolom : bk_kolom;
        
        if (wq_baris == bk_baris || wq_kolom == bk_kolom || abs(wq_baris - bk_baris) == abs(wq_kolom - bk_kolom)) {
            if (bq_baris >= baris && bq_baris <= baris_max && bq_kolom >= kolom && bq_kolom <= kolom_max) {
                if (wq_baris == bk_baris && bq_baris == wq_baris) is_empty = 1;
                if (wq_kolom == bk_kolom && bq_kolom == wq_kolom) is_empty = 1;
                if (abs(wq_baris - bk_baris) == abs(wq_kolom - bk_kolom) && abs(wq_baris - bq_baris) == abs(wq_kolom - bq_kolom) && abs(bq_baris - bk_baris) == abs(bq_kolom - bk_kolom))
                    is_empty = 1;
            }
            if (wk_baris >= baris && wk_baris <= baris_max && wk_kolom >= kolom && wk_kolom <= kolom_max) {
                if (wq_baris == bk_baris && wk_baris == wq_baris) is_empty = 1;
                if (wq_kolom == bk_kolom && wk_kolom == wq_kolom) is_empty = 1;
                if (abs(wq_baris - bk_baris) == abs(wq_kolom - bk_kolom) && abs(wq_baris - wk_baris) == abs(wq_kolom - wk_kolom) && abs(wk_baris - bk_baris) == abs(wk_kolom - bk_kolom))
                    is_empty = 1;
            }
            
            if (!is_empty) {
                printf("White checked Black!\n");
                return;
            }
        }
    } else {
        int baris = bq_baris < wk_baris ? bq_baris : wk_baris;
        int baris_max = bq_baris > wk_baris ? bq_baris : wk_baris;
        int kolom = bq_kolom < wk_kolom ? bq_kolom : wk_kolom;
        int kolom_max = bq_kolom > wk_kolom ? bq_kolom : wk_kolom;
        
        if (bq_baris == wk_baris || bq_kolom == wk_kolom || abs(bq_baris - wk_baris) == abs(bq_kolom - wk_kolom)) {
            if (wq_baris >= baris && wq_baris <= baris_max && wq_kolom >= kolom && wq_kolom <= kolom_max) {
                if (bq_baris == wk_baris && wq_baris == bq_baris) is_empty = 1;
                if (bq_kolom == wk_kolom && wq_kolom == bq_kolom) is_empty = 1;
                if (abs(bq_baris - wk_baris) == abs(bq_kolom - wk_kolom) && abs(bq_baris - wq_baris) == abs(bq_kolom - wq_kolom) && abs(wq_baris - wk_baris) == abs(wq_kolom - wk_kolom))
                    is_empty = 1;
            }
            if (bk_baris >= baris && bk_baris <= baris_max && bk_kolom >= kolom && bk_kolom <= kolom_max) {
                if (bq_baris == wk_baris && bk_baris == bq_baris) is_empty = 1;
                if (bq_kolom == wk_kolom && bk_kolom == bq_kolom) is_empty = 1;
                if (abs(bq_baris - wk_baris) == abs(bq_kolom - wk_kolom) && abs(bq_baris - bk_baris) == abs(bq_kolom - bk_kolom) && abs(bk_baris - wk_baris) == abs(bk_kolom - wk_kolom))
                    is_empty = 1;
            }
            
            if (!is_empty) {
                printf("Black checked White!\n");
                return;
            }
        }
    }
    printf("Game is still going!\n");
}

int main() {
    char wk[3], wq[3], bk[3], bq[3], x;
    scanf("%s %s ", wk, wq);
    scanf("%s %s ", bk, bq);
    scanf("%c", &x);
    chessChecker(wk, wq, bk, bq, x);
    return 0;
}