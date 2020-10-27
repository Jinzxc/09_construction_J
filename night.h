struct mob {
    char name[20];
    char species[20];
    int level;
};

struct mob *new_mob(char *nm, char *sp, int lvl);
void reveal_mob(struct mob *mb);