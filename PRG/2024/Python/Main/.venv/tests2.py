import random

l = ["shit", "pee"]

for i in range(10):
    j = random.choice(l)
    if j == "shit":
        print(f"{j } Shit")
    else:
        print(f"{j} Fuck")