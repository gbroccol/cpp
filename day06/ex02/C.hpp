/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:07:40 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/08 15:08:34 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include <iostream>
# include <string>

#include "Base.hpp"

class C : public Base
{

	public:

		C();
		// C( C const & src );
		~C();

		// C &		operator=( C const & rhs );

	private:

};

// std::ostream &			operator<<( std::ostream & o, C const & i );

#endif /* *************************************************************** C_H */