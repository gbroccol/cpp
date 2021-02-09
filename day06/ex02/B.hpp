/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:07:26 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/09 13:53:30 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include <iostream>
# include <string>

#include "Base.hpp"

class B : public Base
{

	public:

		B();
		// B( B const & src );
		~B();

		// B &		operator=( B const & rhs );

		std::string			getType(void);

	private:

};

// std::ostream &			operator<<( std::ostream & o, B const & i );

#endif /* *************************************************************** B_H */