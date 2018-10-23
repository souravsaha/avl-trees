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
        print_tree(&t, t.root, 0);
        getchar();
    }

    return 0;
}
