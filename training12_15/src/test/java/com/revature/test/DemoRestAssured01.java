package com.revature.test;

import io.restassured.RestAssured;
import io.restassured.http.ContentType;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.Test;

import static io.restassured.RestAssured.given;
import static org.hamcrest.Matchers.*;

public class DemoRestAssured01 {
    @BeforeAll
    static void setup(){
        RestAssured.baseURI = "https://jsonplaceholder.typicode.com/";
    }
    @AfterAll
    static void tearDown(){
        RestAssured.reset();
    }

    @Test
    public void firstRequestDemo(){


        given()
                .log().all()
        .when()
                .get("/posts/11")
        .then()
                .log().all()
                .statusCode(200);
    }

    @Test
    public void testParamsDemo(){

        given()
                .queryParam("userId", 1)
        .when()
                .get("/posts") // posts?userId=1
        .then()
                .log().all()
                .statusCode(200)
                .contentType(ContentType.JSON)
                .body("size()", greaterThan(0));
    }

    @Test
    public void testMatchesName(){

        given()
//                .queryParam("name", "Leanne Graham")
                .when()
                .get("/users/1") // posts?userId=1
                .then()
                .log().all()
                .statusCode(200)
                .contentType(ContentType.JSON)
                .body("name", equalTo("Leanne Graham"));
    }


}
