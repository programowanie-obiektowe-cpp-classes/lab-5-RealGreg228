#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> yes_or_no;
    for(auto& person : people){
        person.birthday();
        if (person.isMonster()) {
            yes_or_no.push_back('n');
        } else {
            yes_or_no.push_back('y');
        }
    }
    std::reverse(yes_or_no.begin(), yes_or_no.end());
    return yes_or_no;
}
