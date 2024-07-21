/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:27:47 by VR                #+#    #+#             */
/*   Updated: 2024/07/12 15:30:50 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
    Weapon gun;
	gun.setType("m4");

    HumanA bob("Viti", gun);
    bob.Attack();
    gun.setType("other type of gun");
    bob.Attack();

    HumanB jim("Govi");
    jim.setWeapon(gun);
    jim.Attack();
    gun.setType("ak-47");
    jim.Attack();

    std::cout << std::endl;
    return 0;
}