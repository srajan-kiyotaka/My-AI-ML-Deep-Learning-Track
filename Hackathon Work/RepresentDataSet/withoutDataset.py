import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
import seaborn as sns

print("~> Plotting Line Graph")
x = [1, 2, 3, 4, 5]
y = [2, 4, 6, 8, 10]

plt.plot(x, y)
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.title('Line Graph Example')
plt.show()


print("~> Plotting Bar Chart Graph")
# Create data for the bar chart
labels = ['A', 'B', 'C', 'D']
data = [10, 20, 30, 40]

# Plot bar chart
plt.bar(labels, data, color='g')
plt.xlabel('Labels')
plt.ylabel('Data')
plt.title('Bar Chart')
plt.show()

# Create data for the histogram
data = np.random.normal(100, 20, 1000)

print("~> Plotting  Histogram Graph")
# Plot histogram
plt.hist(data, bins=30, color='r')
plt.xlabel('Data')
plt.ylabel('Frequency')
plt.title('Histogram')
plt.show()

# Create data for the heatmap
data = np.random.rand(10, 10)

print("~> Plotting HeatMap Graph")
# Plot heatmap
plt.imshow(data, cmap='hot')
plt.colorbar()
plt.title('Heatmap')
plt.show()
