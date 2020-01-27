# Getting started with APIs. Retrieve data from online APIs.


import requests
import json

response = requests.get("http://api.open-notify.org/astros.json")

print(response.status_code)


if response.status_code != 200:
	# This means something went wrong.
	raise ApiError('GET /tasks/ {}'.format(resp.status_code))

data = response.json()
#print(data['people'])

for person in data['people']:
	print(person['name'])


#def jprint(obj):
	# create a formatted string of the Python JSON object
	#text = json.dumps(obj, sort_keys=True, indent=4)
	#print(text.keys())

	#print(response.json()[0])
	#for person in response.json()[1]:
		#print('{} {}'.format(person['craft']))
		#print(person)

#jprint(response.json())

#for flights in resp.json():
	#print(flights)
	#print('{} {}'.format(todo_item['id'], todo_item['summary']))