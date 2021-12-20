/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dsleep.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavarre <rnavarre@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:37:04 by rnavarre          #+#    #+#             */
/*   Updated: 2021/12/20 13:42:43 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <unistd.h>

void	dsleep(uint64_t msecs, t_philo *philo)
{
	uint64_t	diff;

	diff = now() + msecs;
	while (diff > now() && !philo->diners_exit)
		usleep(500);
}
