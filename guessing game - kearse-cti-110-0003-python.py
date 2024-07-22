import random
random.seed()   #Prepare random number generator


# ashlei kearse-cti-110-0003
# the numbers range from 1-100 in this game.
# test case 1: i tested the game to see if the flow chart had no mistakes. i then tried to make a quit option.
# 
# test case 2: i tried inputing the quit option and it did not work very well i kept running into an error.
secret = int(random.random() * 100) + 1
guess = 1 - 100
print("a number guessing game! enter your first number or press Q to quit")
while guess != secret:
    guess = int(input())
    if guess > secret:
        print("guess too HIGH")
    if guess < secret:
        print("guess too LOW")
print("correct!")
