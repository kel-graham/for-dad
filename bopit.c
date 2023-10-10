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
		
		
		if (circle == 1){
			
			start = true;
		}
	}
		game = true;
	/* while(circle != 1){
		scanf("%d, %d, %d, %d", &triangle, &circle, &x_button, &square);
		if (circle ==1 ){
			game = true;
		}
		
	} */
	
	while (game == true){
		circle = 0;
		if (round == true){
			button = rand() % 4; 
			currentChallenge = bopit(button);
			
			while (buttonPress >= 1){
			scanf("%d,%d,%d,%d", &triangle, &circle, &x_button, &square);
			printf("%d, %d, %d, %d \n", triangle, circle, x_button, square);
			buttonPress = triangle + circle + x_button + square;
			currentKey = key_Pressed(triangle, circle, x_button, square);
			}
			
			if ( currentChallenge==currentKey ){
				score = score + 1;
				round = true;
			}
			else{
				game = false;
				
			}
		}
	}
	printf("Your score is %d", score);
	
    return 0;
}


/* Put your functions here, and be sure to put prototypes above. */
int bopit(int button){
	int variable;
	if (button == 0 ){
		printf("Press the triangle button!\n");
		variable = 0;
		return variable;
	}
	else if(button == 1){
		printf("Press the cicle button!\n");
		variable = 1;
		return variable;
	}
	else if(button == 2){
		printf("Press the cross button!\n");
		variable = 2;
		return variable;
	}
	else if(button == 3){
		printf("Press the square button!\n");
		variable = 3;
		return variable;
	}
	
}
int key_Pressed(int triangle, int circle, int x_button, int square){
	int variable;
	//scanf("%d, %d, %d, %d", &triangle, &circle, &x_button, &square);
	if (triangle ==1){
		variable = 0;
		return variable;
	}
	else if(circle ==1){
		variable = 1;
		return variable;
	}
	else if(x_button ==1){
		variable = 2;
		return variable;
	}
	else if(square ==1){
		variable = 3;
		return variable;
	}
}
/* bool gameStart(int triangle, int circle, int x_button, int square){
	bool start = false;
	printf("This is a Bop-It Game! Place press the circle key to start the game: \n");
	while (start != true){
		scanf("%d,%d,%d,%d", &triangle, &circle, &x_button, &square);
		if (circle == 1){
			start = true;
		}
	}
	return start; 
} */
