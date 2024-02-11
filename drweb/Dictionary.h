#pragma once

#include "includes.h"

template<class Key, class Value>
class Dictionary : public dictionary<Key, Value>
{
    std::unordered_map <Key, Value> data;

public:
    const Value& get(const Key& key) const;
    void set(const Key& key, const Value& value);
    bool is_set(const Key& key) const;
};

template<class Key, class Value>
const Value& Dictionary<Key, Value>::get(const Key& key) const
{
    auto it = data.find(key);
    if (it != data.end()) {
        return it->second;
    }
    else {
        throw NFExc<Key>(key);
    }
}

template<class Key, class Value>
void Dictionary<Key, Value>::set(const Key& key, const Value& value)
{
    data[key] = value;
}

template<class Key, class Value>
bool Dictionary<Key, Value>::is_set(const Key& key) const
{
    return data.find(key) != data.end();
}
