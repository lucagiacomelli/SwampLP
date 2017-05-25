# SwampLP
Illustration of well known AI problem through logic programming.

# How to run the code
To run the cose follow these steps:
1) Clone the repository;
2) If you want to calculate the solution for the Swamp with a predefined instance of the board, execute from the terminal:

'[path/to/clingo]clingo SBoardExample.lp Swamp.lp -c n=10 -c m=10'




3) If you want to calculate solutions for the Swamp problem with different number of row, columns and probability, compile from terminal the C-file in the directory:

'gcc SwampBoard.c -o board'

This compilation generates a new file in the directory. 

4) Now execute the file for generating a random Swamp:

'./board <number of rows> <number of columns> <probability of land>'

For example:  './board 5 10 0.5'

5) Finally, execute:

'[path/to/clingo]clingo SBoard.lp Swamp.lp -c n=<number of rows> -c m=<number of columns>'    (3)

For example:   '[path/to/clingo]clingo SBoard.lp Swamp.lp -c n=5 -c m=10'


NB: if you want generate a new instance of the problem, back to step 4.
