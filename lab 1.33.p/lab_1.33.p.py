from module1 import*
file1 = open('text1.txt','a+')
print("введіть текстовий файл:\n")
file1.write(text())
file1.seek(0)
print("введений текстовий файл:")
print(file1.read())
file1.seek(0)
file2 = open('text2.txt','a+')
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
file2.seek(0)
print("новий текстовий файл, утворений на основі введеного:")
print(file2.read())
file1.close()
file2.close()
