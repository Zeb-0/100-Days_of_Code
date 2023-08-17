# returns length of a string and the first character in the string

def multiple_returns(sentence):
    ln = len(sentence)
    if sentence == "":
        return (0, None)
    first_char = sentence[0]
    return (ln, first_char)
