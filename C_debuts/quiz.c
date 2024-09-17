#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct cell {
   int val;
   struct cell *suiv;
};
typedef struct cell *fifo_lc;

struct s_fifo {
   struct cell *first;
   struct cell *last;
};
typedef struct s_fifo fifo;

int is_empty(fifo xs) {
  return (xs.first == NULL && xs.last == NULL);
}

void print_fifo(fifo xs){
  struct cell *c = xs.first;
  printf("[");
  while (c != NULL) {
     printf("(%d)", c->val);
     c = c->suiv;
  }
    printf("]\n");
} 

int peek(fifo xs){
  return xs.first->val;
}
int peekd(fifo xs){
  assert(!is_empty(xs));
  return xs.first->val;
}

void addq(int x, fifo *xs){
   struct cell *c = malloc(sizeof(struct cell));
   c->val = x;
   c->suiv = NULL;
   if (is_empty(*xs)){
      xs->first = c;
      xs->last = c;
   }
   else {
       xs->last->suiv = c;
       xs->last = c;
   }
}

void popq(fifo *xs){
   if (!is_empty(*xs)){
      struct cell *d = xs->first;
      xs->first = xs->first->suiv;
      free(d);
      if (xs->first == NULL)
        xs->last = NULL;
   }
}

int take(fifo *xs){
   struct cell *d = xs->first;
   int r = xs->first->val;
   xs->first = xs->first->suiv;
   if (xs->first == NULL) xs->last = NULL;
   free(d);
   return r;
}

fifo add(int x, fifo xs) {
  struct cell *c = malloc(sizeof(struct cell));
  c->val = x;
  c->suiv = NULL;
  if (is_empty(xs)) { // Le cas particulier
    xs.first = c;
    xs.last = c;
  }
  else {
    xs.last->suiv = c;
    xs.last = c;
  }
  return xs;
};

fifo pop(fifo xs) {
  if (!is_empty(xs)) {
    xs.first = xs.first->suiv;
    if (xs.first == NULL) // Le cas particulier
      xs.last = NULL;
    }
  return xs;
}

fifo_lc add_lc(int x, fifo_lc xs){
  fifo_lc r = malloc(sizeof(struct cell));
  r->val = x;
  if (xs == NULL) 
    r->suiv = r;
  else {
     r->suiv = xs->suiv;
     xs->suiv = r;
  }
  return r;
}

fifo_lc pop_lc(fifo_lc xs){
   struct cell *tmp;
   if (xs == NULL)
      return NULL;
   else 
      if (xs->suiv == xs)
         return NULL;
   else {
      tmp = xs->suiv;
      xs->suiv = xs->suiv->suiv;
      free(tmp);
      return xs;
   }
}

fifo_lc f(int a, int b, fifo_lc xs){
    struct cell *tmp;
    fifo_lc c1 = malloc(sizeof(struct cell));
    c1->val = a;
    c1->suiv = NULL;
    fifo_lc c2 = malloc(sizeof(struct cell));
    c2->val = b;
    c2->suiv = NULL;
    if (xs == NULL){
        xs = c1;
        xs->suiv = c2;
        xs->suiv->suiv = xs;
        return xs;
    }
    tmp = xs->suiv;
    xs->suiv = c1;
    c1->suiv = tmp;
    xs = c1;
    tmp = xs->suiv;
    xs->suiv = c2;
    c2->suiv = tmp;
    return xs;
} 

int main(){
   fifo ma_file;
   ma_file.first = NULL;
   ma_file.last = NULL;
   ma_file = add(7, ma_file);
   addq(8, &ma_file);
   ma_file = add(9, ma_file);
   ma_file = add(12, ma_file);
   addq(4, &ma_file);
   ma_file = pop(ma_file);
   popq(&ma_file);
   fifo_lc ma_file1 = ma_file.last; 
   ma_file1->suiv = ma_file.first; 
   ma_file1 = add_lc(1, ma_file1);
   ma_file1 = add_lc(11, ma_file1);
   struct cell *ptr = ma_file1->suiv;
   printf("%d\t", ptr->val);
   printf("\n");
   return 0;
}