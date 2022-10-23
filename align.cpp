//
// (C) Copyright 2022 by Asad Mehmood Shah , http://www.debugcpp.com
// 


#include <iostream>
#include <string>
#include <memory>
#include <sstream>

using namespace std;

struct cardDeck
{
    char cardVal[8];
    //char h;
};

int main( void )
{
    alignas( 16 ) cardDeck deck1;
    alignas( 16 ) cardDeck deck2;
    alignas( 16 ) cardDeck deck3;
    cardDeck deck4;
    cardDeck deck5;

    cout << "size of deck 1 : " << sizeof( deck1 ) << endl;
    cout << "size of deck 2 : " << sizeof( deck2 ) << endl;
    cout << "size of deck 3 : " << sizeof( deck3 ) << endl;
    cout << "size of deck 4 : " << sizeof( deck4 ) << endl;
    cout << "size of deck 5 : " << sizeof( deck5 ) << endl;

    cout << "address of deck 1 : " << reinterpret_cast< int64_t >( std::addressof( deck1 ) ) << endl;
    cout << "address of deck 2 : " << reinterpret_cast< int64_t >( std::addressof( deck2 ) ) << endl;
    cout << "address of deck 3 : " << reinterpret_cast< int64_t >( std::addressof( deck3 ) ) << endl;
    cout << "address of deck 4 : " << reinterpret_cast< int64_t >( std::addressof( deck4 ) ) << endl;
    cout << "address of deck 5 : " << reinterpret_cast< int64_t >( std::addressof( deck5 ) ) << endl;

    cout << endl << "difference between deck 1 and 2 :" << reinterpret_cast< int64_t >( std::addressof( deck2 ) ) - reinterpret_cast< int64_t >( std::addressof( deck1 ) );
    cout << endl << "difference between deck 2 and 3 :" << reinterpret_cast< int64_t >( std::addressof( deck3 ) ) - reinterpret_cast< int64_t >( std::addressof( deck2 ) );
    cout << endl << "difference between deck 3 and 4 :" << reinterpret_cast< int64_t >( std::addressof( deck4 ) ) - reinterpret_cast< int64_t >( std::addressof( deck3 ) );
    cout << endl << "difference between deck 4 and 5 :" << reinterpret_cast< int64_t >( std::addressof( deck5 ) ) - reinterpret_cast< int64_t >( std::addressof( deck4 ) );

    return 0;
}