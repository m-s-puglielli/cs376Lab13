/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
 * @author Tanya L. Crenshaw, Nathan Schmedake, Maximilian Puglielli
 * @since August 2013
 *
 */

#include "robot.h"

/**
 * robotPrintMessage
 *
 * This function prints the message, "I really love robots!"
 *
 * @returns none 
 */
void robotPrintMessage(void)
{
	printf("\n\nI really love robots!\n\n");
	return;
}

/**
 * robotPrintAscii
 *
 */
void robotPrintAscii(void)
{
	int i;
	char* blank = "                              ";
	blank = blank + 30;
	for (int i = 0; i < 3; i++)
	{
		printf("\n\n");
		printf("UWR: Unidentified Wheeled Robot\n");
		printf("%s    i_i    \n", blank);
		printf("%s   [*_*]   \n", blank);
		printf("%s  /|___|\\ \n", blank);
		printf("%s   d   b   \n", blank);
		blank -= 10;
	}
}

/**
 * dalekPrintAscii
 *
 */
void dalekPrintAscii(void)
{
	int i;
	char* blank = "                              ";
	blank = blank +30;
	printf("\n\n"
	 "I am Dalek, from Dr. Who\n"
	 "%s      <----->      \n" 
				 "%s     <  (0)  >     \n"        
				 "%s     |       |     \n"
				 "%s    < ------- >    \n"
				 "%s    o         o    \n"
				 "%s    o  0  ()  o    \n"
	 "%s   o           o   \n"
	 	 "%s o o o o o o o o o \n"
	 	 "%s o o o o o o o o o \n"
	 	 "%s o o o o o o o o o \n", blank, blank, blank, blank, blank, blank, 
	 blank, blank, blank, blank);
	blank = blank - 10;
}
