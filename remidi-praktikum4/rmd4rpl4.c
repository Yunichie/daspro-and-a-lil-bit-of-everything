#include <stdio.h>
#include <string.h>

#define MAX_ISLANDS 50
#define MAX_FARMS 5
#define MAX_NAME 33

typedef struct {
    char name[MAX_NAME];
    long long rate;
} Farm;

typedef struct {
    char name[MAX_NAME];
    long long x, z;
    Farm farms[MAX_FARMS];
    int farmCount;
} Island;

Island islands[MAX_ISLANDS];
int islandCount = 0;

int findIsland(char* name) {
    for (int i = 0; i < islandCount; i++)
        if (strcmp(islands[i].name, name) == 0)
            return i;
    return -1;
}

void addIsland(char* name, long long x, long long z) {
    if (islandCount >= MAX_ISLANDS) {
        printf("CANNOT ADD MORE ISLAND\n");
        return;
    }

    Island* island = &islands[islandCount++];
    strcpy(island->name, name);
    island->x = x;
    island->z = z;
    island->farmCount = 0;
    printf("ISLAND ADDED\n");
}

void addFarm(char* farmName, char* islandName, long long rate) {
    int idx = findIsland(islandName);
    if (idx == -1) {
        printf("ISLAND NOT FOUND CANNOT ADD FARM\n");
        return;
    }

    Island* island = &islands[idx];
    if (island->farmCount >= MAX_FARMS) {
        printf("ISLAND IS FULL CANNOT ADD FARM\n");
        return;
    }

    Farm* farm = &island->farms[island->farmCount++];
    strcpy(farm->name, farmName);
    farm->rate = rate;
    printf("FARM ADDED\n");
}

void viewAll() {
    for (int i = 0; i < islandCount; i++) {
        printf("ISLAND %s has %d farms:\n", islands[i].name, islands[i].farmCount);
        for (int j = 0; j < islands[i].farmCount; j++)
            printf("FARM %s %lld\n", islands[i].farms[j].name, islands[i].farms[j].rate);
    }
}

int main() {
    char cmd[17], name[MAX_NAME], farmName[MAX_NAME], islandName[MAX_NAME];
    long long x, z;
    long rate;

    while (scanf("%s", cmd) != EOF) {
        if (strcmp(cmd, "ADD_ISLAND") == 0) {
            scanf("%s %lld %lld", name, &x, &z);
            addIsland(name, x, z);
        }
        else if (strcmp(cmd, "ADD_FARM") == 0) {
            scanf("%s %s %lld", farmName, islandName, &rate);
            addFarm(farmName, islandName, rate);
        }
        else if (strcmp(cmd, "VIEW_ALL") == 0) viewAll();
        else {
            printf("INVALID COMMAND, BYE!\n");
            break;
        }
    }
    return 0;
}