
class Vehicle:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
    
    def display_info(vehicle_type, make, model, year, num_doors = False, has_sidecar = False):
        print(f"{vehicle_type.title()} Information:")
        print(f"Make: {make}")
        print(f"Model: {model}")
        print(f"Year: {year}")
        if num_doors:
            print(f"Number of Doors: {num_doors}")
        if has_sidecar:
            print(f"Has Sidecar: {has_sidecar}")

class Car(Vehicle):
    def __init__(self, make, model, year, num_doors):
        self.make = make
        self.model = model
        self.year = year
        self.num_doors = num_doors

class Motorcycle(Vehicle):
    def __init__(self, make, model, year, has_sidecar):
        self.make = make
        self.model = model
        self.year = year
        self.has_sidecar = has_sidecar
    

car1 = Car("Toyota", "Camry", 2022, 4)
motorcycle1 = Motorcycle("Harley-Davidson", "Sportster", 2021, has_sidecar=True)

Vehicle.display_info("Car", car1.make, car1.model, car1.year, num_doors=car1.num_doors)
Vehicle.display_info("Motorcycle", motorcycle1.make, motorcycle1.model, motorcycle1.year, has_sidecar=motorcycle1.has_sidecar)