#include <stdio.h>

void split_time (char *time_str, int *hour, int *min);

int main(){
  char time_str[8] = "7:10";
  int hour, min;
  
  split_time(time_str, &hour, &min);
  printf("time = %02d:%02d\n", hour, min);

  return 0;
}

void split_time (char *time_str, int *hour, int *min){
  /* ここにコードを書く */    
}
