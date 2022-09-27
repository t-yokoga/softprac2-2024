#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 16

typedef struct {
  char carrier[8];
  char from[8];
  char to[8];
  int num;
  int d_hour;
  int d_min;
  int a_hour;
  int a_min;
} FLIGHT;

void split_time (char *time_str, int *hour, int *min);
int read_airline (char filename[], FLIGHT airline[]);

int main(int argc, char *argv[]){
    FLIGHT airline[MAX];

    read_airline(argv[1], airline);
    printf("carrier : %s\n", airline[0].carrier);
    printf("from    : %s\n", airline[0].from);
    printf("to      : %s\n", airline[0].to);
    printf("num     : %d\n", airline[0].num);
    printf("d_hour  : %02d\n", airline[0].d_hour);
    printf("d_min   : %02d\n", airline[0].d_min);
    printf("a_hour  : %02d\n", airline[0].a_hour);
    printf("a_min   : %02d\n", airline[0].a_min);
    
    return 0;
}

void split_time (char *time_str, int *hour, int *min){
  /* ここにコードを書く */    
}

int read_airline (char filename[], FLIGHT airline[]){
  /* ここにコードを書く */
}
