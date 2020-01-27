# Getting started with APIs. Retrieve data from online APIs.


import requests
import json
import serial 
import time


# Connect with Arduino
arduino = serial.Serial('/dev/cu.usbmodem14201', 9600)

# Check response code
response = requests.get("https://www.googleapis.com/books/v1/volumes?q=picture+of+dorian+gray")
#print(response.status_code)
if response.status_code != 200:
	# This means something went wrong.
	raise ApiError('GET /tasks/ {}'.format(resp.status_code))


# Get output as the author's name of the searched book
data = response.json()
obj = data['items']
authors = obj[0]['volumeInfo']['authors']
author = authors[0]
print(author)

# Send data to Arduino
while True:
#message = arduino.write(2.encode())
	message = arduino.write(b'hello')
	if message:
		print(message)
	time.sleep(1)