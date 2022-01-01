#include "Lab1.h"

//implement the function enterDNAString
//enterDNAString asks the user to input a string of characters (which may or may not represent a valid DNA string).
string enterDNAString() {
    string stringOfChar;
    cout << "Please Enter a String of Characters: ";
    //Upon pressing "Enter" the string is read from (cin), stored in the string type variable called 'stringOfChar', and then returned.
    cin  >> stringOfChar;
    return stringOfChar;
};

//implement the function checkValidity
//checkValidity accepts the original string variable from the function enterDNAString as an argument and checks if the string entered is valid.
//To be a valid DNA string, the argument string 's' can only contain valid nucleotides (A|G|T|C).
bool checkValidity(string s) {
    bool DNAValidated;
    //The for loop iterates through each individual character of the argument string from left to right.
    for (int i = 0; i < s.size(); i++) {
        //The if-else statement checks to see if each character in the argument string is composed of a valid nucleotide ('A','a','G','g','T','t','C','c').
        //If the entire string consists of valid Nucleotides, the boolean value 'true' is stored in the variable 'DNAValidated' at each iteration of the for loop, and then returned.
        //If any other character is encountered in an iteration (including white spaces), the boolean value 'false' is returned to indicate that the argument string was invalid.
        if (s[i] == 'A' || s[i] == 'a' || s[i] == 'T' || s[i] == 't' || s[i] == 'G' || s[i] == 'g' || s[i] == 'C' || s[i] == 'c') {
            DNAValidated = true;
        }
        else {
            return false;
        }
    }
    return DNAValidated;
};

//implement the function compliment
//compliment accepts the original string from the function enterDNAString as an argument and finds the compliment of the DNA String if it is VALID.
void compliment(string s){
    //The argument passed in to the function is stored in the string variable called 'DNAStringToCompliment' which is to be manipulated to become the compliment.
    string DNAStringToCompliment = s;
    //The compliment is only generated if 'DNAStringToComplement' is found to be valid -> true.
    if (checkValidity(DNAStringToCompliment) == true) {
        //The for loop iterates through each individual character of 'DNAStringToComplement'.
        for (int i = 0; i < DNAStringToCompliment.size(); i++) {
            //The switch statement is used to manipulate the original string to its compliment. 
            //In the specific locations in 'DNAStringToComplement', (A’s and a's) will become (T’s and t's), while (T’s and t's) will become (A’s and a's). 
            //Similarly, (G's and g's) will become (C's and c's), while (C's and c's) will become (G's and g's).
            switch (DNAStringToCompliment[i]) {
                case 'A':
                    DNAStringToCompliment[i] = 'T';
                    break;
                case 'a':
                    DNAStringToCompliment[i] = 't';
                    break;
                case 'G':
                    DNAStringToCompliment[i] = 'C';
                    break;
                case 'g':
                    DNAStringToCompliment[i] = 'c';
                    break;
                case 'T':
                    DNAStringToCompliment[i] = 'A';
                    break;
                case 't':
                    DNAStringToCompliment[i] = 'a';
                    break;
                case 'C':
                    DNAStringToCompliment[i] = 'G';
                    break;
                case 'c':
                    DNAStringToCompliment[i] = 'g';
                    break;
                default:
                    cout << "something went wrong";      
            };
        };
        //After the for loop, the original argument DNA string is  output to the string along with it's compliment (if the argument string was valid)
        cout << " : compliment (" << s << ") = " << DNAStringToCompliment;
    };
};

int main() {
 
 while(true) {
    cout << "Please choose an option:" << endl;
    cout << "1. Enter DNA string, echo it" << endl;
    cout << "2. Enter DNA string, echo it, validate it" << endl;
    cout << "3. Enter DNA string, echo it, validate it, compliment it if valid" << endl;
    cout << "4. Exit" << endl;
 
    int option;
    cout << ">> ";
 
    cin >> option;
 
    //Following "if" statement is to avoid problem with cin 
    //if a non-numeric character is read by cin when 
    //it is actually supposed to read an integer.
    if ( !cin ) {
        cin.clear();
        cin.ignore( INT_MAX, '\n' ); 
        cout << "Non-numeric option! Try again." << endl;
        continue;
    }
    
    if (1 == option) {
        string str1 = enterDNAString();
        cout << str1 << " (" << str1.size() << " chars)";
        cout << endl;
    }
    else if (2 == option) {
        string str1 = enterDNAString();
        cout << str1 << " (" << str1.size() << " chars)";
        bool b = checkValidity(str1);
        if(b == true)
            cout << " : VALID DNA";
        else
            cout << " : INVALID DNA";
        cout << endl;
     }
     else if (3 == option) {
        string str1 = enterDNAString();
        cout << str1 << " (" << str1.size() << " chars)";
        bool b = checkValidity(str1);
        if(b == true)
            cout << " : VALID DNA";
        else
            cout << " : INVALID DNA";
        compliment(str1);
        cout << endl;
     }
     else if (4 == option) {
         return 0;
     }
     else {
         cout << "Integer option, but incorrect! Try again." << endl;
     }
 }
 return 0;
}; //end of main

