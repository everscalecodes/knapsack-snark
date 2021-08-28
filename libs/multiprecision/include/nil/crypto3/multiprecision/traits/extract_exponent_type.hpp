///////////////////////////////////////////////////////////////
//  Copyright 2012 John Maddock. Distributed under the Boost
//  Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at https://www.boost.org/LICENSE_1_0.txt

#ifndef BOOST_MATH_EXTRACT_EXPONENT_HPP
#define BOOST_MATH_EXTRACT_EXPONENT_HPP

#include <nil/crypto3/multiprecision/number.hpp>

namespace nil {
    namespace crypto3 {
        namespace multiprecision {
            namespace backends {

                template<class Backend, int cat>
                struct extract_exponent_type {
                    using type = int;
                };
                template<class Backend>
                struct extract_exponent_type<Backend, number_kind_floating_point> {
                    using type = typename Backend::exponent_type;
                };

            }    // namespace backends
        }        // namespace multiprecision
    }            // namespace crypto3
}    // namespace nil

#endif
