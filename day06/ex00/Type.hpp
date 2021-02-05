/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:20:47 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/05 16:59:41 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_HPP
# define TYPE_HPP

# include <iostream>
# include <string>

class Type
{

	public:
		
		Type(std::string str);
		Type( Type const & src );
		~Type(void);

		Type &		operator=( Type const & rhs );

		void		convertToChar(void);
		void		convertToInt(void);
		void		convertToFloat(void);
		void		convertToDouble(void);

		char		getCharValue(void) const;
		int			getIntValue(void) const;
		float		getFloatValue(void) const;
		double		getDoubleValue(void) const;

	private:
		
		std::string		_Str;
		char			_CharValue;
		int				_IntValue;
		float			_FloatValue;
		double			_DoubleValue;

		Type(void);

};

std::ostream &			operator<<( std::ostream & o, Type const & i );

#endif /* ************************************************************ TYPE_H */