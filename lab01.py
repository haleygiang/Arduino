# Information Visualization
# 100 Sales Records

import csv 
import plotly.express as px
import numpy as np
import matplotlib.pyplot as plt
import scipy as sp

# Download and read the csv dataset
with open('100 Sales Records.csv') as csv_file:
	csv_reader = csv.reader(csv_file, delimiter=',')
	line_count = 0

	for row in csv_reader:
		if line_count == 0:
			#print(f'Column names are {", ".join(row)}')
			line_count += 1
		else:
			#print(f'Country: {row[1]}, Total Revenue: {row[11]}, Total Cost: {row[12]}, Total Profit: {row[13]}.')
			line_count += 1
	#print(f'Processed {line_count} lines.')

# Visualization: Bar Graph
# x-coordinates of left sides of bars  
left = [1, 2, 3] 
  
# heights of bars 
height = [2533654.00,1582243.50,951410.50] 
  
# labels for bars 
tick_label = ['Total Revenue', 'Total Cost', 'Total Profit'] 
  
# plotting a bar chart 
plt.bar(left, height, tick_label = tick_label, 
        width = 0.8, color = ['red', 'green', 'blue']) 
  
# naming the x-axis 
plt.xlabel('Tuvalu') 
# naming the y-axis 
plt.ylabel('Money') 
# plot title 
plt.title('Sales Records') 
# function to show the plot 
plt.show()




