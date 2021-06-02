// C program to count special characters, digits,
// vowels, and consonants in a given string
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to count special characters, digits,
// vowels, and consonants in a given string
void countCharactersCategory(char s[])
{
	// Initializing variables to count the total number of special
    // characters, digits, vowels, and consonants in the given string
    int totalSpecialCharacters = 0, totalDigits = 0, totalVowels = 0, totalConsonants = 0;

	for (int i = 0; i < strlen(s); i++)
    {
		char c = s[i];

        // Alphabets family
		if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
        {
			// Converting character to lower case
			c = tolower(c);

            // Vowels
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                totalVowels++;
            }
            // Consonants
			else
            {
                totalConsonants++;
            }
		}
        // Digits family
		else if (c >= '0' && c <= '9')
        {
            totalDigits++;
        }
        // Special characters family
		else
        {
            totalSpecialCharacters++;
        }
	}
    printf("Total no. of vowels in the given string: %d \n",totalVowels);
    printf("Total no. of consonants in the given string: %d \n",totalConsonants);
    printf("Total no. of digits in the given string: %d \n",totalDigits);
    printf("Total no. of special characters in the given string: %d \n",totalSpecialCharacters);
}

// Driver code
int main()
{
    // Test case: 1
	char s1[] = "Welcome 2 #MUO";

    printf("Input string: %s \n",s1);
	countCharactersCategory(s1);

    // Test case: 2
	char s2[] = "This Is @ InpuT String 2";
    printf("Input string: %s \n",s2);
	countCharactersCategory(s2);

	return 0;
}
