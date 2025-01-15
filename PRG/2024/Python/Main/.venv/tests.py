

history = ([], set({}))
amount = 0
while True:
    wallet = input(f"Ammount: {amount:02} : (f2/add)(f1/decrease)(f5/history)(f4/exit): ")
    match wallet:
        case 'f2':
            history[0].append(input("Enter ammount or press f3 to cancel: "))
            temp = history[0].pop()
            if temp == "f3":
                continue
            history[0].append(int(temp))
            amount += int(temp)
        case 'f1':
            temp = input("Input ammount to decrease or press f3 to cancel: ")
            if temp == "f3":
                continue
            amount -= int(temp)
            history[1].add(int(temp))
        case 'f5':
            print(f"history : {history}")
        case 'f4':
            break