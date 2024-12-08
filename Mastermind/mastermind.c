#include <stdio.h>

#define COLOR_LENGTH 18

#define RED pegs[0]
#define ORANGE pegs[1]
#define YELLOW pegs[2]
#define GREEN pegs[3]
#define BLUE pegs[4]
#define PURPLE pegs[5]

char pegs[][COLOR_LENGTH] = {
    "\033[48;5;124m  \033[0m", //red
    "\033[48;5;208m  \033[0m", //orange
    "\033[48;5;226m  \033[0m", //yellow
    "\033[48;5;46m  \033[0m", //green
    "\033[48;5;20m  \033[0m", //blue
    "\033[48;5;91m  \033[0m", //purple
};


char* mastercode[4] = {RED, ORANGE, YELLOW, GREEN};

int check_guess(char* guess[4]) {
    int blacks = 0;
    int whites = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == mastercode[i]) {
            blacks++;
        } else {
            for (int j = 0; j < 4; j++) {
                if (j == i) {continue;}
                if (guess[i] == mastercode[j]) {
                    whites++;
                }
            }
        }
    }
    if (blacks == 4) {
        printf("\033[38;5;46mYou win!\033[0m\n");
        exit(0);
    }
    printf("\033[38;5;16m");
    for (int i = 0; i < blacks; i++) {
        printf("•");
    }
    printf("\033[38;5;15m");
    for (int i = 0; i < whites; i++) {
        printf("•");
    }
    printf("\033[0m\033[4m");
    for (int i = 0; i < 4 - blacks - whites; i++) {
        printf(" ");
    }
    printf("\033[0m\n");
    return 0;
}

int guess_peg() {
    char in = getchar();
    printf("%c\n", in);
}

int main(void) {
    char* guess[4];
    
    // char* guess[4] = {ORANGE, PURPLE, BLUE, GREEN}; //White, Black, X, X
    // check_guess(guess);
    // guess[0] = RED;
    // check_guess(guess);\

    guess_peg();

    // int test;
    // scanf("%d",&test);
    // printf("%d\n",test);
    return 0;
}
