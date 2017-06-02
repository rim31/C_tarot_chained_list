#include "creatList.h"

/*
** creation d'un nouveau maillon
*/
t_list *creation(size_t nb, char *str)
{
  t_list *new;

  // new = (t_list*)malloc(sizeof(t_list));
  if((new = (t_list*)malloc(sizeof(*new))) == NULL)
    return NULL;
  new->nb = nb;
  new->str = str;
  new->next = NULL;
  return (new);
}

/*
** fonction pour imprimer la liste chainee
*/
void printlist(t_list *liste)
{
  while(liste)
  {
    printf("%lu %s ", liste->nb, liste->str);
    liste = liste->next;
  }
}


/*
** fonction mettre un maillon a l'avant
**  le ** car on modifie la liste
*/
void pushfront(t_list **malist, size_t nb, char *str)
{
  t_list *copie;
  copie = creation(nb, str);
  //on fait pointer les ->next
  copie->next = *malist;
  //puis on fait pointer au debut
  *malist = copie;
}

/*
** fonction mettre un maillon a l'arriere
*/
void pushback(t_list **malist, size_t nb, char *str)
{
  t_list *copie;
  copie = *malist;
  while(copie->next)
  {
    copie = copie->next;
  }
  copie->next = creation(nb, str);
}


t_list          *ft_del_elem(t_list *li)
{
    t_list  *element;

    element = li->next;
    free(li);
    li = NULL;
    return (element);
}
/*
** suppresion du maillon et rereferencement du pointeur
** pas termine !!
*/
t_list     *cut(t_list *liste, char *str)
{
  t_list    *elem;
  t_list    *first;
  first = liste;
  while (liste)
  {
    if (strcmp(liste->str, str) == 0)
    {
      if (liste == first)
      {
        first = liste->next;
        free(liste);
        return(first);
      }
      else
      {
        elem->next = liste->next;
        free(liste);
        return(first);
      }
    }
    elem = liste;
    liste = liste->next;
  }
  return (first);
}

