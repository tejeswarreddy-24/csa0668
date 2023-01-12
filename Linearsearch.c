#include <stdio.h>
int search(int arr[], int i, int val) {
  
  for (int y = 0; y < i; y++)
    if (arr[y] == val)
      return y;
  return -1;
}
int main() {
  int arr[] = {32, 54, 71, 89, 44};
  int val = 89;
  int i = sizeof(arr) / sizeof(arr[0]);

  int linear = search(arr, i, val);

  (linear == -1) ? printf("The Given Element Is Not Found At Any Index") : printf("The Given Element 89 Found At Index Of: %d", linear);
}
