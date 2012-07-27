readme.txt
----------

This submission is towards the Homework 2 for CSE 504, Spring 2012. The submission contains the flex and bison code to perform lexical analysis and parsing for Decaf programming language. The contents of the submission are:

1. decafch.l
2. decafch.y
3. Makefile
4. readme.txt

decafch.l
This is the flex specification file to perform the lexical analysis. Based upon the regular expressions specified in this file, the contents of the input program are mateched and appropriate token is returned. We also maintain a counter for the line number of the program currently being parsed. This allows us to display the line number information to the user in case the parser detects an error.

decafch.y
This is the bison specification file to perform the parsing. The grammar of Decaf (from the productions in the Decaf manual) is specified here to implement the parser. The code to glue the flex and bison components is also written in the last section of this file. 

Makefile
Makefile to compile the above two and generate the parser executable.



To compile and run the code:
1. Navigate to the directory containing the above 3 files
2. Run the command: make
3. To parse a decaf source file "input.decaf", give the following command: ./decafch input.decaf

Shift-Reduce Conflict:
When the code is compiled using make command, it shows 1 shift-reduce conflict. This conflict is due to the production for "if-else" statement. This can be verified from the file "decafch.output". This conflict can be lived with because by default, bison will choose shift over reduce which happens to be the required behavior to parse the "if-else" construct successfully.


Karthik Uthaman
Sandeep Koppala
 
