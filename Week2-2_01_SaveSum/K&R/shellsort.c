#include <stdio.h>

void shellsort(int v[], int n) {
    int gap, i, j, temp;

    for(gap = n/2; gap > 0; gap /= 2) {
        for(i = gap; i < n; i++) {
            for(j = i - gap; j >= 0 && v[j]>v[j+gap]; j-= gap) {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            };
        }
    }
}

int main() {
    int i = 0;
    int n = 7;
    int s[20] = {2,33,13,421,4,12,312,2};
    shellsort(s, 8);
    while(i < n) {
        printf("%d\n", s[i]);
        i++;
    }
    printf("%ls\n", s);
    return 1;
}