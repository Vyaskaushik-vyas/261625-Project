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



//gcc -I inc -I unity unity/unity.c src/create_ll.c src/display_ll.c src/insert_end.c src/delete_box.c src/avg_volume.c src/count_by_color.c src/find_by_id.c src/min_max_v_diff.c src/find_max_height.c src/update_weight.c test/test.c -o testrun.exe   
//© 2021 GitHub, Inc.