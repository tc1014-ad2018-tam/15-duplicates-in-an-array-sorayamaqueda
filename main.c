/*
 * This progrma is to help the user find out how many elements of his array are repeated.
 * The program will start by asking the user the size of the array; and then it will move forward to asking for the
 * numbers. After that, the algorithm for counting the repeated elements will begin.
 * The algorithm is one of sorting and comparison nature. It is an outer for cycle with one inner for cycle. On the
 * first loop we initialize a variable of control named 'j' at 0. The condition that keeps the loop on running is that
 * its value is less than the size of the array, ergo, 'i'. Moving on to the inner cycle, we initialize a variable of
 * control named 's' at 0. The condition for the cycle to run is that s is less than 'i', and is increased each time the
 * loop is run.
 * Then, inside the inner loop, there is an if condition to be met which will decide whether or not he value at the
 * position that is being evaluated is equals to the value on the position that follows it.
 * If the condition is met, then the counter is increased by one.
 *
 * Author: Soraya Maqueda
 * Date: 15.10.2018
 * Contact: soraya_maqueda@hotmail.com
 */
#include <stdio.h>

int main() {
    int i;
    int dupCounter;

    //Here I ask the user for the size of the array.
    printf("How many numbers are you going to introduce?");
    scanf("%i", &i);

    int num[i];

    //Here I store the values of the array.
    for(int k = 0; k < i; k++){
        printf("Give me a number: \n");
        scanf("%i", &num[k]);

    }

    //Here I sort the elements and count how many of them are repeated.
    for(int j = 0; j < i; j++){
        for(int s = j + 1; s < i; s++){
            if (num[j] == num[s]){
                dupCounter++;
            }
        }
    }

    printf("Total duplicated numbers: %i", dupCounter);

    return 0;
}