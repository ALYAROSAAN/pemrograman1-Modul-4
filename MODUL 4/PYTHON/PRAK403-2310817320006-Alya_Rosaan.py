x, y = map(int, input().split())

if x < y:
    for i in range(x, y + 1):
        print(i, end=" ")
        print(y, end=" ")
        y = y - 1
        if y > x or x == y:
            print("-", end=" ")
else:
    for j in reversed(range(y, x + 1)):
        print(j, end=" ")
        print(y, end=" ")
        y = y + 1
        if y < x or x == y:
            print("-", end=" ")


