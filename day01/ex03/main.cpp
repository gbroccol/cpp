/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:49:52 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/05 20:49:58 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Re-using the Zombie class you made in the previous exercise, make a ZombieHorde
// class.
// This class will have a constructor that takes an integer N. At creation, it must allocate
// N Zombie objects, with random names (Same notion of "random" as before), and store
// them. It will then have an announce() function that calls announce() on each of the
// contained Zombie objects.
// You must allocate all the Zombie objects in a single allocation, and release them when
// the ZombieHorde it destroyed.
// As usual, provide a main with tests and justify your choices.