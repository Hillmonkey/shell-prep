#ifndef BABY_BUG
#define BABY_BUG
#include <stdio.h>

#define DEBUG(fmt, ...) fprintf (stderr, fmt, __VA_ARGS__)
/* define DEBIT(fmt, ...) */
/**
 * FROM Kochan, "Programming in C", page 394:
 * When you no longer need debugging output, simply define the macro to be
 * nothing: **/
/** #define DEBUG(fmt, ...) **/
/** ... thus replacing calls to the DEBUG macro with nothing, turning all uses
 * of DEBUG to null statements.
 * ... this is simpler than setting debug levels as seen in my other example ...
**/

#endif /* BABY_BUG */
