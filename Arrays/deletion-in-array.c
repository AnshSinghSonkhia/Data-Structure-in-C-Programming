#include <stdio.h>
#define max 5

int main() {
  
  int myNumbers[max] = {25, 50, 75, 100};
  //myNumbers[0] = 33;
  int pos = 2;
  
  int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
 
  printf("The length of the array is: %d\n", length);

  printf("Original array:\n");
  for(int i = 0; i < length; i++){
    printf("%d \n", myNumbers[i]);
  }
  
  // Deleting element at position 'pos'
  if (pos >= 0 && pos < length) {
    for(int i = pos; i < length - 1; i++){
      myNumbers[i] = myNumbers[i+1];
    }
    length--; // Decrease the length of the array after deletion
    printf("Array after deletion:\n");
    for(int i = 0; i < length; i++){
      printf("%d \n", myNumbers[i]);
    }
  } else {
    printf("Invalid position for deletion.\n");
  }
 
  return 0;
}
