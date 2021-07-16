orig = input()
modif = input()

for i in range(0, 10):
    if orig == modif or orig.swapcase() == modif or orig == modif + str(i) or orig == str(i) + modif:
        print("Yes")
        exit(0)

print("No")
