x = int(input())

for i in range (1, x):
    if i % 2 != 0:
        print(i, end=" ")
print()         
for i in range (x, 0, -1):  
    if i % 2 == 0:      
        print(i, end=" ") 