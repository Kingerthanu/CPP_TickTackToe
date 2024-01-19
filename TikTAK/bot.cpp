#include "bot.h"
#include <iostream>

bot::bot(MainWindow *parent)
{
    this->paren = parent;
    MyTurn();
}

void bot::MyTurn()
{
    std::cout << round << "\n";
    if(round == 0){
        int r = distX(rng);
        int c = distY(rng);
        while(this->paren->SPOTS[r][c]->player == 1 || this->paren->SPOTS[r][c]->player == -1){
            r = distX(rng);
            c = distY(rng);
        }
        this->paren->SPOTS[r][c]->setState(-1);
        round++;
        return;
    }
    else if(round == 4){
        for(int i = 0; i < 3; i++){
            for(int d = 0; d < 3; d++){
                if(this->paren->SPOTS[i][d]->player == 0){
                    this->paren->SPOTS[i][d]->player = -1;
                    round++;
                    return;
                }
            }
        }
    }
    int lTr = this->paren->SPOTS[0][0]->player +this->paren->SPOTS[1][1]->player +this->paren->SPOTS[2][2]->player;
    int rTl = this->paren->SPOTS[0][2]->player +this->paren->SPOTS[1][1]->player +this->paren->SPOTS[2][0]->player;
    int cm = 0;
    int rm = 0;
    int col = 0;
    int row = 0;
    for(int i = 0; i < 3; i++){
        if(!(this->paren->SPOTS[i][0]->player == 1 || this->paren->SPOTS[i][1]->player == 1 || this->paren->SPOTS[i][2]->player == 1)){
        if(this->paren->SPOTS[i][0]->player +this->paren->SPOTS[i][1]->player +this->paren->SPOTS[i][2]->player < rm){
            for(int d = 0; d < 3; d++){
                switch(this->paren->SPOTS[i][d]->player){
                    case 0:
                        rm--;
                        break;

                }
            }
            // ^ Adds points for empty spots | Below will add that with the already placed points
            rm += this->paren->SPOTS[i][0]->player +this->paren->SPOTS[i][1]->player +this->paren->SPOTS[i][2]->player;
            row = i;
        }}
        if(i == 0){
        for(int d = 0; d < 3; d++){
            if(!(this->paren->SPOTS[0][d]->player == 1 || this->paren->SPOTS[1][d]->player == 1 || this->paren->SPOTS[2][d]->player == 1)){
                if(this->paren->SPOTS[0][d]->player +this->paren->SPOTS[1][d]->player +this->paren->SPOTS[2][d]->player < cm){
                    for(int i = 0; i < 3; i++){
                        switch(this->paren->SPOTS[i][d]->player){
                            case 0:
                                cm--;
                                break;

                        }
                    }
                    // ^ Adds points for empty spots | Below will add that with the already placed points
                    cm += this->paren->SPOTS[0][d]->player +this->paren->SPOTS[1][d]->player +this->paren->SPOTS[2][d]->player;
                    col = d;
                }}
        }
        }
    }
    std::cout << "Row Score: " << rm << " " << "Column Score: " << cm << " " << "Left To Right Score: " << lTr << " " << "Right to Left Score: " << rTl << '\n';
    if(rTl > lTr && (lTr < rm && lTr < cm)){
        for(int i = 0; i < 3; i++){
            if(this->paren->SPOTS[i][i]->player == 0){
                this->paren->SPOTS[i][i]->player = -1;
                round++;
                return;
            }
        }
    }
    else if(rTl < lTr && (rTl < rm && rTl < cm)){
        for(int i = 0; i < 3; i++){
            if(this->paren->SPOTS[i][2-i]->player == 0){
                this->paren->SPOTS[i][2-i]->player = -1;
                round++;
                return;
            }
        }
    }
    else if(rm < cm){
        for(int i = 0; i < 3 ; i++){
            if(this->paren->SPOTS[row][i]->player == 0){
                this->paren->SPOTS[row][i]->player = -1;
                round++;
                return;
            }
        }
    }
    else if(rm >= cm){
        for(int i = 0; i < 3 ; i++){
            if(this->paren->SPOTS[i][col]->player == 0){
                this->paren->SPOTS[i][col]->player = -1;
                round++;
                return;
            }
        }
    }
    std::cout << rm << " " << cm << "\n";
    std::cout << (rTl > lTr && (lTr < rm && lTr < cm)) << "\n";
    std::cout << (rTl < lTr && (rTl < rm && rTl < cm)) << "\n";
    std::cout << (rm < cm) << "\n";
    std::cout << (rm > cm) << "\n";
    for(int i = 0; i < 3; i++){
        if(this->paren->SPOTS[i][col] == 0){
            this->paren->SPOTS[row][i]->player = -1;
            round++;
            return;
        }
        else if(this->paren->SPOTS[row][i] == 0){
            this->paren->SPOTS[row][i]->player = -1;
            round++;
            return;
        }
    }
    round++;
}

