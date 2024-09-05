#include "MajorityElement.h"
#include "Rotate.h"
#include <vector>
#include <iostream>
using namespace std;


void TestRotate() {
    vector<int> nums = {1,2,3,4,5,6,7};
    Rotate* r = new Rotate();
    // r->rotate2(nums, 3);
    r->rotate(nums, 3);

}

void TestRotate2() {
    vector<int> nums = {1,2,3,4,5,6,7};
    Rotate* r = new Rotate();
    r->rotate2(nums, 3);
}
