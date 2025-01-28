#pragma once

#include <iostream>
#include <chrono>

class Timer
{
public:

	inline void Start() { m_StartTimepoint = std::chrono::high_resolution_clock::now(); }

	double Stop()
	{
		auto endTimepoint = std::chrono::high_resolution_clock::now();
		auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTimepoint).time_since_epoch().count();
		auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimepoint).time_since_epoch().count();
		auto duration = end - start;
		double ms = duration * 0.001;
		return ms;
		//std::cout << duration << "us (" << ms << "ms)\n";
	}
	
private:
	std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTimepoint;
};

