package com.revature.mock;

import org.junit.jupiter.api.Test;
import org.mockito.Mockito;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class WeatherServiceTestStubbingDemo {


    @Test
    public void testWeatherServiceWithStubbing(){
        //need double for weatherapiclient
        WeatherApiClient apiClient = Mockito.mock(WeatherApiClient.class);
        //this is our test double, mocking the dependency


        //STUBBING 35.0 when we see Plano
        //define what the mock should return in x case
        Mockito.when(apiClient.fetchTemperature("Plano")).thenReturn(35.0);

        WeatherService wS = new WeatherService(apiClient);
        String mess = wS.getWeatherMessage("Plano");
        assertEquals("It's Hot in Plano", mess);

    }

}
