/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:56:15 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/08 15:13:09 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

class Base
{

	public:

		Base();
		// Base( Base const & src );
		virtual ~Base();

		// Base &		operator=( Base const & rhs );

	private:

};

// std::ostream &			operator<<( std::ostream & o, Base const & i );

#endif /* ************************************************************ BASE_H */