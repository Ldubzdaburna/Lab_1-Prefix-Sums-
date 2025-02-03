
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./include/doctest.h"
#include <iostream>

bool non_neg_prefix_sum(int list[], int length){
    int sum = 0;
    for(int i = 0; i<length; ++i){
        sum += list[i];
        if (sum < 0){
            return false;
        }
    }
    return true;
}

bool non_pos_prefix_sum(int list[], int length){
    int sum = 0;
    for(int i = 0; i<length; ++i){
        sum += list[i];
        if (sum > 0){
            return false;
        }
    }
    return true;
}

TEST_CASE("Testing non_neg_prefix_sum") {
    int list1[] = {1, -1, 1, -1};
    CHECK(non_neg_prefix_sum(list1, 4) == true);

    int list2[] = {1, -1, -1, 1};
    CHECK(non_neg_prefix_sum(list2, 4) == false);

    int list3[] = {1, -2, 1, 1};
    CHECK(non_neg_prefix_sum(list3, 4) == false);

    int list4[] = {0, 0, 0, 0};
    CHECK(non_neg_prefix_sum(list4, 4) == true);
}

TEST_CASE("Testing non_pos_prefix_sum") {
    int list1[] = {-1, 1, -1, 1};
    CHECK(non_pos_prefix_sum(list1, 4) == true);

    int list2[] = {-1, -1, -1, -1};
    CHECK(non_pos_prefix_sum(list2, 4) == true);

    int list3[] = {0, 0, 0, 0};
    CHECK(non_pos_prefix_sum(list3, 4) == true);

    int list4[] = {-2, 3, -3, 3};
    CHECK(non_pos_prefix_sum(list4, 4) == false);

    int list5[] = {-1, -2, -3, 0};
    CHECK(non_pos_prefix_sum(list5, 4) == true);
}