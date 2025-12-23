package com.revature.test;

import com.revature.demo.Post;
import io.restassured.RestAssured;
import io.restassured.builder.RequestSpecBuilder;
import io.restassured.builder.ResponseSpecBuilder;
import io.restassured.http.ContentType;
import io.restassured.response.Response;
import io.restassured.specification.RequestSpecification;
import io.restassured.specification.ResponseSpecification;
import org.junit.jupiter.api.*;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.CsvFileSource;
import org.junit.jupiter.params.provider.CsvSource;
import org.junit.jupiter.params.provider.ValueSource;

import static io.restassured.RestAssured.given;
import static org.hamcrest.Matchers.*;

public class DemoRestCRUD {
    //do post get update delete

    static RequestSpecification requestSpec;
    static ResponseSpecification responseSpec;

    @BeforeAll
    static void setUp(){
        RestAssured.baseURI="https://jsonplaceholder.typicode.com/";
        requestSpec = new RequestSpecBuilder()
                .setContentType(ContentType.JSON)
                .setAccept(ContentType.JSON)
                .addHeader("X-Custom-Header", "RestAssuredDemo")
                .build();

        responseSpec=new ResponseSpecBuilder()
                .expectContentType(ContentType.JSON)
                .expectResponseTime(lessThan(5000L))
                .build();
    }


    @AfterAll
    static void tearDown(){
        RestAssured.reset();
    }


    @Test
    public void getPost(){
        given()
                .spec(requestSpec)
                .when()
                .get("/posts/1")
                .then()
                .spec(responseSpec)
                .statusCode(200);
    }

    @Test
    @DisplayName("CREATE - POST new post")
    void createPostReturnsPositive() {
        // Request body as JSON string
        String requestBody = """
            {
                "title": "Test Post from REST Assured",
                "body": "This post was created during our demo",
                "userId": 1
            }
            """;

        Response response = given()
                .spec(requestSpec)
                .body(requestBody)
                .when()
                .post("/posts")
                .then()
                .statusCode(201)  // Created
                .body("title", equalTo("Test Post from REST Assured"))
                .body("body", containsString("demo"))
                .body("userId", equalTo(1))
                .body("id", notNullValue())
                .extract()
                .response();

        // Store ID for later tests
        int createdPostId = response.jsonPath().getInt("id");
        System.out.println("Created post with ID: " + createdPostId);
    }

    @Test
    public void testSerialObject(){
        Post newPost = new Post(1, "EggTitle", "Eggbody");

        Response response = given()
                .spec(requestSpec)
                .body(newPost)
                .when()
                .post("/posts")
                .then()
                .statusCode(201)  // Created
                .body("title", equalTo("EggTitle"))
                .body("body", containsString("Eggbody"))
                .body("userId", equalTo(1))
                .body("id", notNullValue())
                .extract()
                .response();

        // Store ID for later tests
        int createdPostId = response.jsonPath().getInt("id");
        System.out.println("Created post with ID: " + createdPostId);
    }

    @ParameterizedTest(name = "GET /posts/{0} returns 200")
    @ValueSource(ints = {1, 2, 3, 4, 5})
    void getPost_variousIds_return200(int postId) {
        given()
                .spec(requestSpec)
                .when()
                .get("/posts/" + postId)
                .then()
                .statusCode(200)
                .body("id", equalTo(postId));
    }

    @ParameterizedTest(name = "GET /posts/{0} returns {1}")
    @CsvSource({
            "1, Leanne Graham",
            "2, Ervin Howell",
            "3, Clementine Bauch",
            "4, Patricia Lebsack",
            "5, Chelsey Dietrich"
    })
    @DisplayName("Validate user names")
    void getUserbyCSV(int usId, String name){
        given()
                .spec(requestSpec)
                .when()
                .get("/users/" + usId)
                .then()
                .statusCode(200)
                .body("name", equalTo(name));
    }




    @Test
    public void testPutOperation(){

        Post newPost = new Post(1, "EggTitle", "Eggbody");

        Response resp = given()
                .spec(requestSpec)
                .body(newPost)
                .when()
                .put("/posts/1")
                .then()
                .statusCode(200)
                .body("title", equalTo("EggTitle"))
                .body("body", containsString("Eggbody"))
                .body("userId", equalTo(1))
                .body("id", notNullValue())
                .extract()
                .response();
        int createdPostId = resp.jsonPath().getInt("id");
        System.out.println("Put ID: " + createdPostId);

    }

    @Test
    public void testDelOperation(){
        given()
                .spec(requestSpec)
                .when()
                .delete("/posts/1")
                .then()
                .spec(responseSpec)
                .statusCode(200);

    }

    @ParameterizedTest(name = "{0} /posts/{2} returns {3}")
    @CsvFileSource(resources = "/data.csv")
    void manyTest(String method, String urlExt, int id, int expStat){
        given()
                .spec(requestSpec)
                .when()
                .request(method, urlExt+ "/" + id)
                .then()
                .statusCode(expStat)
                .extract();

    }

    void allTest(){
        Post newPost = new Post(1, "EggTitle", "Eggbody");
        Response resp = given()
                .spec(requestSpec)
                .body(newPost)
                .when()
                .put("/posts/1")
                .then()
                .statusCode(201)
                .extract()
                .response();
        resp = given()
                .spec(requestSpec)
                .when()
                .get("/posts/1")
                .then()
                .statusCode(200)
                .extract()
                .response();
        resp = given()
                .spec(requestSpec)
                .body(newPost)
                .when()
                .post("/posts")
                .then()
                .statusCode(200)  // Created
                .extract()
                .response();
        given()
                .spec(requestSpec)
                .when()
                .delete("/posts/1")
                .then()
                .spec(responseSpec)
                .statusCode(200);



    }


}
