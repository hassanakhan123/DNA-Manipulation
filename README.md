# DNA-Manipulation

### Background
Deoxyribonucleic Acid (DNA) is a molecule that encodes the genetic blueprint from which cells generate products essential in the development of living organisms. DNA is composed of two molecular strands that coil to form a double helix, and are often represented as a string of characters (each representing a fundamental component in the strand known as a nucleotide). There are 4 types of nucleotide: Adenine (A), Guanine (G), Thymine (T) or Cytosine (C). Thus DNA sequences can be represented as a string of these characters: e.g. “AGTCATTAGCC …”

In this project a series of functions have been created to:
1. Allow a user to enter a DNA string
2. Validate whether the DNA string contains only valid nucleotides
3. Find the compliment of a valid DNA string

### PART 1: Entering A DNA String
- `enterDNAString` is a C++ function that allows the user to enter a string of characters (which may or may not represent a valid DNA string). Upon pressing <enter> the string is read from standard input (cin) and returned by the function.
- The return type of `enterDNAString` is a string.
- The program echos the string entered, followed by the size of the string (number of characters) in brackets. For example if the user enters “`ABHDKDJ`”, the program will output: `ABHDKDJ (7 chars)`
  
### PART 2: Validating The DNA String
- `checkValidity` is a C++ function that checks if the DNA string entered using Part 1 is valid – i.e. the string only contains valid nucleotides (A|G|T|C). These can be repeated any amount of time, but can only be these characters. There should also be no white spaces in the entered text.
- `checkValidity` accepts the original string variable from Part 1 as an argument (passed by value) and returns true/false as the result (true if valid).
  
### PART 3: Find The Compliment Of A *Valid* DNA String
- `compliment` is a C++ function that outputs the compliment of a valid DNA string. 
- The compliment of each nucleotide is: A <-> T and G <-> C
- In locations in the original sequence, A’s will become T’s, while T’s will become A’s. Similarly, G’s will become C’s, and C’s will become G’s.
- `compliment` accepts a DNA string from Part 1 as an argument (passed by value). 
- The return type of `compliment` is void. 
- If the DNA string is invalid, then no compliment will be calculated.
