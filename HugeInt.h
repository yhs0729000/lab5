#ifndef HUGEINT_H
#define HUGEINT_H

#include <iostream>
#include <iomanip>

using std::ostream;
using std::istream;
class HugeInt {
	friend ostream &operator << ( ostream &, const HugeInt & );
        friend istream &operator >> ( istream &, HugeInt & );
public:
	HugeInt( long = 0 );
	HugeInt( const char * );

	HugeInt operator + ( const HugeInt & );
	HugeInt operator + ( int );
	HugeInt operator + ( const char * );

        HugeInt operator - ( const HugeInt & );
	HugeInt operator - ( int );
	HugeInt operator - ( const char * );
   
	

private:
	short integer[ 30 ];

};

#endif
