import cmd, sys
from turtle import *

class TurtleShell(cmd.Cmd):
    intro = 'Welcome to the turtle shell. Type help or ? to list commands.\n'
    prompt = '(turtle)'
    file = None

    # ----- Basic turtle commands -----
    def do_forward(self, arg);
        'Move the turtle forward by the specified distance: FORWARD 10'
        forward(*parse(arg))

    def do_right(self, arg):
        'Turn turtle right by given number of degrees: Right 20'
        right(*parse(arg))

    def do_left(self, arg):
        'Turn turtle right by given number of degrees: RIGHT 20'
        left(*parse(arg))