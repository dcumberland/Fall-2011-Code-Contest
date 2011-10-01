/* Fall 2011 Code Contest
 * @author Tyler Shopshire (tshopshi@calpoly.edu)
 * @author Michele Jenkins (mkjenkin@calpoly.edu)
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
  /* Grabs the argument and converts it to
   * to its integer representaion
   */
  int num = atoi(argv[1]);

  /* Array that maps the numbers 1-99 to the amount of
   * letters in the English word with that number
   * Excludes Hyphens
   */
  int map[99] =  {3, 3, 5, 4, 4, 3, 5, 5, 4,        /*Numbers 1-9 */
                  3, 6, 6, 8, 8, 7, 7, 9, 8, 8,     /* 10-19      */
                  6, 9, 9,11,10,10, 9,11,11,10,     /* 20-29      */
                  6, 9, 9,11,10,10, 9,11,11,10,     /* 30-39      */
                  5, 8, 8,10, 9, 9, 8,10,10, 9,     /* 40-49      */
                  5, 8, 8,10, 9, 9, 8,10,10, 9,     /* 50-59      */
                  5, 8, 8,10, 9, 9, 8,10,10, 9,     /* 60-69      */
                  7,10,10,12,11,11,10,12,12,11,     /* 70-79      */
                  6, 9, 9,11,10,10, 9,11,11,10,     /* 80-89      */
                  6, 9, 9,11,10,10, 9,11,11,10};    /* 90-99      */


  /* The algorithm prints the current number in the sequence
   * and then the next number is assigned by accessing the array
   * at the current number - 1. (0 based)
   */
  while (num != 4)
  {
    printf("%d -> ", num);
    num = map[num-1];
  }

  printf("%d -> %d\n", num, map[num-1]);

  return 0;

}
