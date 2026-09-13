#include <stdio.h>

int main() {
    int number;
    int sum = 0;


do {
     printf("Enter a positive number:");
     scanf("%d",&number);

if (number > 0) {
    printf("Entered:%d\n", number);
    sum = sum + number;
}

} while (number > 0); 
  
 printf("\nTotal sum of positive numbers: %d\n", sum);

return 0;
}
