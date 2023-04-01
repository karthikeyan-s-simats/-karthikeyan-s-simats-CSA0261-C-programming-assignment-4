#include<stdio.h>
#include<string.h>

#define MAX_PLAYERS 11

struct player {
   char name[50];
   int runs;
};

int main() {
   int i, n, totalRuns = 0;
   struct player team[MAX_PLAYERS];

   printf("Enter the number of players in the team (max %d): ", MAX_PLAYERS);
   scanf("%d", &n);

   if (n > MAX_PLAYERS) {
      printf("Maximum number of players allowed is %d. Exiting...\n", MAX_PLAYERS);
      return 1;
   }

   // Accept player information
   for (i = 0; i < n; i++) {
      printf("Enter name of player %d: ", i+1);
      scanf("%s", team[i].name);
      printf("Enter runs scored by %s: ", team[i].name);
      scanf("%d", &team[i].runs);
      totalRuns += team[i].runs;
   }

   // Display total runs scored by the team
   printf("\nTotal runs scored by the team: %d\n", totalRuns);

   return 0;
}


