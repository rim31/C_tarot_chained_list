#ifndef CREATLIST_H
#define CREATLIST_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct  s_list {
  size_t        nb;
  char          *str;
  struct s_list *next;
}               t_list;


t_list          *creation(size_t nb, char *str);
void            printlist(t_list *liste);
void            pushfront(t_list **malist, size_t nb, char *str);
void            pushback(t_list **malist, size_t nb, char *str);
t_list          *cut(t_list *liste, char *str);
// t_list          *ft_del_elem(t_list *li);







#endif