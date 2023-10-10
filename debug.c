/*----------------------------------------------------------------------------
-		                    SE 185: Lab 06 - Bop-It!	    	             -
-	Name:																	 -
- 	Section:																 -
-	NetID:																     -
-	Date:																	 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/*----------------------------------------------------------------------------
-	                            Prototypes                                   -
-----------------------------------------------------------------------------*/
int bopit(int button);
int key_Pressed(int triangle, int circle, int x_button, int square);
bool gameStart(int triangle, int circle, int x_button, int square);
/*----------------------------------------------------------------------------
-	                            Notes                                        -
-----------------------------------------------------------------------------*/
// Compile with gcc lab06.c -o lab06
// Run with ./ds4rd.exe -d 054c:05c4 -D DS4_BT -t -b | ./lab06

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    srand(time(NULL)); /* This will ensure a random game each time. */
	
	//declarations of variables
	int triangle, circle, x_button, square; 
	bool game;
	bool round = true;
	int button; 
	int score;
	int currentChallenge, currentKey;
	int buttonPress;
	buttonPress = triangle + circle + x_button + square;
	
	
	
	/* game = gameStart(triangle, circle, x_button, square); */
	bool start = false;
	printf("This is a Bop-It Game! Place press the circle key to start the game: \n");
	while (start != true){
		scanf("%d,%d,%d,%d", &triangle, &circle, &x_button, &square);

		printf("Debuging.....\n");
		printf ("triangle: %i \n", triangle);
		printf ("circle: %i \n", circle);
		printf ("x_button: %i \n", x_button);
		printf ("square: %i \n", square);
		

	}
    return 0;
}
