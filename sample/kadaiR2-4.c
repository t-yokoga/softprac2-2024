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
void print_flight_row (FLIGHT flight);
void print_airline(FLIGHT airline[], int n);

int main(int argc, char *argv[]){
  FLIGHT airline[MAX];
  int n;

  n = read_airline(argv[1], airline);
  print_airline(airline, n);

  return 0;
}

void split_time (char *time_str, int *hour, int *min){
  /* ここにコードを書く */    
}

int read_airline (char filename[], FLIGHT airline[]){
  /* ここにコードを書く */
}

void print_flight_row (FLIGHT flight) {
  /* ここにコードを書く */
}

void print_airline(FLIGHT airline[], int n) {
  /* ここにコードを書く */
}
