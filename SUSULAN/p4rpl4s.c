#include<stdio.h>
#include<string.h>

void reverse(char *num) {
    int len = strlen(num);
    for(int i = 0; i < len/2; i++) {
        char temp = num[i];
        num[i] = num[len-1-i];
        num[len-1-i] = temp;
    }
}

void appendZero(char *num1, char *num2){
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    if(len1 > len2){
        for(int i = len2; i < len1; i++){
            *(num2 + i) = '0';
        }
        *(num2 + len1) = '\0';
    }else{
        for(int i = len1; i < len2; i++){
            *(num1 + i) = '0';
        }
        *(num1 + len2) = '\0';
    }
}

void add(char *num1, char *num2, char *result){
    int carry = 0, sum = 0;

    int len1 = strlen(num1);
    result[len1 + 1] = '\0';

    for(int i = len1 - 1; i >= 0; i--){
        sum = (num1[i] - '0') + (num2[i] - '0') + carry;
        result[i+1] = (sum % 10) + '0';
        carry = sum / 10;
    }

    result[0] = carry + '0';
}

int main(){
    char num1[50], num2[50], result[50];

    while(scanf(" %s %s", num1, num2) != EOF){

        appendZero(num1, num2);
        reverse(num1);
        reverse(num2);

        add(num1, num2, result);

        reverse(result);

        for(int i = strlen(result) - 1; i >= 0; i--){
            if(result[i] != '0'){
                break;
            } else {
                result[i] = '\0';
            }
        }

        int start = 0;
        for(int i = 0; i < strlen(result); i++){
            if(result[i] != '0'){
                start = i;
                break;
            }
        }

        for(int i = start; i < strlen(result); i++){
            printf("%c", result[i]);
        }
        printf("\n");
    }

    return 0;
}