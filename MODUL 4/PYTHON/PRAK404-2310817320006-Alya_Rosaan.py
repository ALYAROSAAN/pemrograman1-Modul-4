while True:
    print("pilih program")
    print("1. penjumlahan")
    print("2. pengurangan")
    print("3. perkalian")
    print("4. pembagian")
    print("5. exit")
    print("masukkan pilihan : ", end=" ")
    x = int(input())
    if x == 5:
        break
    elif x > 5:
        print("input anda salah, silahkan coba lagi")
        continue
    print("masukkan nilai pertama :", end=" ") 
    y = float(input())
    print("masukkan nilai kedua :", end=" ")
    z = float(input())
    if x == 1:
        hasil_1 = y + z
        print(f"hasil penjumlahan antara {y:.2f} dengan {z:.2f} adalah", hasil_1)
    elif x == 2:
        hasil_2 = y - z
        print(f"hasil pengurangan antara {y:.2f} dengan {z:.2f} adalah", hasil_2)
    elif x == 3:
        hasil_3 = y * z
        print(f"hasil perkalian antara {y:.2f} dengan {z:.2f} adalah", hasil_3)
    elif x == 4:
        hasil_4 = y / z
        print(f"hasil pembagian antara {y:.2f} dengan {z:.2f} adalah", hasil_4)
print("terimakasih telah menggunakan kalkulator alya")        
