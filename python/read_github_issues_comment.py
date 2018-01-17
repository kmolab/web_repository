count = 0
list = []
with open('1ab.txt', encoding="utf-8") as fin:
    for line in fin:
        if "<p>學號" in line:
            count += 1
            line = line.replace("<p>","")
            line = line.replace("學號","")
            line = line.replace(":","")
            line = line.replace("<br>","")
            line = line.replace("：","")
            line = line.replace(" ","")
            #print(line, end="")
            list.append(line.replace("\n", ""))
newlist = sorted(list)
for i in range(len(newlist)):
    print(newlist[i])    
#print(count)
