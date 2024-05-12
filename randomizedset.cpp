#include <iostream>
#include <unordered_set>
#include <vector>
#include <random>
class RandomizedSet {
public:
    std::unordered_set<int> set;
    std::vector<int> keys;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        // insert value into set
        // append key to vector
    
        return set.emplace(val).second;
    }
    
    bool remove(int val) {
        // remove value from set
        // remove hash from vector
        return set.erase(val);
    }
    
    int getRandom() {
        // get size of vector
        // pick random number in range of size - 1
        std::random_device rd; // obtain a random number from hardware
        std::mt19937 gen(rd()); // seed the generator
        std::uniform_int_distribution<> distr(0, keys.size() - 1); // define the range
        return keys[distr(gen)]
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
