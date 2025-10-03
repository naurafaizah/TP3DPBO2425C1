from MenuItem import MenuItem

class Order:
    def __init__(self, order_id=0, customer_name="", status="Pending"):
        # atribut private
        self._order_id = order_id
        self._customer_name = customer_name
        self._status = status
        self._items = []  # list untuk menyimpan objek turunan MenuItem (food/drink)

    # setter & getter untuk order_id
    def set_order_id(self, order_id):
        self._order_id = order_id

    def get_order_id(self):
        return self._order_id

    # setter & getter untuk customer_name
    def set_customer_name(self, customer_name):
        self._customer_name = customer_name

    def get_customer_name(self):
        return self._customer_name

    # setter & getter untuk status
    def set_status(self, status):
        self._status = status

    def get_status(self):
        return self._status

    # method untuk menambahkan item ke dalam order
    # relasi: order → menuitem (food/drink) dengan agregasi (order punya banyak item)
    def add_item(self, item: MenuItem):
        self._items.append(item)

    # method untuk menampilkan detail order beserta item yang dipesan
    def display(self):
        print(f"Order ID: {self._order_id} | Customer: {self._customer_name} | Status: {self._status}")
        
        if not self._items:
            print("Order masih kosong!")
            return

        # polymorphism: setiap objek food/drink punya versi print_info sendiri
        for item in self._items:
            item.print_info()
