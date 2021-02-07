/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:20:47 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/07 16:40:50 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_HPP
# define TYPE_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cmath>
# include <iomanip>

class Type
{

	public:
		
		Type(std::string str);
		Type( Type const & src );
		~Type(void);

		// Type &		operator=( Type const & rhs );

	private:
		
		int				_Sum;
		float			_FloatValue;
		double			_DoubleValue;

		Type(void);

		void			ToChar(void);
		void			ToInt(void);
		void			ToFloat(void);
		void			ToDouble(void);

		int				countPrecision(std::string str);

};

std::ostream &			operator<<( std::ostream & o, Type const & i );

#endif /* ************************************************************ TYPE_H */