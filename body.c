#include <stdio.h>
int main(){
    int r,c;
    char w,name1[100],name2[100];
    printf("enter the name of first player : ");
    scanf("%c",&name1);
    printf("enter the name of second player : ");
    scanf("%c",&name2);
    int flag = 1;
    int player = 1;
    int gameflag = 0;
    while (flag):
        gameflag = 0;
        for (int i = 0;i<3 ; i++){
            for (int j = 0 ; j<3 ;j++){
                if (' '==tk[i][j]){
                    gameflag == 1;
                    break;
                }
            }
        }
    
    
        if (gameflag){
            if (player == 1){
                print("\n %s TURN ",name1);
                printf("Enter the row in which to put O : ");
                scanf("%d",&r);
                printf("Enter the coulomn in which to put O :");
                player = player+1;
            }
            elif (player == 2){
                printf("\n %d TURN ",name2);
                printf("Enter the row in which to put X : ");
                scanf("%d",&r);
                printf("Enter the coulomn in which to put X :");
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
            elif (tk[1][0]==tk[1][1] && tk[1][1]==tk[1][2] && tk[1][2]!=' '){
                flag = 0;
                w = tk[1][0];
            }
            elif (tk[0][1]==tk[1][1] && tk[1][1]==tk[2][1] && tk[2][1]!=' ' ){
                flag = 0;
                w = tk[0][1];
            }
            elif (tk[2][0]==tk[2][1] && tk[2][1]==tk[2][2] && tk[2][2]!=' '){
                flag = 0;
                w = tk[2][0];
            }
            elif (tk[0][2]==tk[1][2] && tk[1][2]==tk[2][2] && tk[2][2]!=' '){
                flag = 0;
                w = tk[0][2];
            }
            elif (tk[0][0]==tk[1][1] && tk[1][1]==tk[2][2] && tk[2][2]!=' '){
                flag= 0;
                w = tk[0][0];
            }
            elif (tk[0][2]==tk[1][1] && tk[2][0]==tk[1][1] && tk[1][1]!=' '){
                flag = 0;
                w = tk[0][2];
            }
        }
        else{
            w = 'd';
            flag = 0;
        }
        
    return 0;
}
