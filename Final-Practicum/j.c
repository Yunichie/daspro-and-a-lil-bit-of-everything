#include <stdio.h>
#include <stdlib.h>

struct Input {
    int value;
    int x;
    int y;
};

int compare(const void* a, const void* b) {
    return ((struct Input*)a)->value - ((struct Input*)b)->value;
}

int binarySearch(struct Input arr[], int left, int right, int target, int* x, int* y) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid].value == target) {
            *x = arr[mid].x;
            *y = arr[mid].y;
            return 1;
        }
        if (arr[mid].value < target) left = mid + 1;
        else right = mid - 1;
    }
    return 0;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    struct Input* elements = malloc(x * y * sizeof(struct Input));
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            int value;
            scanf("%d", &value);
            
            elements[i * y + j].value = value;
            elements[i * y + j].x = i + 1;
            elements[i * y + j].y = j + 1;
        }
    }
    
    int target;
    scanf("%d", &target);

    qsort(elements, x * y, sizeof(struct Input), compare);

    int found_x, found_y, result = binarySearch(elements, 0, x * y - 1, target, &found_x, &found_y);

    if (result) printf("Element %d found at position: (%d, %d).\n", target, found_x, found_y);
    else printf("Element %d not found.\n", target);
}