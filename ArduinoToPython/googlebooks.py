# Getting started with APIs. Retrieve data from online APIs.


import requests
import json
import serial 
import time


# Connect with Arduino
arduino = serial.Serial('/dev/cu.usbmodem14201', 9600)

# Check response code
response = requests.get("https://www.googleapis.com/books/v1/volumes?q=becoming")

if response.status_code != 200:
	
	# This means something went wrong.
	raise ApiError('GET /tasks/ {}'.format(resp.status_code))


# Get output as the author's name of the searched book
data = response.json()
obj = data['items']
authors = obj[0]['volumeInfo']['authors']
author = authors[0].split()
first = author[0]
last = author[1]

print(first, last)

# Send data to Arduino
for i in range(2):
	arduino.write(first.encode())

	arduino.write(' '.encode())

	arduino.write(last.encode())

	time.sleep(1)