package com.revature.mock;

import org.junit.jupiter.api.Test;
import org.mockito.Mockito;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class WeatherServiceTestMock {


    @Test
    public void testWeatherServiceWithStubAndMock(){
        //need double for weatherapiclient
        WeatherApiClient apiClient = Mockito.mock(WeatherApiClient.class);
        //this is our test double, mocking the dependency


        WeatherService wS = new WeatherService(apiClient);
        wS.refresh("Frisco");
        //stub assertion

        //assert behaviour
        Mockito.verify(apiClient, Mockito.times(1)).fetchTemperature("Frisco");

    }
}
