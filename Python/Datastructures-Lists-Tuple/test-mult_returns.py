#!/usr/bin/python3
multiple_returns = __import__('mult_returns').multiple_returns

sentence = "At school, I learnt C!"
length, first = multiple_returns(sentence)
print("Length: {:d} - First character: {}".format(length, first))
