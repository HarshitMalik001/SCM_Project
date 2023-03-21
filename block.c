#include <stdio.h>
void tktk(char tk[][3]){
    printf("c→ 1   2   3 \n");
    printf("r\n");
    for(int i = 0 ; i<3 ; i++){
        if (i ==0){
            printf("↓    |   |    \n");
        }
        else{
            printf("     |   |    \n");
        }
        for (int j = 0 ; j< 3 ; j++){
            if(j==0){
                printf("%d  ",i+1);
                printf("%c |",tk[i][j]);
            }
            else if(j == 1){
                printf(" %c |",tk[i][j]);
            }
            else if (j==2){
                printf(" %c\n",tk[i][j]);
            }
        }
        if (i != 2){
            printf("  ___|___|___ \n");
        }
        else if (i==2){
            printf("     |   |    \n");
        }
    }
    }

int main() {
    char tk[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    tktk(tk);
}
