import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import seaborn as sns
from sklearn.datasets import load_iris

# Load iris dataset
iris = load_iris()
data = iris.data
target = iris.target

# Create pandas dataframe from iris dataset
df = pd.DataFrame(data, columns=iris.feature_names)
df['target'] = target

# Line graph
plt.figure()
plt.plot(df['sepal length (cm)'], label='Sepal Length')
plt.plot(df['sepal width (cm)'], label='Sepal Width')
plt.legend()
plt.xlabel('Index')
plt.ylabel('Length/Width (cm)')
plt.title('Line Graph of Sepal Length and Width')

# Bar chart
plt.figure()
df.groupby('target').mean().plot(kind='bar')
plt.xlabel('Target')
plt.ylabel('Length/Width (cm)')
plt.title('Bar Chart of Mean Length and Width by Target')

# Histogram
plt.figure()
sns.distplot(df['sepal length (cm)'], bins=10)
plt.xlabel('Sepal Length (cm)')
plt.ylabel('Frequency')
plt.title('Histogram of Sepal Length')

# Heatmap
plt.figure()
sns.heatmap(df.corr(), annot=True)
plt.title('Heatmap of Correlation between Features')

# Show the plots
plt.show()
