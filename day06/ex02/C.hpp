/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 20:13:29 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/05 20:13:30 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include <iostream>
# include <string>

class C
{

	public:

		C();
		C( C const & src );
		~C();

		C &		operator=( C const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, C const & i );

#endif /* *************************************************************** C_H */