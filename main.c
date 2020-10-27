#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "night.h"

int main() {
    srand(time(NULL));

    struct mob *bob = new_mob("Bob", "dinosaur", rand() % 100);
    struct mob *george = new_mob("George", "sturgeon", rand() % 100);
    struct mob *victer = new_mob("Victer", "person", rand() % 100 - 3);

    printf("First mob 'bob': ");
    reveal_mob(bob);
    
    change_mob(bob, "Bab", "chicken", rand() % 100 / 2);

    printf("Evolving  'bob': ");
    reveal_mob(bob);

    printf("\nMor Tests: \n");
    reveal_mob(george);
    reveal_mob(victer);

    free(bob);
    free(george);
    free(victer);
    
    return 0;
}