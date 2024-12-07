#include <stdio.h>

int main() {
    int T;

    scanf("%d", &T);

    for (int i = 0; i < T; i++){
        int N, E;
        scanf("%d", &N);

        int nSlime[N], counter = N;
        for (int j = 0; j < N; j++){
            scanf("%d", &nSlime[j]);
        }

        scanf("%d", &E);

        for(int j = 0; j < N; j++){

            int min = 501, idxMin = -1;

            for(int i = 0; i < N; i++){
                if(min > nSlime[i] && nSlime[i] != -1){
                    min = nSlime[i];
                    idxMin = i;
                }
            }
            if (E >= min && nSlime[idxMin] != -1){
                E -= min;
                nSlime[idxMin] = -1;
                counter--;
            }
            else if (counter == 0){
                break;
            }

        }

        if(counter <= 0){
            printf("Cih, %d slime doang gaakan bisa ngapa ngapain gweh!\n", N);
        }
        else if(counter > 0){
            printf("Kaburlah Furina! akan kuhadapi %d Slime terakhir dengan cara lain!\n", counter);
        }
    }

    return 0;
}
