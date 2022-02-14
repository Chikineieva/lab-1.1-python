def text():
    row = " "
    text = []
    while row!='\x18':
        row = input()
        text.append(row)
        text.append("\n")
    del text[-1]
    del text[-2]
    return "".join(text)
