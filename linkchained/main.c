#include "creatList.h"

static t_list          *ft_del_elem(t_list *li)
{
    t_list  *element;

    element = li->next;
    free(li);
    li = NULL;
    return (element);
}


int main(int argc, char **argv)
{
  //initialiation de la liste
  t_list *malist;
  t_list *elem;

  if (argc >= 2)
  {
    malist = creation(strlen(argv[1]), argv[1]);
    printlist(malist);
    printf("\n=========================\n");
    pushfront(&malist,strlen(argv[2]), argv[2]);
    printlist(malist);
    printf("\n=========================\n");
    pushback(&malist,strlen(argv[3]), argv[3]);
    printlist(malist);
    printf("\n=========================\n");
    elem = cut(malist, "C");
    printlist(elem);
  }
  return (0);
}