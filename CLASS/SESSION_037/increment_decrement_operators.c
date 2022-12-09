/* 
    @AUTHOR: YOGESHWAR SHUKLA 
    @DATE: 6TH DEC 2022 
    @GOAL: TO DEMONSTRATE PRE-INCREMENT/DECREMENT, 
            POST-INCREMENT/DECREMENT OPERATORS 
*/

#include <stdio.h> 
#include <stdlib.h> 

/*Sample Test for git hub*/

int main(void)
{
    int num = 10; 

    printf("original value:num = %d\n", num); 
    num = num + 1; 
    printf("After adding 1 to num: num = %d\n", num); 
    num = num - 1; 
    printf("After subtracting 1 from num: num = %d\n", num); 

    ++num; /* ++ -> PRE-INCREMENT*/
    printf("Value of num after ++num:num = %d\n", num); /* OP = 11 */

    num++; /* ++ -> POST-INCREMENT */
    printf("Value of num after num++: num = %d\n", num); /* OP = 12 */

    --num; /* -- -> PRE-DECREMENT */
    printf("Value of num after --num:num = %d\n", num); /* OP = 11 */

    num--; /* -- -> POST-DECREMENT */
    printf("Value of num after num-- : num = %d\n", num); /* OP = 10 */

    return (0); 
}