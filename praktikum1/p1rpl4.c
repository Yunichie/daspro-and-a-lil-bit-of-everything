#include <stdio.h>

// kedua fungsi di bawah digunakan untuk
// menentukan posisi penjahat mana yang lebih besar
long long min(long long a, long long b) {
    return (a < b) ? a : b;
}

long long max(long long a, long long b) {
    return (a > b) ? a : b;
}

int main()
{
    long long N, X, Vx, P1, Vp1, P2, Vp2;

    scanf("%lld %lld %lld %lld %lld %lld %lld", &N, &X, &Vx, &P1, &Vp1, &P2, &Vp2);

    long long left_criminal = (P1 < P2) ? P1 : P2; // posisi penjahat yang lebih kecil berada di sebelah kiri
    long long right_criminal = (P1 > P2) ? P1 : P2; // posisi penjahat yang lebih besar berada di sebelah kanan
    long long left_speed = (P1 < P2) ? Vp1 : Vp2;
    long long right_speed = (P1 < P2) ? Vp2 : Vp1;

    // jika pemain berada di sebelah kiri penjahat
    // mengapa sebelah kiri?
    // karena posisi pemain dibandingkan dengan posisi penjahat terkecil
    if (X <= left_criminal)
    {
        // jika posisi pemain dikurangi dengan kecepatan pemain
        // hasilnya 0 atau kurang dari 0, maka pemain bebas
        // (pemain lolos dari gua dalam giliran pertama)
        if (X - Vx <= 0)
        {
            printf("bebas\n");
        }
        // tetapi, jika dalam giliran pertama pemain tidak langsung lolos
        // dan penjahat lebih cepat daripada pemain
        // maka, pemain tertangkap
        else if (left_criminal - left_speed <= X - Vx)
        {
            printf("tertangkap\n");
        }
        // percabangan ini merupakan percabangan
        // apabila dua kasus di atas tidak terpenuhi
        // yaitu apabila penjahat tidak lebih cepat dari pemain
        else
        {
            printf("bebas\n");
        }
    }
    // jika pemain berada di sebelah kanan penjahat
    else if (X >= right_criminal)
    {
        // jika posisi pemain ditambah kecepatan pemain
        // lebih dari panjang gua
        // maka, pemain bebas dalam giliran pertama
        if (X + Vx > N)
        {
            printf("bebas\n");
        }
        // jika pemain tidak bebas dalam giliran pertama
        // dan penjahat lebih cepat dari pemain
        // maka, pemain tertangkap
        else if (right_criminal + right_speed >= X + Vx)
        {
            printf("tertangkap\n");
        }
        // percabangan ini merupakan percabangan
        // apabila dua kasus di atas tidak terpenuhi
        // yaitu apabila penjahat tidak lebih cepat dari pemain
        else
        {
            printf("bebas\n");
        }
    }
    // percabangan ini merupakan percabangan
    // apabila penjahat tidak berada
    // di sebelah kiri maupun kanan pemain
    // tetapi berada di sebelah kanan DAN kiri pemain
    else
    {
        printf("tertangkap\n");
    }

    return 0;
}