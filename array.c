#include <stdio.h>
int main(){
int arr[5] = { 10, 20, 30, 40, 50 };
arr[2] = 100;
printf("Elements in Array:\t" );
for (int i = 0; i < 5; i++) {
printf("%d\t", arr[i]);
}
return 0;
}
