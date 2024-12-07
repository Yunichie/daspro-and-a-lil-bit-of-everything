#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))

void arr_random(int arr[], int n) {
    int counter = 0;
    srand(time(NULL) + counter);
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
        counter++;
    }
}

void merge(int arr[], int l, int r, int e, int sort[]) {
    // i = Start dari sub array pertama (left)
    // j = Start dari sub array kedua (right)
    int i = l, j = r;
    // O(e sampai l) = O(n)
    for (int k = l; k < e; k++) {
        // Pilih elemen yang lebih kecil dari sub array pertama, apabila:
        // 1. Sub array pertama masih memiliki elemen (i < r), dan
        // 2. Sub array kedua habis (j >= e) atau elemen yang ditunjuk saat ini
        // di sub array pertama sama dengan atau lebih kecil (arr[i] <= arr[j])
        if (i < r && (j >= e || arr[i] <= arr[j])) {
            sort[k] = arr[i++]; // merge ke temp array
        } else {
            sort[k] = arr[j++]; // merge ke temp array
        }
    }
}

void copy_arr(int sort[], int arr[], int n) {
    // O(n)
    // Copy working array (sort) ke array asli (arr)
    for (int i = 0; i < n; i++) {
        arr[i] = sort[i];
    }
}

/*
 * Cara kerja algoritma:
 * 1. Mulai dari sub array ukuran 1.
 * 2. Merge dengan sub array di sebelahnya -> di dalam merge(), elemen diurutkan.
 * 3. Begitu seterusnya hingga size = 2, 4, 8, ..., n
 *
 * Time complexity:
 * Outer loop: for (int i = 1; i < n; i *= 2) {}
 * Dieksekusi log2(n) kali -> (1, 2, 4, 8, ..., n)
 * Karena increment i adalah 2i
 *
 * Inner loop: for (int j = 0; j < n; j += 2 * i) {}
 * Untuk setiap `i`, memproses n/(2i) pasangan (j)
 * Setiap pasangan (j), memproses 2i elemen
 * Maka: (n/(2i)) * 2i = n (inner loop dieksekusi outer loop kali)
 *
 * Total time complexity:
 * O(n) * O(log2(n)) = O(n log2 n)
 */
void merge_sort(int arr[], int sort[], int n) {
    // i = ukuran sub array yang di-merge saat ini
    for (int i = 1; i < n; i *= 2) {
        // j = index awal setiap pasangan subarray yang akan di-merge
        for (int j = 0; j < n; j += 2 * i) {
             merge(arr, j, min(j+i, n), min(j+2*i, n), sort);
        }
        // Copy array dari working array ke original array
        copy_arr(sort, arr, n);
    }
}

void print_arr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[20];
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    arr_random(arr, arr_len);
    int sort[arr_len]; // temporary array untuk operasi merge

    printf("Before sorting:\n");
    print_arr(arr, arr_len);
    merge_sort(arr, sort, arr_len);
    printf("After sorting:\n");
    print_arr(arr, arr_len);
}