#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nama[50];
    unsigned long long tinggi;
} Player;

typedef struct {
    Player players[1000];
    int playerCount;
} Team;

int compare(const void* a, const void* b) {
    unsigned long long player1 = ((Player*)a)->tinggi;
    unsigned long long player2 = ((Player*)b)->tinggi;
    if (player1 < player2) return -1;
    if (player1 > player2) return 1;
    return 0;
}

void verdict(Team teams[], int teamCount) {
    long double totalSum = 0;
    int total_player = 0;

    for (int i = 0; i <= teamCount; i++) {
        for (int j = 0; j < teams[i].playerCount; j++) {
            totalSum += (double)teams[i].players[j].tinggi;
            total_player++;
        }
    }
    long double totalAvg = total_player > 0 ? floorl(totalSum / (long double)total_player) : 0;

    for (int i = 0; i <= teamCount; i++) {
        if (teams[i].playerCount == 0) continue;

        qsort(teams[i].players, teams[i].playerCount, sizeof(Player), compare);
        printf("Team %d : ", i + 1);

        long double teamSum = 0;
        for (int j = 0; j < teams[i].playerCount; j++) {
            printf("%s-%llucm", teams[i].players[j].nama, teams[i].players[j].tinggi);
            if (j < teams[i].playerCount - 1) printf(" | ");
            teamSum +=  (long double)teams[i].players[j].tinggi;
        }

        long double teamAvg = floorl(teamSum / (long double)teams[i].playerCount);
        printf(" | Verdict : %s!\n", teamAvg >= totalAvg ? "Win" : "Lose");
    }
}

void list_team(Team teams[], int teamCount) {
    for (int i = 0; i <= teamCount; i++) {
        if (teams[i].playerCount == 0) continue;

        qsort(teams[i].players, teams[i].playerCount, sizeof(Player), compare);
        printf("Team %d : ", i + 1);

        for (int j = 0; j < teams[i].playerCount; j++) {
            printf("%s-%llucm", teams[i].players[j].nama, teams[i].players[j].tinggi);
            if (j < teams[i].playerCount - 1) printf(" | ");
        }
        printf("\n");
    }
}

int main() {
    Team teams[10];
    unsigned long long tinggi;
    int team_curr = 0;
    char cmd[10], nama[50];

    while (scanf("%s", cmd) != EOF) {
        if (strcmp(cmd, "ADD") == 0) {
            scanf("%s %llu", nama, &tinggi);
            if (teams[team_curr].playerCount >= 1000) printf("New group plzzzz\n");
            else {
                strcpy(teams[team_curr].players[teams[team_curr].playerCount].nama, nama);
                teams[team_curr].players[teams[team_curr].playerCount].tinggi = tinggi;
                teams[team_curr].playerCount++;
            }
        }
        else if (strcmp(cmd, "BREAK") == 0) {
            if (teams[team_curr].playerCount == 0) continue;
            if (team_curr >= 9) {
                printf("Haiyah dah full lah!\n");
                break;
            }
            team_curr++;
        }
        else if (strcmp(cmd, "LIST") == 0) {
            printf("-----Current List-----\n");
            list_team(teams, team_curr);
        }
        else if (strcmp(cmd, "END") == 0) {
            printf("-----Final List-----\n");
            verdict(teams, team_curr);
            break;
        }
    }
}