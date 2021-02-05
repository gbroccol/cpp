/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 20:05:05 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/05 20:05:07 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include <iostream>
# include <string>

class B
{

	public:

		B();
		B( B const & src );
		~B();

		B &		operator=( B const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, B const & i );

#endif /* *************************************************************** B_H */