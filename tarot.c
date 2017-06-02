#include "tarot.h"
#include <stdlib.h>
#include <stdio.h>

void melange()
{

}

void distrib()
{

}

void fill_push_back(t_dlist *list, char *av)
{
  t_card *new;

  if ((new = (t_card *)malloc(sizeof(t_card))) == NULL)
    exit(1);
  new->str = av;
  new->next = NULL;
  new->prev = list->last;
  if (list->last)
      list->last->next = new;
  else
    list->begin = new;
  list->last = new;
}

t_dlist* ft_init(int ac, char **av)
{
  t_dlist *new;
  int     i;

  i = 1;
  if ((new = (t_dlist *)malloc(sizeof(t_dlist))) == NULL)
    return (NULL);
  new->begin = NULL;
  new->last = NULL;
  while (i < ac)
  {
    fill_push_back(new, av[i]);
    i++;
  }
  return (new);
}


int main(int ac, char **av)
{
  t_dlist *list;

  list = ft_init(ac, av);
  while (list->begin)
  {
    printf("list->begin = %s\n", list->begin->str);
    list->begin = list->begin->next;
  }
  while (list->last)
  {
    printf("list->begin = %s\n", list->last->str);
    list->last = list->last->prev;
  }
  return 0;
}