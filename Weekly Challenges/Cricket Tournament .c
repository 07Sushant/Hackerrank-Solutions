#include <stdio.h>

#define NUM_PLAYERS 11

struct Player {
    int id;
    int runs;
};

int main() {
    struct Player team[NUM_PLAYERS];
    int i, total_runs = 0;

    // Read input
    for (i = 0; i < NUM_PLAYERS; i++) {
        if (scanf("%d %d", &team[i].id, &team[i].runs) != 2) {
            printf("Invalid input format.\n");
            return 1;
        }
        if (team[i].id < 1 || team[i].id > NUM_PLAYERS) {
            printf("Invalid player ID.\n");
            return 1;
        }
        if (team[i].runs < 0) {
            printf("Invalid runs scored.\n");
            return 1;
        }
        total_runs += team[i].runs;
    }

    // Print output
    printf("Total runs scored: %d\n", total_runs);

    return 0;
}
