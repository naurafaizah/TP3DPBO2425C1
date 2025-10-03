# Janji
Naura Nur Faizah
2408352
Ilmu Komputer C1

Saya Naura Nur Faizah dengan NIM 2408352 mengerjakan TP 2 dalam mata kuliah Desain Pemrograman Berbasis Objek untuk keberkahan-Nya maka saya tidak akan melakukan kecurangan seperti yang telah di spesifikasikan


# desain diagram
<img width="809" height="663" alt="Screenshot 2025-09-30 225521" src="https://github.com/user-attachments/assets/8e62c400-6ede-45b5-8129-5199ea96e52b" />

# penjelasan atribut dan methods setiap kelas
- python
  MenuItem menyimpan atribut dasar menu (id, name, price) dengan setter/getter dan base_info(). Food dan Drink mewarisi MenuItem, menambah atribut khusus (spicy_level & calories / size & type), serta mengoverride print_info(). Order berisi order_id, customer_name, status, dan list items dengan method add_item() dan display(). relasinya: Food & Drink extends MenuItem, sedangkan Order has-a MenuItem.

- cpp
  MenuItem menyimpan id, name, price dengan setter/getter dan printInfo() virtual. Food menambah spicyLevel & calories, sedangkan Drink menambah size & type, keduanya override printInfo(). Order punya orderId, customerName, status, dan vector<MenuItem*> items, dengan method utama setter/getter, addItem(), dan display() untuk menampilkan pesanan via polymorphism.
  
# penjelasan desain program
kelas utama yang menjadi induk adalah MenuItem, yang menyimpan atribut dasar sebuah menu seperti id, name, dan price, serta method umum printInfo(). kelas ini kemudian diturunkan (extends) ke dua kelas turunan yaitu Food dan Drink.

masing-masing menambah atribut khusus dan mengoverride printInfo(). sedangkan kelas Order membentuk relasi has-a dengan MenuItem melalui vector<MenuItem*>, penggunaan composition pada Order membuat satu pesanan dapat berisi berbagai jenis menu (baik makanan maupun minuman). dengan konsep ini, program mendukung polymorphism dan lebih fleksibel dalam mengelola berbagai jenis menu dalam satu pesanan.

# penjelasan alur
  alur program dimulai dari pembuatan objek order untuk menyimpan data pesanan customer. setiap order punya informasi dasar seperti id, nama customer, dan status. lalu, user bisa menambahkan item berupa food atau drink. saat objek food/drink dibuat, data khusus seperti harga, level pedas, kalori, ukuran, atau tipe diisi sesuai input. item tersebut kemudian dimasukkan ke dalam order menggunakan relasi has-a. saat order ditampilkan, sistem memanggil method printInfo() dari setiap item dengan polymorphism, sehingga detail menu bisa muncul sesuai jenisnya. proses ini berulang untuk customer baru hingga program selesai.

# dokumentasi hasil program
- python
  output pertama untuk data awal
  <img width="1623" height="219" alt="Screenshot 2025-09-30 225108" src="https://github.com/user-attachments/assets/dc3c6766-ec12-45e1-b291-76a401fad9f2" />

  menambahkan data baru sehingga muncul output baru dengan nama customer yang lain
  <img width="950" height="340" alt="Screenshot 2025-09-30 225121" src="https://github.com/user-attachments/assets/99dd6400-77a2-46ae-9993-512dcf764d6e" />

  menambahkan item baru lagi tapi dengan nama customer yang sama jadi item tersebut otomatis masuk ke order yang sama, bukan bikin order baru lagi
  <img width="992" height="364" alt="Screenshot 2025-09-30 225130" src="https://github.com/user-attachments/assets/d1cd312c-588a-4cb9-82db-fb1a57eb7edd" />

  menambahkan order baru lagi dengan nama customer yang berbeda, sehingga muncul data order baru dan tetap menyimpan data order lama
  <img width="1030" height="276" alt="Screenshot 2025-09-30 225156" src="https://github.com/user-attachments/assets/b537cc76-1092-4cae-8dfb-d66c093fccff" />

  di sini user bikin order baru untuk customer Galang. setelah memasukkan input langsung keluar data order sementara yang nunjukin pesanan pertama galang
  <img width="1021" height="317" alt="Screenshot 2025-09-30 225202" src="https://github.com/user-attachments/assets/ad1baeea-64b7-4aef-bd63-559a11015f8a" />

  setelah itu program nanya "mau tambah order lagi?". user pilih n (tidak), jadi pesanan galang dianggap selesai dan langsung tampil sebagai data order selesai
  <img width="779" height="186" alt="Screenshot 2025-09-30 225209" src="https://github.com/user-attachments/assets/eb6841d2-9aab-49c0-858a-072d24480752" />

  akhirnya program menutup proses dengan menampilkan data order selesai tadi lalu keluar pesan "Program selesai. Terima kasih!". artinya order galang sudah disimpan, program pun berakhir
  <img width="1423" height="275" alt="Screenshot 2025-09-30 225224" src="https://github.com/user-attachments/assets/c8170eb0-c02e-4002-816b-84770afba299" />

- c++
  untuk c++ sama saja penjelasannya seperti python diatas
  <img width="1498" height="218" alt="Screenshot 2025-09-30 221455" src="https://github.com/user-attachments/assets/d93ca901-ddf2-42c1-aa13-cf1bc609b7c7" />
  <img width="914" height="332" alt="Screenshot 2025-09-30 221522" src="https://github.com/user-attachments/assets/06841063-37f9-4b68-8991-a5606ef34b91" />
  <img width="997" height="363" alt="Screenshot 2025-09-30 221534" src="https://github.com/user-attachments/assets/a042bbc7-e60a-416f-91a8-8fa35abb13fa" />
  <img width="989" height="276" alt="Screenshot 2025-09-30 221543" src="https://github.com/user-attachments/assets/b8b34d54-c09f-4268-b787-ac254c9e3fd9" />
  <img width="1028" height="311" alt="Screenshot 2025-09-30 221556" src="https://github.com/user-attachments/assets/29246590-9e0a-435a-90d2-f0b32a58169a" />
  <img width="1401" height="295" alt="Screenshot 2025-09-30 221613" src="https://github.com/user-attachments/assets/9f22784c-016c-4cba-a418-e7b70f587390" />


alur : input order → tampil data sementara → konfirmasi tambah order atau tidak → kalau tidak, langsung tampil order selesai → program berhenti



  



  
  

  
