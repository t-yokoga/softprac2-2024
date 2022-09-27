#include <stdio.h>
#include <string.h>

typedef struct word {
    char id[16];
    char def[256];
    struct word *next;
} Word;

void print_word (Word *p);
Word *add_word (char id[], char def[], Word *head);
Word *search_word (char key[], Word *head);

int main(){
  Word *head = NULL, *target;
  char new_id[2][16], new_def[2][256];

  strcpy(new_id[0], "apple");
  strcpy(new_def[0], "fruit with red or yellow or green skin");
  strcpy(new_id[1], "orange");
  strcpy(new_def[1], "round yellow to orange fruit of any of several citrus trees");
  
  head = add_word(new_id[0], new_def[0], head);
  head = add_word(new_id[1], new_def[1], head);

  target = search_word("orange", head);
  print_word(target);

  return 0;  
}

void print_word (Word *p){
  /* ここにコードを書く */ 
}

Word *add_word (char id[], char def[], Word *head){
  /* ここにコードを書く */ 
}

Word *search_word (char key[], Word *head){
  /* ここにコードを書く */ 
}