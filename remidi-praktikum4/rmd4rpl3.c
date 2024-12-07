#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 1000
#define MAX_STRING 100

struct Player {
    char username[MAX_STRING];
    char ip[MAX_STRING];
    char uuid[MAX_STRING];
};

int main() {
    struct Player players[MAX_PLAYERS];
    int i, j;

    scanf("%d", &i);

    for (int k = 0; k < i; k++) {
        scanf("%s %s %s", players[k].username, players[k].ip, players[k].uuid);
    }

    scanf("%d", &j);

    for (int k = 0; k < j; k++) {
        char request[MAX_STRING];
        scanf("%s", request);
        
        int found = 0;
        for (int m = 0; m < i; m++) {
            if (strcmp(players[m].username, request) == 0) {
                printf("asyik %s-%s diperbolehkan bermain\n", 
                       players[m].uuid, players[m].username);
                found = 1;
                break;
            }
        }
        
        if (!found) printf("hmm, kayaknya ada yang salah dengan datamu\n");
    }
    
    return 0;
}