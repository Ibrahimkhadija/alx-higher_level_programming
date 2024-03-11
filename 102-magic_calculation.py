#!/usr/bin/python3
<<<<<<< HEAD
<<<<<<< HEAD
def magic_calculation(a, b):
    return (98 + a ** b)
=======
def magic_calculation(a, b, c):
    if a < b:
        return (c)
    if c > b:
        return (a + b)
    return (a*b - c)
>>>>>>> 0x01-python-if_else_loops_functions
=======


def magic_calculation(a, b):
    """Match bytecode provided by Holberton School."""
    from magic_calculation_102 import add, sub

    if a < b:
        c = add(a, b)
        for i in range(4, 6):
            c = add(c, i)
        return (c)

    else:
        return(sub(a, b))
=======
def magic_calculation(a, b):
    return (98 + a ** b)
>>>>>>> 4f1f7fb9947ccad909e0021722b1a6e88304439e
>>>>>>> 4ce559d9ceec00eb4ee1eb47325e4a252679e525
