#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "night.h"

struct mob *new_mob(char *nm, char *sp, int lvl) {
    struct mob *mb = malloc(sizeof(struct mob));

    strncpy(mb->name, nm, sizeof(mb->name) - 1);
    strncpy(mb->species, sp, sizeof(mb->species) - 1);
    mb->level = lvl;

    return mb;
}

void reveal_mob(struct mob *mb) {
    printf("%s, a level %d %s has been created.\n", mb->name, mb->level, mb->species);
}