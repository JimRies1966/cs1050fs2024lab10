/*****************************************************************************
 * lab10.c
 * Starter Code By Jim Ries (jer676)
 * Fall 2024
 *****************************************************************************/
#include <stdio.h>
#include <string.h>

void PrintStrings(char * * strings, int count)
{
}

void BubbleSortStrings (char * * strings, int count, int fIsAscending)
{
}


int main(void)
{
    // Test 1
    char * dogsOfJimR[] = 
    {
        "Murphy",
        "Cisco",
        "Bandit",
        "Poncho",
        "Cuddles",
        "Frisky",
        "Vicki",
    };
    int countDogs = sizeof(dogsOfJimR)/sizeof(dogsOfJimR[0]);

    printf("Original dogs:\n");
    PrintStrings(dogsOfJimR, countDogs);
    printf("\n");

    BubbleSortStrings(dogsOfJimR,countDogs,1);

    printf("Sorted dogs\n");
    PrintStrings(dogsOfJimR, countDogs);
    printf("\n");


    // Test 2
    char * heroesOfJimR[] = 
    {
        "Spiderman",
        "Captain America",
        "Wolverine",
        "Cyclops",
        "Iron Man",
        "Black Widow",
        "Hulk",
        "Collosus",
        "Nightcrawler",
        "Storm",
        "Thunderbird",
        "Sunfire",
    };
    int countHeroes = sizeof(heroesOfJimR)/sizeof(heroesOfJimR[0]);

    printf("Original heroes:\n");
    PrintStrings(heroesOfJimR, countHeroes);
    printf("\n");

    BubbleSortStrings(heroesOfJimR,countHeroes,1);

    printf("Sorted heroes\n");
    PrintStrings(heroesOfJimR, countHeroes);
    printf("\n");

    // Test 3
    char * dummy[] =
    {
        "two",
        "one",
    };
    int countDummy = sizeof(dummy)/sizeof(dummy[0]);

    printf("Original dummy:\n");
    PrintStrings(dummy,countDummy);
    printf("\n");

    BubbleSortStrings(dummy,0,1);

    printf("Should not have changed\n");
    PrintStrings(dummy,countDummy);
    printf("\n");

    BubbleSortStrings(dummy,1,1);
    printf("Still should not have changed\n");
    PrintStrings(dummy,countDummy);
    printf("\n");

    BubbleSortStrings(dummy,countDummy,1);
    printf("Finally changed\n");
    PrintStrings(dummy,countDummy);
    printf("\n");


    // Honors only testing.  You can ignore
    // if you are not in the honors section
    printf("**** Honors only ****\n");
    BubbleSortStrings(dogsOfJimR,countDogs,0);
    printf("Sorted descending dogs\n");
    PrintStrings(dogsOfJimR, countDogs);
    printf("\n");
    BubbleSortStrings(heroesOfJimR,countHeroes,0);
    printf("Sorted descending heroes\n");
    PrintStrings(heroesOfJimR, countHeroes);
    printf("\n");
    printf("*********************\n");

}
