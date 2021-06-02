// C++ program to count special characters, digits,
// vowels, and consonants in a given string
#include <iostream>
using namespace std;

// Function to count special characters, digits,
// vowels, and consonants in a given string
void countCharactersCategory(string s)
{
	// Initializing variables to count the total number of special
    // characters, digits, vowels, and consonants in the given string
    int totalSpecialCharacters = 0, totalDigits = 0, totalVowels = 0, totalConsonants = 0;

	for (int i = 0; i < s.length(); i++)
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
	cout << "Total no. of vowels in the given string: " << totalVowels << endl;
	cout << "Total no. of consonants in the given string: " << totalConsonants << endl;
	cout << "Total no. of digits in the given string: " << totalDigits << endl;
	cout << "Total no. of special characters in the given string: " << totalSpecialCharacters << endl;
}

// Driver code
int main()
{
    // Test case: 1
	string s1 = "Welcome 2 #MUO";
    cout << "Input string: " << s1 << endl;
	countCharactersCategory(s1);

    // Test case: 2
	string s2 = "This Is @ InpuT String 2";
    cout << "Input string: " << s2 << endl;
	countCharactersCategory(s2);

	return 0;
}
