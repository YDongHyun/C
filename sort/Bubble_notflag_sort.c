#include <stdio.h>

main() {
    int ken[] = {3,5,9,7,1};
    int i, cnt;
    cnt = sizeof(ken) / sizeof(int);
    bubble_a_sort(ken, cnt);

    for (i = 0; i < cnt; i++)
        printf("%3d", ken[i]);
  
}

bubble_a_sort(data, n) 
int data[], n;
 {
   int i, k, tmp, j;
   n = n - 1;
   for (i = 0; i < n; i++) {
      for (k = 0; k < n - i; k++) {
         if (data[k] > data[k + 1]) {
            tmp = data[k];
            data[k] = data[k + 1];
            data[k + 1] = tmp;
                }
            }
        }
  }
