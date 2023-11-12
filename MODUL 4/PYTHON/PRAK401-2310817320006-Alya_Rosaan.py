x, y = input().split() # y = simbol
angka = int(x)
for i in range(1, 51):
    if(i % angka == 0):
        print(y, end=" ") #fungsi end untuk mencetak spasi bukan baris
    else :
        print(i, end=" ")
