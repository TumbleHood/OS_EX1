#include <stdio.h>

#define TRUE 1
#define FALSE 0

int compare(FILE *f1, FILE *f2){

    char c1 = 0, c2 = 0;
    c1 = getc(f1);
    c2 = getc(f2);

    while (c1 != EOF && c2 != EOF){
        if (c1 != c2){
            return FALSE;
        }
        c1 = getc(f1);
        c2 = getc(f2);
    }

    if (c1 != c2){
        return FALSE;
    }

    return TRUE;
}

int main(int argc, const char **argv){

    if (argc != 3){
        printf("Usage : cmp <file1> <file2>\n");
        return 1;
    }

    FILE *f1 = NULL, *f2 = NULL;
    f1 = fopen(argv[1], "r");
    f2 = fopen(argv[2], "r");

    if (f1 == NULL || f2 == NULL || argc != 3){
        printf("Usage : cmp <file1> <file2>\n");
        return 1;
    }

    compare(f1, f2) ? printf("Identical\n") : printf("Not identical\n");

    return 0;
}