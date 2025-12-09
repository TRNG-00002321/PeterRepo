package com.revature.mock;

public class WeatherService {


    //dependency injection: If this service is down, getWeatherMessage will fail
    private WeatherApiClient weatherApiClient;

    public WeatherService(WeatherApiClient weatherApiClient){
        this.weatherApiClient = weatherApiClient;
    }


    //this code is DEPENDENT on weatherApiClient, injected using constructor
    public String getWeatherMessage(String city){

        //call fetchTemp of our interface
        double temperature = weatherApiClient.fetchTemperature(city);

        if(temperature > 30){
            return "It's Hot in " + city;
        }
        else if(temperature > 15){
            return "It's warm in " + city;
        }
        else{
            return "It's cold in " + city;
        }
    }

    public void refresh(String city){
        weatherApiClient.fetchTemperature(city);
    }


}
