#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Global Variable
int computer_score = 0, player_score = 0 ,tie = 0;
int *ptr1 = &computer_score,*ptr2 = &player_score, *ptr3 = &tie;

//Declaration
int player_choice();
int computer_choice();
int num_matches();
void scoreboard();
void score_calculator();
void reset_score();
int win_print();
void rock_paper_scissors();

int main(){
    int input = 0;
    srand(time(NULL));
    while (1){
        reset_score();
        rock_paper_scissors();
        printf("\nEnter Your Choice : \n");
        printf("1.Play Again?\n2.Quit Game\n\n");
        scanf("%d",&input);
        if(input == 1){
            
        }else if (input == 2){
            printf("\nQuittied\n");
            break;
        }else{
            printf("\nWrong Input.\n");
            break;
        }
    }
    return 0;
}


//Stone paper scissors

void rock_paper_scissors(){
    printf("\n--------------------Rock Paper Scissors--------------------\n\n");
    int matches = num_matches();
    for(int i = 0; i<matches; i++){
        printf("\nMatch %d\n",i+1);
        int player = player_choice(), computer = computer_choice();
        score_calculator(win_print(player , computer));
    }
    if (*ptr1 == *ptr2){
        printf("\n!!!!!!!!!!!!!!! Match Tied !!!!!!!!!!!!!!!\n\nTie with dumb machine u feel shame?\n");
    }else if (*ptr1 > *ptr2){
        printf("\n!!!!!!!!!!!!!!! Computer Won The Match !!!!!!!!!!!!!!!\n\nWhat are you doing bro, you're losing from a dumb machine.\n");
    }else if (*ptr1 < *ptr2){
        printf("\n!!!!!!!!!!!!!!! Player Won The Match !!!!!!!!!!!!!!!\n\nAtleast, you're better then this dumb machine.\n");
    }
}

//Match
int num_matches(){
    int matches = 0;
    printf("Enter number of matches to play :\n\n");
    scanf("%d",&matches);
    return matches;
}



//Score Calculator
void score_calculator(int value){
    if(value == 0){
        (*ptr2)++;          //player wins
    }else if(value == 1){
        (*ptr1)++;          //computer wins
    }else if(value == 2){
        (*ptr3)++;
    }
    scoreboard();
}


//Scoreboard 
void scoreboard(){
    printf("\n----------ScoreBoard----------\n");
    printf("\nPlayer Score = %d\n\nComputer Score = %d\n\nTies = %d\n",*ptr2,*ptr1,*ptr3);
}

//Reset Score to zero
void reset_score(){
    computer_score = 0;
    player_score = 0;
}

//Winner print
int win_print(int player, int computer){
    if (player == 1 && computer == 2){
        printf("Rock vs Paper -> Paper Wins\n\n!!!!!!!!!!!!!!! Computer Wins !!!!!!!!!!!!!!!\n");
        return 1;
        
    }else if (player == 1 && computer == 3){
        printf("Rock vs Scissor -> Rock Wins\n\n!!!!!!!!!!!!!!! Player Wins !!!!!!!!!!!!!!!\n");
        return 0;
    }else if (player == 1 && computer == 1){
        printf("Rock vs Rock -> Tie\n\n!!!!!!!!!!!!!!! Tie !!!!!!!!!!!!!!!\n");
        return 2;
    }else if (player == 2 && computer == 2){
        printf("Paper vs Paper -> Tie\n\n!!!!!!!!!!!!!!! Tie !!!!!!!!!!!!!!!\n");
        return 2;
    }else if (player == 2 && computer == 3){
        printf("Paper vs Scissor -> Scissor Wins\n\n!!!!!!!!!!!!!!! Computer Wins !!!!!!!!!!!!!!!\n");
        return 1;
    }else if (player == 2 && computer == 1){
        printf("Paper vs Rock -> Paper Wins\n\n!!!!!!!!!!!!!!! Player Wins !!!!!!!!!!!!!!!\n");
        return 0;
    }else if (player == 3 && computer == 3){
        printf("Scissor vs Scissor -> Tie\n\n!!!!!!!!!!!!!!! Tie !!!!!!!!!!!!!!!\n");
        return 2;
    }else if (player == 3 && computer == 2){
        printf("Scissor vs Paper -> Scissor Wins\n\n!!!!!!!!!!!!!!! Player Wins !!!!!!!!!!!!!!!\n");
        return 0;
    }else if (player == 3 && computer == 1){
        printf("Scissor vs Rock -> Rock Wins\n\n!!!!!!!!!!!!!!! Computer Wins !!!!!!!!!!!!!!!\n");
        return 1;
    }
}

//player choice
int player_choice(){
    int choice_of_player;
    printf("\nPlayer\n\n");
    printf("Enter Your Choice : \n1.Rock\n2.Paper\n3.Scissor\n\n");
    scanf("%d",&choice_of_player);
    if(choice_of_player < 1 || choice_of_player > 3){
        printf("\nInvalid choice! Please enter 1, 2, or 3.\n");
        return player_choice();
    }
    return choice_of_player;
}

//computer_choice
int computer_choice(){
    int choice_of_computer = rand() % 101;
    if (choice_of_computer >= 0 && choice_of_computer <= 33){
        printf("\nComputer chooses: %d\n\n", 1);
        return 1;
    }else if (choice_of_computer >= 34 && choice_of_computer <= 66){
        printf("\nComputer chooses: %d\n\n", 2);
        return 2;
    }else if (choice_of_computer >= 67 && choice_of_computer <= 100){
        printf("\nComputer chooses: %d\n\n", 3);
        return 3;
    }
    printf("\nComputer chooses: %d\n\n", choice_of_computer);
    return choice_of_computer;
}