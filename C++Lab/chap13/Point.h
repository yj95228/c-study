#pragma once
template<class T>
class Point {
private:
	T x, y;
public:
	Point(T x = 0, T y = 0);
	void print() const;
};