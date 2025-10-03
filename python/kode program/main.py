from Food import Food
from Drink import Drink
from Order import Order

def main():
    order_counter = 101  # penomoran order dimulai dari 101

    # order hardcode: naura
    order1 = Order(order_counter, "Naura", "Pending")  # buat order pertama
    order_counter += 1

    f1 = Food(1, "Burger", 25000, 2, 500)  # buat food
    d1 = Drink(2, "Iced Tea", 10000, "Medium", "Cold")  # buat drink

    order1.add_item(f1)  # tambahkan food ke order
    order1.add_item(d1)  # tambahkan drink ke order

    print("=== data awal (order pertama) ===")
    order1.display()
    print("\n=====================================\n")

    # loop input customer baru
    lagi = "y"             # penanda untuk mengulang input
    prev_customer = ""     # menyimpan nama customer sebelumnya
    order = None           # objek order yang sedang aktif
    item_counter = 1       # menghitung nomor item di dalam order

    while lagi.lower() == "y":
        cust_name = input("Masukkan nama customer: ").strip()

        # kalau nama customer berubah → reset order
        if cust_name != prev_customer:
            # tampilkan order lama kalau ada
            if prev_customer != "":
                print("\n=== data order selesai ===")
                order.display()
                print("\n=====================================\n")

            # buat order baru untuk customer baru
            order = Order(order_counter, cust_name, "Pending")
            order_counter += 1
            item_counter = 1
            prev_customer = cust_name

            print("=== membuat order baru ===")

        tipe = input("Mau tambah Food (f) atau Drink (d)? ").strip().lower()

        if tipe == "f":
            # input data makanan
            name = input("Masukkan nama makanan: ").strip()
            price = int(input("Masukkan harga: "))
            spicy = int(input("Masukkan tingkat kepedasan: "))
            calories = int(input("Masukkan jumlah kalori: "))

            f = Food(item_counter, name, price, spicy, calories)
            item_counter += 1
            order.add_item(f)  # tambahkan food ke order

        elif tipe == "d":
            # input data minuman
            name = input("Masukkan nama minuman: ").strip()
            price = int(input("Masukkan harga: "))
            size = input("Masukkan size (Small/Medium/Large): ").strip()
            cold = input("Apakah disajikan dingin? (1 = ya, 0 = tidak): ").strip()
            tipe_minuman = "Cold" if cold == "1" else "Hot"

            d = Drink(item_counter, name, price, size, tipe_minuman)
            item_counter += 1
            order.add_item(d)  # tambahkan drink ke order

        # tampilkan data sementara dari order yang sedang berjalan
        print("\n=== data order sementara ===")
        order.display()

        lagi = input("\nMau tambah order lagi? (y/n): ").strip()

    # tampilkan order terakhir setelah loop selesai
    if prev_customer != "":
        print("\n=== data order selesai ===")
        order.display()

    print("\nprogram selesai. terima kasih!")

if __name__ == "__main__":
    main()
