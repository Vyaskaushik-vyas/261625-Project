#include "cable.h"
#include "unity.h"

#define PROJECT_NAME  "Cable"

void test_calculate_ampacity(void);
void test_calculate_breaker_current(void);
void test_calculate_derating_temp(void);
void test_calculate_derating_depth(void);
void test_calculate_total_derating(void);
void test_calculate_voltagedrop(void);
void test_conductor_size(void);

/* Required by the unity test framework */
void setUp()
{}
/* Required by the unity test framework */
void tearDown()
{}
int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_calculate_ampacity);
    RUN_TEST(test_calculate_breaker_current);
    RUN_TEST(test_calculate_derating_depth);
    RUN_TEST(test_calculate_derating_temp);
    RUN_TEST(test_calculate_total_derating);
    RUN_TEST(test_calculate_voltagedrop);
    RUN_TEST(test_conductor_size);
   


    /* Close the Unity Test Framework */
    return UNITY_END();
}

void test_calculate_ampacity(void)
{
    TEST_ASSERT_EQUAL(278.241089, calculate_ampacity(0.415,200));
}
void test_calculate_breaker_current(void)
{
    TEST_ASSERT_EQUAL(20,calculate_breaker_current(15));
    TEST_ASSERT_EQUAL(40,calculate_breaker_current(25));
    TEST_ASSERT_EQUAL(60,calculate_breaker_current(45));
    TEST_ASSERT_EQUAL(100,calculate_breaker_current(75));
    TEST_ASSERT_EQUAL(250,calculate_breaker_current(190));
    TEST_ASSERT_EQUAL(320,calculate_breaker_current(260));
    TEST_ASSERT_EQUAL(400,calculate_breaker_current(390));
    TEST_ASSERT_EQUAL(550,calculate_breaker_current(420));
    TEST_ASSERT_EQUAL(600,calculate_breaker_current(570));
    TEST_ASSERT_EQUAL(700,calculate_breaker_current(660));
}

void test_calculate_derating_depth(void)
{
    TEST_ASSERT_EQUAL(0.99, calculate_derating_depth(99,14));
    TEST_ASSERT_EQUAL(0.98, calculate_derating_depth(99,75));
    TEST_ASSERT_EQUAL(0.97, calculate_derating_depth(99,320));
    TEST_ASSERT_EQUAL(0.98, calculate_derating_depth(120,14));
    TEST_ASSERT_EQUAL(0.97, calculate_derating_depth(120,75));
    TEST_ASSERT_EQUAL(0.96, calculate_derating_depth(120,120));
    TEST_ASSERT_EQUAL(0.95, calculate_derating_depth(190,14));
    TEST_ASSERT_EQUAL(0.93, calculate_derating_depth(190,75));
    TEST_ASSERT_EQUAL(0.91, calculate_derating_depth(190,120));
}

void test_calculate_derating_temp(void)
{
    TEST_ASSERT_EQUAL(1.12, calculate_derating_temp(10));
    TEST_ASSERT_EQUAL(1.04, calculate_derating_temp(20));
    TEST_ASSERT_EQUAL(0.96, calculate_derating_temp(30));
    TEST_ASSERT_EQUAL(0.91, calculate_derating_temp(40));
    TEST_ASSERT_EQUAL(0.82, calculate_derating_temp(50));
    
}

void test_calculate_total_derating(void)
 {
    TEST_ASSERT_EQUAL(217.28, calculate_total_derating(1.12,0.97,200));   
 }

 void test_calculate_voltagedrop(void)
 {
     TEST_ASSERT_EQUAL(0.30, calculate_voltagedrop(278.2,415,0.85,25,0.08,0.071));

 }
 void test_conductor_size(void)
 {
     TEST_ASSERT_EQUAL(185, conductor_size('C',280));
    TEST_ASSERT_EQUAL(240, conductor_size('C',350));
    TEST_ASSERT_EQUAL(300, conductor_size('C',390));
    TEST_ASSERT_EQUAL(400, conductor_size('C',490));
    TEST_ASSERT_EQUAL(500, conductor_size('C',550));    
    TEST_ASSERT_EQUAL(630, conductor_size('C',750.));  
     TEST_ASSERT_EQUAL(185, conductor_size('A',250));
    TEST_ASSERT_EQUAL(240, conductor_size('A',290));
    TEST_ASSERT_EQUAL(300, conductor_size('A',320));
    TEST_ASSERT_EQUAL(400, conductor_size('A',370));
    TEST_ASSERT_EQUAL(500, conductor_size('A',430));    
    TEST_ASSERT_EQUAL(630, conductor_size('A',500));        
 }








//gcc -I inc -I unity unity/unity.c src/create_ll.c src/display_ll.c src/insert_end.c src/delete_box.c src/avg_volume.c src/count_by_color.c src/find_by_id.c src/min_max_v_diff.c src/find_max_height.c src/update_weight.c test/test.c -o testrun.exe   
//© 2021 GitHub, Inc.