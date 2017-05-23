// Brian McIlwain
// LRU Cache 16.25 CTCI
// Design and build a "least recently used cache," which evicts the least recently used item. The cache
// should map keys to values (allowing you to insert and retrieve a value associated with a particular key)
// and be initialized with a max_size. When it is full, it should evict the least recently used item

#include<iostream>
#include<queue>
#include<string>
#include<unordered_map>

template <class kT, class vT> class lru_cache {
    std::queue<kT> order;
    std::unordered_map<kT, vT> data;
    int max_size, size;

void evict() {
    if (!order.empty())
    {
        kT front  = order.front();

        order.pop();
        data.erase(front);

        size--;

        return;
    }
}

public:
    lru_cache(int ms) {
        size = 0;
        max_size = ms;

        return;
    }

    void insert(kT key, vT value) {
        data[key] = value;
        order.push(key);

        if (size == max_size)
            evict();

        size++;

        return;
    }

    vT access(kT key) {
        return data[key];
    }
};

int main() {
    lru_cache<std::string, int> c(3);

    //c.insert("one", 1);
    //c.insert("two", 2);
    //c.insert("three", 3);
    //c.insert("four", 4);

    //std::cout << c.access("four") << " " << c.access("one");

    return 0;
}
