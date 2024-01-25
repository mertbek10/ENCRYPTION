Caesar Cipher Encryption

This repository contains a C program that demonstrates the implementation of the Caesar Cipher encryption algorithm. The program reads a text file, performs the encryption, and writes the encrypted text to another file.

The program consists of the following functions:

1. metniDosyadanOku: This function reads the contents of a file specified by the file path and stores the text in the given character array.

2. writetext: This function writes the content of a character array to a file specified by the filename.

3. caesarCipher: The main encryption function that performs the Caesar Cipher encryption on the given text. It takes a key value as a parameter and shifts each alphabetic character by that key value.

The main function demonstrates the usage of these functions. It sets the encryption key, reads the unencrypted text from the file "unencrypted.txt", applies the Caesar Cipher encryption, and writes the encrypted text to the file "sifreli.txt".

To use this program, follow these steps:

1 Make sure you have a C compiler installed on your system.

2 Clone this repository to your local machine.

3 Open a terminal or command prompt and navigate to the directory where the code files are located.

Compile the code using the command gcc filename.c -o output, replacing filename.c with the appropriate filename.

Run the program using the command ./output.

The program will read the unencrypted text from the file, encrypt it using the Caesar Cipher algorithm, and write the encrypted text to the specified output file.

Feel free to modify the code and customize it according to your needs. This program serves as a basic implementation of the Caesar Cipher encryption and can be enhanced or integrated into other systems as required.
