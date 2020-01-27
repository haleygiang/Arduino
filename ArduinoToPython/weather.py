import requests

url = "https://community-open-weather-map.p.rapidapi.com/weather"

querystring = {"callback":"test","id":"2172797","units":"%22metric%22 or %22imperial%22","mode":"xml%2C html","q":"London%2Cuk"}

headers = {
    'x-rapidapi-host': "community-open-weather-map.p.rapidapi.com",
    'x-rapidapi-key': "9bccae45femshad9012a7b08074fp192680jsn4d62d5118f95"
    }

response = requests.request("GET", url, headers=headers, params=querystring)

print(response.text)