#include "common.h"
#include "avl.h"


int main(int ac, char *av[])
{
    int i;
    TREE t;

    init_tree(&t);
    for (i = 1; i < ac; i++) {
        printf("Inserting %d\n", atoi(av[i]));
        if (FAILURE == insert(&t, -1, &(t.root), atoi(av[i])))
            return FAILURE;
<<<<<<< HEAD
        fprintf(stderr, "\\begin{sideways}\n");
        print_pstree(&t, t.root);
        fprintf(stderr, "\\end{sideways}\n\\newpage\n");
=======
        print_pstree(&t, t.root);
>>>>>>> f429740eb7aa9a68978e15566bbd98df5a205749
    }

    return 0;
}
