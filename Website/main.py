import requests
from flask import Flask, render_template, request

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/plan_picnic', methods=['POST'])
def plan_picnic():
    city = request.form['city']
    api_key = '24cc106027b8ac2e3798ced6395bb77e'
    url = f'http://api.openweathermap.org/data/2.5/forecast?q={city}&appid={api_key}'
    weather_data = requests.get(url).json()
    if 'list' in weather_data:  # add this check to see if the 'list' key exists
        list_of_days = weather_data['list']
        suitable_days = []
        for day in list_of_days:
            temp = day['main']['temp']
            humidity = day['main']['humidity']
            weather = day['weather'][0]['main']
            if 60 < temp < 85 and humidity < 50 and weather != 'Rain':
                suitable_days.append(day)
        return render_template('plan_picnic.html', suitable_days=suitable_days)
    else:
        return "Error: Unexpected weather data format"

if __name__ == '__main__':
    app.run(debug=True)
