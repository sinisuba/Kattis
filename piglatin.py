vowels = ['a', 'e', 'i', 'o', 'u', 'y']
strings = []

while True:
    try:
        ulaz = input().split()
    except EOFError:
        break
    strings.append(ulaz)

for i in range(0, len(strings)):
    for string in strings[i]:
        if string[0] not in vowels:
            add_to_end = ""
            for j in range(0, len(string)):
                if string[j] not in vowels:
                    add_to_end += string[j]
                else:
                    break
            string = string[len(add_to_end):]
            print(string + add_to_end + 'ay', end=' ')
        else:
            print(string + 'yay', end=' ')
    print()
