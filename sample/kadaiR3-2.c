#include <stdio.h>
#include <string.h>

typedef struct word {
    char id[16];
    char def[256];
    struct word *next;
} Word;

void print_word (Word *p);
Word *add_word (char id[], char def[], Word *head);

int main(){
  Word *head = NULL;

  char new_id[16] = "apple";
  char new_def[256] = "fruit with red or yellow or green skin";
  
  head = add_word(new_id, new_def, head);

  print_word(head);

  return 0;  
}

void print_word (Word *p){
  /* ここにコードを書く */ 
}

Word *add_word(char id[], char def[], Word *head){
  /* ここにコードを書く */ 
}