#ifndef TAROT_H
#define TAROT_H

typedef struct s_card
{
  char *       str;
  int          nb;
  struct       s_card * next;
  struct       s_card * prev;
}              t_card;

typedef struct s_dlist
{
  t_card      *begin;
  t_card      *last;
}               t_dlist;
#endif