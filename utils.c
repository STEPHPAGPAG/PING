//Fonctions d'aide

void print_usage(char *name_prog){
    printf("Usage: %s <destination>\n", name_prog);
    printf("Try %s -? (for help)\n", name_prog);
    //printf("Exemple: %s google.com\n", name_prog);
}

void print_help(char *name_prog){
    printf("ft_ping help\n");
    printf("Usage: %s destination\n", name_prog);
    printf("Options: -v (verbose), -? (help)\n");
}