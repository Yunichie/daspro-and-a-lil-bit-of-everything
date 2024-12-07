#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isStrong=true;

// MULAI NGODING DARI SINI
// YOUR CODE STARTS HERE

bool isStrong2=true;
bool isStrong3=true;
bool isStrong4=true;

int CheckNumber(char* pw) {
    for (int i = 0; i < strlen(pw); i++) {
        if (pw[i] >= '0' && pw[i] <= '9') {
            isStrong2=true;
            return 1;
        }
    }
    isStrong2=false;
    return 0;
}

int CheckUppercase(char* pw) {
    for (int i = 0; i < strlen(pw); i++) {
        if (pw[i] >= 'A' && pw[i] <= 'Z') {
            isStrong3=true;
            return 1;
        }
    }
    isStrong3=false;
    return 0;
}

int CheckKey(char* pw, int key) {
    int sum = 0;
    for (int i = 0; i < strlen(pw); i++) {
        if (pw[i] >= '0' && pw[i] <= '9') {
            sum += pw[i] - '0';
        }
    }

    if (sum == key) {
        isStrong4=true;
    } else {
        isStrong4=false;
    }

    if (isStrong2 == true && isStrong3 == true && isStrong4 == true) {
        isStrong=true;
    } else {
        isStrong=false;
    }

    if (sum == key) {
        return 1;
    }
    return 0;
}

// NGODING SAMPE SINI, mengedit kode di bawah adalah tindakan ilegal
// YOUR CODE ENDS HERE, editing codes below is illegal

int main(){
    char password[128];
    int key;
    scanf("%s %d",password, &key);
    if(!CheckNumber(password))printf("Password needs number\n");
    if(!CheckUppercase(password))printf("Password requires at least one uppercase letter\n");
    if(!CheckKey(password, key))printf("Digits in password not equal to key\n");
    if(isStrong)printf("Password is strong, just like you\n");
    else printf("Weak password, fix your mistakes\n");
}