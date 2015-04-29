#include <iostream>
#include <random>

using namespace std;
constexpr uint64_t total_points_count = 100000000;

int main()
{
	uint64_t inner_points_count = 0;
	double x, y;

	mt19937_64 rand(0); //mt19937_64 rand((random_devece())());
	uniform_real_distribution<double> distributor(0.0, 1.0);

	for(uint64_t i = 0; i < total_points_count; ++i){
		x = distributor(rand);
		y = distributor(rand);
		if(x*x + y*y <= 1.0)
			++inner_points_count;
	}

	cout << 4.0 * inner_points_count / total_points_count << endl;
}

