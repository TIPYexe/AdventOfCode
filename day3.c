#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fin;

int main() {

    fin = fopen("input.txt", "r");

    int nr=0;
    int right=1, down=2;
    int j;
    j=right;
    char rand[33];
    fscanf(fin,"%s ", rand);
    while(!feof(fin)){
        for(int i=0; i<down; i++) //cobor cate randuri trebuie sa sar
            fscanf(fin,"%s ", rand);
        if(rand[j] == '#')
            nr++;
        j+=right;

        j%=strlen(rand);
    }

    printf("%d", nr);
    fclose(fin);

}
