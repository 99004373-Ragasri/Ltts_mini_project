# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|test1|verify read file|Word is fetched	|Success|User can give input|Requirement based|
|test2|Verify chances scenario|User input|Get chances|User gets chances|Scenario based|
|test3|Verify the end result|User input|Lose/Won|Lose/Won|Boundary based|



## Table no: Low level test plan

| **Test ID** |  **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|------------|-------------------------------------------------------------------|------------|-------------|----------------|------------------|
|test1|Verify whether dictionary contains words|Checks dict|secret word is fetched|secret word is fetched|Requirement based|
|test2|Verify whether user entered input contains only alphabets|Within range|True|True|Scenario based|
|test3|Verify already guessed|Checking the input|Already guessed|Already guessed|Boundary based|

