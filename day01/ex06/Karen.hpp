/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:21:58 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/01 12:21:58 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
public:
    Karen();
    ~Karen();
    void    problem(void);
    void    complain(std::string level);
};

#endif
