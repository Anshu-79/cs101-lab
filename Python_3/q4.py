
def reverse_str(string):
    reversed = ''
    for i in range(len(string)-1, -1, -1):
        reversed += string[i]

    print(reversed)

reverse_str("hello world")