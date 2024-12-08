learnc: learning.c
	cc learning.c -o learnc

learnc-debug: learning.c
	cc -g learning.c -o learnc

mastermind: Mastermind/mastermind.c
	cc Mastermind/mastermind.c -o Mastermind/mastermind

mastermind-debug: Mastermind/mastermind.c
	cc -g Mastermind/mastermind.c -k Mastermind/mastermind