from MenuItem import MenuItem

class Drink(MenuItem):
    def __init__(self, item_id=0, name="", price=0, size="", drink_type=""):
        super().__init__(item_id, name, price)  # panggil constructor menuitem
        self._size = size        # atribut private size
        self._type = drink_type  # atribut private type

    # setter dan getter untuk size
    def set_size(self, size):
        self._size = size

    def get_size(self):
        return self._size

    # setter dan getter untuk type
    def set_type(self, drink_type):
        self._type = drink_type

    def get_type(self):
        return self._type

    # override print_info dari class induk
    def print_info(self):
        info = self.base_info()
        info += f" | size: {self._size} | type: {self._type}"
        print(info)
