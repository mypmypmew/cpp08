#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>

class Span {
    private:
    unsigned int        _maxSize;
    std::vector<int>    _data;
    public:
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        void addNumber(int value);

        int shortestSpan() const;
        int longestSpan() const;

        template <typename It>
        void addNumber(It first, It last);
};

template <typename It>
void Span::addNumber(It first, It last) {
    size_t count = static_cast<size_t>(std::distance(first, last));
    if (_data.size() + count > static_cast<size_t>(_maxSize))
        throw std::exception();
    _data.insert(_data.end(), first, last);
}

#endif