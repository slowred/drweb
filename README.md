RU:
Необходимо реализовать класс контейнера, реализующий интерфейс dictionary и способный выбросить исключение, реализующее интерфейс not_found_exception.
При разработке допускается использовать STL. Кроме этого, внутренняя реализация ничем не ограничена.

ENG:
It is necessary to implement a container class that implements the idictionary interface and is able to throw an exception that implements the not_found_exception interface.
It is allowed to use STL during development. In addition, the internal implementation is not limited by anything.
```
template<class Key, class Value>
class dictionary
{
public:
    virtual ~dictionary() = default;

    virtual const Value& get(const Key& key) const = 0;
    virtual void set(const Key& key, const Value& value) = 0;
    virtual bool is_set(const Key& key) const = 0;
};

template<class Key>
class not_found_exception : public std::exception
{
public:
    virtual const Key& get_key() const noexcept = 0;
};
```
