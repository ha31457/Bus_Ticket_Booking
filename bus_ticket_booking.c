#include <stdio.h>

char status[5][4];
int y = 1;
void display(){
    for(int i = 0; i<5; i++){
        printf("%d", y);
        y += 1;
        for(int j=0; j<4; j++){
            if(j == 2){
                printf("\t");
            }
            printf("[%c] ",status[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n = 20;
    for(int i = 0; i< 5; i++){
        for(int j = 0; j<4;j++){
            status[i][j] = ' ';
        }
    }
    int row , col;
    char yesNo;
    display();
    reBooking:
        printf("enter the number of seat which you want (1-45) : ");
        scanf("%d %d", &row , &col);

    printf("your selected seat row is %d and seat column is %d . Please confirm (y/n) ", row, col);
    fflush(stdin);
    scanf("%c", &yesNo);

    if(yesNo == 'y'){
        printf("processing ...");
        if(status[row][col] == ' '){
            status[row][col] = 'B';
        }
        else{
            printf("the seat is already booked please select different seat ....");
            goto reBooking;
        }
        printf("\n");
        display();
    }
    else{
        goto reBooking;
    }

}