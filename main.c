#include <stdio.h>
void tktk(char tk[][3]){
    printf("c→ 1   2   3\n");
    printf("r\n");
    for(int i = 0 ; i<3 ; i++){
        if (i ==0){
            printf("↓    |   |\n");
        }
        else{
            printf("     |   |\n");
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
            printf("  ___|___|___\n");
        }
        else if (i==2){
            printf("     |   |\n");
        }
    }
    }
int main(){
    char tk[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    int r,c;
    char w,name1[100],name2[100];
    printf("enter the name of first player :- ");
    scanf("%s",&name1);
    printf("enter the name of second player :- ");
    scanf("%s",&name2);
    int flag = 1;
    int player = 1;
    int gameflag = 0;
    while (flag){
        gameflag = 0;
        for (int i = 0;i<3 ; i++){
            for (int j = 0 ; j<3 ;j++){
                //printf("i = %d j = %d \n",i,j);
                if (tk[i][j]==' '){
                    gameflag = 1;
                    break;
                }
            }
            if (gameflag){
                break;
            }
        }
        if (gameflag){
            if (player == 1){
                printf("\n %s TURN \n",name1);
                printf("Enter the row in which to put O : ");
                scanf("%d",&r);
                printf("Enter the coulomn in which to put O :");
                scanf("%d",&c);
                player = player+1;
            }
            else if (player == 2){
                printf("\n %s TURN \n",name2);
                printf("Enter the row in which to put X : ");
                scanf("%d",&r);
                printf("Enter the coulomn in which to put X :");
                scanf("%d",&c);
                player = player-1;
            }
            
            if (player==2){
                if (tk[r-1][c-1] == ' '){
                    tk[r-1][c-1]='O';
                }
                else{
                    player = player - 1;
                }
            }
            if (player==1){
                if (tk[r-1][c-1] ==' '){
                    tk[r-1][c-1]='X';
                }
                else{
                    player = player +1;
                }
            }
                            
                            
            tktk(tk);
            if (tk[0][0]==tk[0][1] && tk[0][1]==tk[0][2] && tk[0][2]!=' '){
                flag = 0;
                w = tk[0][0];
            }
            else if (tk[0][0]==tk[1][0] && tk[1][0]==tk[2][0] && tk[2][0]!=' '){
                flag = 0;
                w = tk[0][0];
            }
            else if (tk[1][0]==tk[1][1] && tk[1][1]==tk[1][2] && tk[1][2]!=' '){
                flag = 0;
                w = tk[1][0];
            }
            else if (tk[0][1]==tk[1][1] && tk[1][1]==tk[2][1] && tk[2][1]!=' '){
                flag = 0;
                w = tk[0][1];
            }
            else if (tk[2][0]==tk[2][1] && tk[2][1]==tk[2][2] && tk[2][2]!=' '){
                flag = 0;
                w = tk[2][0];
            }
            else if (tk[0][2]==tk[1][2] && tk[1][2]==tk[2][2] && tk[2][2]!=' '){
                flag = 0;
                w = tk[0][2];
            }
            else if (tk[0][0]==tk[1][1] && tk[1][1]==tk[2][2] && tk[2][2]!=' '){
                flag= 0;
                w = tk[0][0];
            }
            else if (tk[0][2]==tk[1][1] && tk[2][0]==tk[1][1] && tk[1][1]!=' '){
                flag = 0;
                w = tk[0][2];
            }
        }
        else{
            w = 'd';
            flag = 0;
        }
    }
    
    if (w=='O'){
        printf("\n %s WINS !!!",name1);
    }
    else if (w=='X'){
        printf("\n %s WINS !!!",name2);
    }
    
    else if (w == 'd'){
        printf("ITS A DRAW !!!");
    }
        
    return 0;
}
