#!/usr/bin/python3
<<<<<<< HEAD


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
