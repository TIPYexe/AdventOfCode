#include <stdio.h>
#include <string.h>

FILE *fin;

int main() {

    fin = fopen("F:\\OJI\\cppreference\\AdventOfCode_C\\input.txt", "r");

    int nr_1=0, nr_2=0;
    int a=0, b=0;
    char lit;
    char sir[200];

    while(!feof(fin)){
        fscanf(fin,"%d-%d %c: %s", &a, &b, &lit, sir);

        // cerinta 1
        int counter=0;
        for(int i=0; i<strlen(sir); i++)
            if(sir[i] == lit)
                counter++;
        if(counter >= a && counter <= b)
            nr_1++;

        // cerinta 2
        while(!feof(fin)){
            fscanf(fin,"%d-%d %c: %s", &a, &b, &lit, sir);

            if(sir[a-1] == lit ^ sir[b-1] == lit)
                nr_2++;
        }
    }

    printf("%d %d", nr_1, nr_2);
    fclose(fin);
}
