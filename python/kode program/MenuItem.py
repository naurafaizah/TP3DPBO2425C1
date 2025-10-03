class MenuItem:
    def __init__(self, item_id=0, name="", price=0):
        self._id = item_id      # atribut id (protected)
        self._name = name       # atribut name (protected)
        self._price = price     # atribut price (protected)

    # setter & getter untuk id
    def set_id(self, item_id):
        self._id = item_id

    def get_id(self):
        return self._id
    
    # setter & getter untuk name
    def set_name(self, name):
        self._name = name

    def get_name(self):
        return self._name

    # setter & getter untuk price
    def set_price(self, price):
        self._price = price

    def get_price(self):
        return self._price

    # method polymorphism untuk menampilkan info dasar
    def base_info(self):
        return f"id: {self._id} | name: {self._name} | price: {self._price}"
