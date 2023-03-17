#include <stdio.h>

int grenal();

int main() {
    int s, gre = 0, quem, vi = 0, vg = 0, em = 0;
    do{
        quem = grenal();
        if(quem == 'i'){
            vi++;
        }
        if(quem == 'g'){
            vg++;
        }
        if(quem == 'e'){
            em++;
        }
        gre++;
        do{
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &s);
            if(s == 1){
                quem = grenal();
                if(quem == 'i'){
                    vi++;
                }
                if(quem == 'g'){
                    vg++;
                }
                if(quem == 'e'){
                    em++;
                }
                gre++;
            }
        }
        while(s != 2);
    }
    while(s != 2);
    printf("%d grenais\n", gre);
    printf("Inter:%d\n", vi);
    printf("Gremio:%d\n", vg);
    printf("Empates:%d\n", em);
    if(vi > vg){
        printf("Inter venceu mais\n");
    }
    else if(vg > vi){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Nao houve vencedor\n");
    }
}

int grenal() {
    int i, g;
    char f;
    scanf("%d %d", &i, &g);
    if(i > g){
        f = 'i';
    }
    if(g > i){
        f = 'g';
    }
    if(i == g){
        f = 'e';
    }
    return(f);
}