#include "night.h"
#include <stdlib.h>

int main() {
    struct mob *bob = new_mob("Bob", "dinosaur", 4);
    struct mob *george = new_mob("George", "sturgeon", 37);
    struct mob *victer = new_mob("Victer", "person", 100);

    reveal_mob(bob);
    reveal_mob(george);
    reveal_mob(victer);

    free(bob);
    free(george);
    free(victer);
    
    return 0;
}