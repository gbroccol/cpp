/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 20:04:36 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/05 20:04:37 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include <iostream>
# include <string>

class A
{

	public:

		A();
		A( A const & src );
		~A();

		A &		operator=( A const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, A const & i );

#endif /* *************************************************************** A_H */