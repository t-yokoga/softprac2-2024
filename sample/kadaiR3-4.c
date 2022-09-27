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
Word *add_new_word (char id[], char def[], Word *head);

int main(){
  int i;
  Word *head = NULL, *temp;
  char new_id[3][16], new_def[3][256];

  strcpy(new_id[0], "apple");
  strcpy(new_def[0], "fruit with red or yellow or green skin");
  strcpy(new_id[1], "orange");
  strcpy(new_def[1], "round yellow to orange fruit of any of several citrus trees");
  strcpy(new_id[2], "orange");
  strcpy(new_def[2], "any of a range of colors between red and yellow");

  for (i = 0; i < 3; i++){
    head = add_new_word(new_id[i], new_def[i], head);
  }

  print_word(search_word("orange" , head));

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

Word *add_new_word (char id[], char def[], Word *head){
  /* ここにコードを書く */ 