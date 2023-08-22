# -------------------Problem----------------------
# create a random list filled with the chars H and T
# for heads and tails. Output the number of Hs and Ts
# Output should resemble:
#   Heads : 45
#   Tails  : 55

import random

# create the list

flipCoin = []

# populate list
for i in range(1, 101):
    flipCoin += random.choice(['H', 'T'])

print('Heads :  ', flipCoin.count('H'))
print('Tails : ', flipCoin.count('T'))