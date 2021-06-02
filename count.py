# Python program to count special characters, digits,
# vowels, and consonants in a given string

# Function to count special characters, digits,
# vowels, and consonants in a given string
def countCharactersCategory(s):

	# Initializing variables to count the total number of special
    # characters, digits, vowels, and consonants in the given string
	totalSpecialCharacters = 0
	totalDigits = 0
	totalVowels = 0
	totalConsonants = 0


	for i in range(0, len(s)):

		c = s[i]

        # Alphabets family
		if ( (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z') ):

			# Converting character to lower case
			c = c.lower()

            # Vowels
			if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'):
				totalVowels += 1
            # Consonants
			else:
				totalConsonants += 1

        # Digits family
		elif (c >= '0' and c <= '9'):
			totalDigits += 1

        # Special characters family
		else:
			totalSpecialCharacters += 1

	print("Total no. of vowels in the given string: ", totalVowels)
	print("Total no. of consonants in the given string: ", totalConsonants)
	print("Total no. of digits in the given string: ", totalDigits)
	print("Total no. of special characters in the given string: ", totalSpecialCharacters)


# Driver code

# Test case: 1
s1 = "Welcome 2 #MUO"
print("Input string: ", s1)
countCharactersCategory(s1)

# Test case: 2
s2 = "This Is @ InpuT String 2"
print("Input string: ", s2)
countCharactersCategory(s2)
