from MenuItem import MenuItem

class Food(MenuItem):
    def __init__(self, item_id=0, name="", price=0, spicy_level=0, calories=0):
        super().__init__(item_id, name, price)  # panggil constructor menuitem
        self._spicy_level = spicy_level  # atribut private spicy_level
        self._calories = calories        # atribut private calories

    # setter dan getter untuk spicy_level
    def set_spicy_level(self, spicy_level):
        self._spicy_level = spicy_level

    def get_spicy_level(self):
        return self._spicy_level

    # setter dan getter untuk calories
    def set_calories(self, calories):
        self._calories = calories

    def get_calories(self):
        return self._calories

    # override print_info dari class induk
    def print_info(self):
        info = self.base_info()
        info += f" | spicy level: {self._spicy_level} | calories: {self._calories}"
        print(info)
