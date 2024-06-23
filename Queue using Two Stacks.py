# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
list = []
for a in range(n):
    x = input().split()
    if x[0] == "1":
        list.append(x[1])
    elif x[0] == "2":
        list = list[1:]
    else:
        print(list[0])
