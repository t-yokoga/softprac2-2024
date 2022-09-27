#include <stdio.h>
#include <string.h>

typedef struct word {
    char id[16];
    char def[256];
    struct word *next;
} Word;

void print_word (Word *p);

int main(){
  Word w;

  strcpy(w.id, "apple");
  strcpy(w.def, "fruit with red or yellow or green skin");
  w.next = NULL;

  print_word(&w);

  return 0;  
}

void print_word (Word *p){
  /* ここにコードを書く */ 
}
