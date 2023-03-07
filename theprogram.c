// Separates words into groups

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    // Welcome message
    printf("Welcome! This program separates words in a given text into groups.\n");
    printf("\n");

    // Declares text variable
    char text[7000];

    // Declares other measurements
    int characters = 0, words = 0, i = 0;

    // Gets text
    printf("Paste your text below:\n");

    // Saves text into variable
    fgets(text, sizeof(text), stdin);

    // Measures text
    while (isalpha(text[i]) || isspace(text[i]) || ispunct(text[i]) || isdigit(text[i]))
    {
        characters++;
        i++;
    }

    // Resets i
    i = 0;

    printf("\n");

    // Asks for line measurement
    int wordcount;
    printf("How many words per group? Numerical answer only.\n");
    scanf("%i", &wordcount);

    printf("\n");

    // Asks for what to begin each group with
    char answer;
    printf("Start each group with a different word? Press y for yes or n for no.\n");
    scanf(" %c", &answer);
    printf("\n");
    char name[747];
    if (answer == 'y')
    {
        printf("Give me the new word:\n");
        scanf("%s", name);
        printf("\n");
        printf("Result:\n");
        printf("%s: ", name);
    }

    while (characters > 0)
    {
        // Starts printing text
        printf("%c", text[i]);

        // Counts words
        if (isspace(text[i]))
        {
            words++;
        }

        // Formats thought
        if ((words >= wordcount && text[i] == '.') || text[i] == '!' || text[i] == '?')
        {
            printf("\n");
            printf("\n");
            if (answer == 'y')
            {
                printf("%s: ", name);
            }

            // Skips space
            i++;
        }
        i++;
        characters--;
    }
    return 0;
}
