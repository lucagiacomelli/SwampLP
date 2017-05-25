##### Author Luca Giacomelli ######
#####         Swamp          ######





If you want to calculate the solution for the Swamp with a predefined instance of the board, execute:


clingo SBoardExample.lp Swamp.lp -c n=10 -c m=10




If you want to calculate solutions for the Swamp problem with different number of row, columns and probability.

Once moved in the current directory, compile from terminal the C-file in the directory:

gcc SwampBoard.c -o board   (1)



This compilation generates a new file in the directory.

Now execute the file for generating a random Swamp:




./board <number of rows> <number of columns> <probability of land>   (2)

For example:  ./board 5 10 0.5


Finally, execute:


clingo SBoard.lp Swamp.lp -c n=<number of rows> -c m=<number of columns>     (3)


For example:   clingo SBoard.lp Swamp.lp -c n=5 -c m=10 



NB: if you want generate a new instance of the problem, back to step (2).