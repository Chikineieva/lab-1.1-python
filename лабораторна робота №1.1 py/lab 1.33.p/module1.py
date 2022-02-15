def text():
    row = " "
    text = []
    while row[-1]!='\x18':
        row = input()
        if row[-1]=='\x18':
            text.append(row[:-1]+'\n')
        else:
            text.append(row+'\n')
    return "".join(text)
def new_file(file1, file2):
    for row in file1:
        for i in range(1,len(row)):
            if row[i]=="=" and row[i+1]!=row[i] and row[i-1]!=row[i] and row[i-1]!="+" and row[i-1]!="^" and row[i-1]!=">"  and row[i-1]!="<" and row[i-1]!="-" and row[i-1]!="*"and row[i-1]!="*" and row[i-1]!="!" and row[i-1]!="%" and row[i-1]!="/" and row[i-1]!="//":
                str = ""
                str+=row[i-1]
                j = 2
                temp = row[i-j]
                while temp.isalnum() or temp=="_":
                    str+=temp
                    j+=1
                    temp = row[i-j]
                file2.write(str[::-1].strip()+"\n")
    return file2