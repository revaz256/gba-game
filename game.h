#ifndef GAME_H
#define GAME_H

#include "gba.h"

                    /* TODO: */

            // Create any necessary structs //

typedef struct x {
    int width;
    int height;
    int row;
    int column;
    int oldRow;
    int oldColumn;
} paddle;

typedef struct y {
    int x;
    int y;
} ball;


/*
* For example, for a Snake game, one could be:
*
* typedef struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* } Snake;
*
*
* 
*
*
* Example of a struct to hold state machine data:
* 
* typedef struct state {
*   int currentState;
*   int nextState;
* } State
*
*/

#endif
