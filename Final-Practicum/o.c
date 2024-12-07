#include <stdio.h>
#include <string.h>

int main() {
    int n, cmd_first = 0;
    scanf("%d", &n);
    char otoritas_highest[11] = {'\0'}, otoritas_prev[11] = {'\0'}, aksi_curr[11] = {'\0'};
    
    for (int i = 0; i < n; i++) {
        char otoritas[11], aksi[11];
        scanf("%s %s", otoritas, aksi);
        
        if (!cmd_first && strcmp(aksi, "istirahat") == 0) {
            printf("Oceanid Minion marah karena belum diperintah apa-apa, tetapi sudah disuruh istirahat!\n");
            break;
        }
        
        int otoritas_cmd = 0, otoritas_cmd_highest = 0;
        if (strcmp(otoritas, "furina") == 0) otoritas_cmd = 1;
        else if (strcmp(otoritas, "hutao") == 0) otoritas_cmd = 2;
        else if (strcmp(otoritas, "lyney") == 0) otoritas_cmd = 3;
        
        if (strcmp(otoritas_highest, "furina") == 0) otoritas_cmd_highest = 1;
        else if (strcmp(otoritas_highest, "hutao") == 0) otoritas_cmd_highest = 2;
        else if (strcmp(otoritas_highest, "lyney") == 0) otoritas_cmd_highest = 3;
        
        if (!cmd_first || otoritas_cmd_highest == 0) {
            strcpy(otoritas_highest, otoritas);
            strcpy(otoritas_prev, otoritas);
            strcpy(aksi_curr, aksi);
            printf("Oceanid Minion %s sesuai keinginan %s.\n", aksi, otoritas);
            cmd_first = 1;
            continue;
        }
        if (otoritas_cmd > otoritas_cmd_highest) {
            printf("Oceanid Minion tidak nurut karena wewenang %s lebih rendah dari %s.\n", otoritas, otoritas_highest);
            continue;
        }
        if (strcmp(aksi, aksi_curr) == 0) {
            printf("Oceanid Minion sudah diperintah %s oleh %s.\n", aksi_curr, otoritas_prev);
            strcpy(otoritas_highest, otoritas);
            continue;
        }
        strcpy(otoritas_highest, otoritas);
        strcpy(otoritas_prev, otoritas);
        strcpy(aksi_curr, aksi);
        printf("Oceanid Minion %s sesuai keinginan %s.\n", aksi, otoritas);
    }
}