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


int main(){
    int list1[]={1, -1, 1, -1};
    int length1 = sizeof(list1)/sizeof(list1[0]);
    std::cout<<"non_neg_prefix_sum for {1, -1, 1, -1}: "<<(non_neg_prefix_sum(list1, length1) ? "true" : "false")<<std::endl;

    int list2[]={1,-1,-1,1};
    int length2 = sizeof(list2)/sizeof(list2[0]);
    std::cout<<"non_neg_prefix_sum for {1, -1, -1, 1}: "<<(non_neg_prefix_sum(list2, length2) ? "true" : "false")<<std::endl;

    int list3[]={-1,1,-1,1};
    int length3 = sizeof(list3)/sizeof(list3[0]);
    std::cout<<"non_pos_prefix_sum for {-1, 1, -1, 1}: "<<(non_pos_prefix_sum(list3, length3) ? "true" : "false")<<std::endl;
}