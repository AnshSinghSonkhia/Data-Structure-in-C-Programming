#include <stdio.h>
#define max 5

int main() {
  
  int myNumbers[max] = {25, 50, 75, 100};
  int pos = 2;
  int item = 99;

  for(int i = 0; i<=3; i++){
    printf("%d \n", myNumbers[i]);
  }
  
  for(int i = 4; i>= pos; i--){
    myNumbers[i] = myNumbers[i-1];
  }
  
  printf("new \n");
  myNumbers[pos] = item;
  
  for(int i = 0; i<=4; i++){
    printf("%d \n", myNumbers[i]);
  }
 
  return 0;
}