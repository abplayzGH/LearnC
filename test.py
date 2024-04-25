


def Loop(i):
    if i > 0:
        print(i)
        x = i - 1
        Loop(x)
    else:
        return 0
    
Loop(5)