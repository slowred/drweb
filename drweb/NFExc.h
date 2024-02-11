#pragma once

#include "includes.h"

template<class Key>
class NFExc : public not_found_exception<Key>
{
	Key nfKey;
public:
	explicit NFExc(const Key& key) : nfKey(key) {}

	const Key& get_key() const noexcept;
};

template<class Key>
const Key& NFExc<Key>::get_key() const noexcept
{
	return nfKey;
}