#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <string>


int main()
{
    // ************************************LEVEL 0***********************************************
    int positive_sum(const std::vector<int> arr); {
        return std::accumulate(arr.begin(), arr.end(), 0, [](int x, int y) {if (x >= 0) return x;});
    }


   //  2 wersja


    int positive_sum(const std::vector<int> arr); {
        int count{ 0 };
        for_each(arr.begin(), arr.end(), [&count](int a) {if (a > 0) count += a;});
        return count;

    }

    //************************************* LEVEL 1 *************************************************************


    std::vector<int> MonkeyCount(int n); {
        std::vector<int> v(n);
        std::generate(v.begin(), v.end(), [i = 0]() mutable { return ++i;});
        
    }

    //***************************************LEVEL 2***************************


    std::vector<int> digitize(const int& n); {
        std::string val = std::to_string(n);
        std::vector<int> res(val.length());
        std::transform(val.begin(), val.end(),res.begin(),[](char c) {return c - '0';});
        
    }

  //************************************* LEVEL 3 ********************************************

    int calc(const std::string & x) {
        std::vector<int> vec;
        for (auto zz : x)
        {
            int c = zz;
            vec.emplace_back(c % 10);
            vec.emplace_back(c / 10);
        }
        std::vector<int> newvec{ vec };
        int rem = 0;
        std::replace(newvec.begin(), newvec.end(), 7, 1);
        for (int it = 0; it < vec.size(); ++it)
            rem += vec[it] - newvec[it];

        return rem;
    }
}
