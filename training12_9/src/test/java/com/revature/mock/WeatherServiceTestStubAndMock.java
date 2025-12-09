package com.revature.mock;

import org.junit.jupiter.api.Test;
import org.mockito.Mockito;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class WeatherServiceTestStubAndMock {


    @Test
    public void testWeatherServiceWithStubAndMock(){
        //need double for weatherapiclient
        WeatherApiClient apiClient = Mockito.mock(WeatherApiClient.class);
        //this is our test double, mocking the dependency

        //STUBBING 35.0 when we see Plano
        //define what the mock should return in x case
        Mockito.when(apiClient.fetchTemperature("Plano")).thenReturn(36.0);

        WeatherService wS = new WeatherService(apiClient);
        String mess = wS.getWeatherMessage("Plano");
        //stub assertion
        assertEquals("It's Hot in Plano", mess);

        //assert behaviour
        Mockito.verify(apiClient, Mockito.times(1)).fetchTemperature("Plano");

    }

}
