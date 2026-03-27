import random

value = random.randint(1,1000)
guess_number = 0
user_value = int(input("Enter your guess : "))
while user_value != value :

    if user_value > value :
        user_value = int(input("Enter lower value : "))
    elif user_value < value :
        user_value = int(input("Enter higher value : "))
    guess_number += 1

print("Correct after",guess_number,"guess")