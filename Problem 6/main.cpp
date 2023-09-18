#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <unordered_map>

using namespace std;

using tab_t = std::vector<std::vector<std::string>>;
tab_t Employee {
/************************
 * Table Form:          *
 * ID  Name  Department *
 ************************/

          {"XDFSE1", "Jack" , "Electronics"}
        , {"XDVBA2", "Mary"   , "Aesthetics"}

};
tab_t Linkedlist{
        {"0"}, {"1"}, {"2"}, {"3"}, {"4"}, {"5"}, {"6"}, {"7"}, {"8"}, {"9"}, {"10"}, {"11"}
};

tab_t Transaction {
/**********************************
 * Table Form:                    *
 * Sold Product  Sold By  Sold To *
 **********************************/

          {"TV" , "XDFSE1"    , "Mark"}
        , {"Radio" , "XDFSE1"    , "Susan"}
        , {"ScO"   , "XDVBA2"    , "Lisa"}

};

tab_t INNERJoin(const tab_t& a, size_t numA, const tab_t& b, size_t numB) {
    unordered_multimap<string, size_t> hashmap;
    //unordered_multimap<string , int> hashmap2;
    for(size_t i = 0; i < a.size(); ++i) {
        hashmap.insert(make_pair(a[i][numA], i));
    }
    tab_t result;
    for(size_t i = 0; i < b.size(); ++i) {
        auto range = hashmap.equal_range(b[i][numB]);
        for(auto it = range.first; it != range.second; ++it) {
            tab_t::value_type row;
            row.insert(row.end() , Linkedlist[it->second].begin(), Linkedlist[it->second].end());
            row.insert(row.end() , b[i].begin(), b[i].end());
            result.push_back(move(row));
        }
    }
    return result;
}

ostream& operator<<(std::ostream& output, const tab_t& t) {
    for(size_t i = 0; i < t.size(); ++i) {
        output << i << ":";
        for(const auto& e : t[i])
            output << '\t' << e;
        output << std::endl;
    }
    return output;
}

int main()
{
    using namespace std;
    int ret = 0;
    cout << "Employees: " << endl;
    cout << "        ID      Name    Department" <<endl;
    cout << Employee << endl;
    cout << "Transaction: " << endl;
    cout << "      Product  Sold By Sold To" <<endl;
    cout << Transaction << endl;
    auto tab3 = INNERJoin(Employee, 0, Transaction, 1);
    cout << "Joined tables: " << endl;
    cout << "      Index   Product  Sold By Sold To " <<endl;
    cout << tab3 << endl;
    return ret;
}