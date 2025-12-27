#include "Span.hpp"
#include <algorithm>

Span::Span(unsigned int len) : _maxSize(len), _data() {}

Span::Span(const Span& other): _maxSize(other._maxSize), _data(other._data) {}

Span& Span::operator=(const Span& other) {
    if (this == &other) {
        return *this;
    }
    _maxSize = other._maxSize;
    _data = other._data;
    return *this;
}

Span::~Span() {}

void Span::addNumber(int value) {
    if (_data.size() >= static_cast<size_t>(_maxSize))
        throw std::exception();
    _data.push_back(value);
}

int Span::longestSpan() const {
    if (_data.size() < 2)
        throw std::exception();

    int minVal = *std::min_element(_data.begin(), _data.end());
    int maxVal = *std::max_element(_data.begin(), _data.end());
    return maxVal - minVal;
}

int Span::shortestSpan() const {
    if (_data.size() < 2)
        throw std::exception();
    
    std::vector<int> tmp = _data;
    std::sort(tmp.begin(), tmp.end());

    int best = tmp[1] - tmp[0];
    for (size_t i = 2; i < tmp.size(); ++i) {
        int diff = tmp[i] - tmp[i - 1];
        if (diff < best) {
            best = diff;
        }
    }
    return best;

}