
# 65-90 = A-Z
# 48-57 = 0-9
# 97-122 = a-z

def hash_me(unhashed):
    big = [chr(exp) for exp in range(65, 91)]
    small = [chr(x) for x in range(97, 123)]
    num = [chr(x) for x in range(48, 58)]
    every = "".join(big+small+num)


    dic = {key+1:every[key] for key in range(0,len(every))}

    hash_input = [ord(word)**5.423 for word in unhashed]    
    hashed = ""

    for value in hash_input:
        temp = value
        while temp>=1:
            hashed+=dic.get(int(temp*123987457123%len(dic))+1)
            temp/=len(dic)
            
    print(hashed)

hash_me("Robby Clifford M Garcia")