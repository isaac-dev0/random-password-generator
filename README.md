# randomPasswordGenerator
A random password generator for my SDS coursework at the University of Warwick.

# Current Features
- Generates a password from a given array of characters.
- Basic error checking, able to determine what's been entered and check whether it's acceptable.
- Allows a user to pick between 8 and 24 characters, this is the recommended requirement for a password.
- Prints the password that you've generated to a text file, if you choose.

# To-do
- Encrypt the password inside of the text file in a cypher of some description (currently unknown).
- Manage the memory effectively, reset the memory allocation to 0 (memset).

# Issues
- String printed to the text file is currently a weird box? Issue with char printing from array.