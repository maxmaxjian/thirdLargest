#include <iostream>
#include <vector>
#include <climits>

using std::vector;

class solution {
  public:
    int thirdLargest(const vector<int> & nums) {
        int largest = INT_MIN, second = INT_MIN, third = INT_MIN;
        for (auto it = nums.begin(); it != nums.end(); ++it) {
            if (*it > largest)
                largest = *it;
            else if (*it > second) {
                second = *it;
            }
            else if (*it > third) {
                third = *it;
            }
        }

        if (third != INT_MIN)
            return third;
        else
            return largest;
    }
};

int main() {
    // vector<int> nums{3,2,1};
    // vector<int> nums{1,2};
    vector<int> nums{2,2,3,1};

    solution soln;
    int third = soln.thirdLargest(nums);
    std::cout << "The third largest number is:\n"
              << third << std::endl;
}
