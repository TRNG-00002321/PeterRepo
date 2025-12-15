
def read(filename):
    with open(filename) as f:
        line = f.readlines()
        return [float(line.strip()) for line in line]

def calc_total(filename):
    numbers = read(filename)
    return sum(numbers)