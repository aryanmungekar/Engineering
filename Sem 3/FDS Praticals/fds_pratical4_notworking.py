#Write a Python program to compute following operations on String: 
#a) To display word with the longest length 
#b) To determines the frequency of occurrence of particular character in the string 
#c) To check whether given string is palindrome or not 
#d) To display index of first appearance of the substring 
#e) To count the occurrences of each word in a given string

# Define a string
string = "Hello, welcome to the world of Python"

# Display the word with the longest length
words = string.split() # split the string into a list of words
longest_word = max(words, key=len) # find the word with the maximum length
print(f"The word with the longest length is: {longest_word}")

# Determine the frequency of occurrence of a particular character in the string
char = "o" # define the character to count
freq = string.count(char) # count how many times the character appears in the string
print(f"The frequency of {char} in the string is: {freq}")

# Check whether the given string is a palindrome or not
string = "madam" # define a string
reversed_string = string[::-1] # reverse the string
if string == reversed_string: # compare the original and reversed strings
    print(f"The string {string} is a palindrome")
else:
    print(f"The string {string} is not a palindrome")

# Display the index of the first appearance of the substring
string = "Hello, welcome to the world of Python" # define a string
substring = "Python" # define a substring
index = string.find(substring) # find the lowest index where the substring is found
if index != -1: # check if the substring is found
    print(f"The index of the first appearance of {substring} is: {index}")
else:
    print(f"The substring {substring} is not found in the string")

# Count the occurrences of each word in a given string
string = "Hello, welcome to the world of Python" # define a string
words = string.split() # split the string into a list of words
counts = {} # create an empty dictionary to store the counts
for word in words: # iterate over the words
    if word in counts: # check if the word is already in the dictionary
        counts[word] += 1 # increment the count by one
    else:
        counts[word] = 1 # initialize the count to one
print(f"The counts of each word in the string are: {counts}")
