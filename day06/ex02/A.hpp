/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:56:20 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/08 15:06:08 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include <iostream>
# include <string>

#include "Base.hpp"

class A : public Base
{

	public:

		A();
		// A( A const & src );
		~A();

		// A &		operator=( A const & rhs );

	private:

};

// std::ostream &			operator<<( std::ostream & o, A const & i );

#endif /* *************************************************************** A_H */