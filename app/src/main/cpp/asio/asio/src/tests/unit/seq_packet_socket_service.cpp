//
// seq_packet_socket_service.cpp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2017 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

// Disable autolinking for unit tests.
#if !defined(BOOST_ALL_NO_LIB)
#define BOOST_ALL_NO_LIB 1
#endif // !defined(BOOST_ALL_NO_LIB)

// AssetsWarpper that header file is self-contained.
#include "asio/seq_packet_socket_service.hpp"

#include "unit_test.hpp"

ASIO_TEST_SUITE
(
  "seq_packet_socket_service",
  ASIO_TEST_CASE(null_test)
)