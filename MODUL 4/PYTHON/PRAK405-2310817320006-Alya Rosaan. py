x, y = map(int,input().split())

for i in range(1, x + 1) :
    j = i 
    while j > 1 :
        print("(%d * %d) + "%(j, y), end='') ; j -= 1
    x = 1 
    result = (i * y)
    while x < i :
        result += (x * y) 
        x += 1
    print("(%d * %d) = %d"%(j, y, result))
num_1 = 1 
num_2 = 1 
total = 0
while num_1 <= x :
    total += num_2 * y 
    num_2 += num_1 + 1 
    num_1 += 1
print("%d"%(total))