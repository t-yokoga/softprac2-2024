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
int search_flight (FLIGHT airline[], int n, int hour, int min);
void print_flight (FLIGHT flight);

int main(int argc, char *argv[]){
  FLIGHT airline[MAX];
  int i, n;

  n = read_airline(argv[1], airline);
  i = search_flight(airline, n, 10, 30);
  print_flight(airline[i]);

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

int search_flight (FLIGHT airline[], int n, int hour, int min){
  /* ここにコードを書く */
 }

void print_flight (FLIGHT flight){
   /* ここにコードを書く */
}