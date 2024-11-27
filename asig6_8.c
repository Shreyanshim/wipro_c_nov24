#include <stdio.h>

int main() {
    int numPlayers;

    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);

    int scores[numPlayers];
    int totalScore = 0;

    for(int i = 0; i < numPlayers; i++) {
        printf("Enter score for player %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i < numPlayers; i++) {
        totalScore += scores[i];
    }

    printf("The sum of the total score of all players is: %d\n", totalScore);

    return 0;
}