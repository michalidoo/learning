# Plan for Mastermind

## lOGIC
- Computer makes the code, human guesses
- NEED TO STORE:
- - Codemaster's code
  - Previous guesses and codemaster's hints (and show these to the player)

## The Game
1. Computer makes a random code
2. Have turns
    - Get input from the user for their guess
    - Make sure input is valid
    - Check it against master code
    - Give the feedback
    - Repeat
3. Decide and announce winner!

## The process
#### Instead of starting from the beginning of the game and working forwards, let's start at the core of the game and work outwards
- One turn
- - Get input (player's guess)
  - Check guess
  - Show feedback
#### Afterwards, we'll work on having many turns, having a random code, etc.


## Notes
- Black = ✓✓ | White = ✓✗
- No repeated colors in a code (or guess)