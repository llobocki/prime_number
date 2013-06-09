#include <vector>
#include <math.h>

std::vector<int> prime_number ( int n )
{
	std::vector<int> v ( 3 );
	v[2] = 2;
	int k = 3;
	while ( k <= n )
		v.push_back ( k++ );

	int x = 2;

	for ( int i = 2; v[i] <= sqrt ( n ); ++i ) {
		x = 2;
		for ( int j = i*x; j <= n; j = i*( ++x ) ) {
			if (v[j] != 0) v[j] = 0;
		}
	}

	std::vector<int> y;
	for ( int i = 0; i < v.size(); ++i )
		if ( v[i] != 0 )
			y.push_back(v[i]);
	return y;
}