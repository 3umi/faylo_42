/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohalim <ohalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:27:13 by ohalim            #+#    #+#             */
/*   Updated: 2023/05/08 21:34:47 by ohalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/philo.h"

int main(int argc, char **argv)
{
	t_philo	*philo;

	philo = parse_input(argc, argv);
	if (!philo)
		return (FAILURE_RETURN);
	if (init_threads(philo))
		return (FAILURE_RETURN);
	stalk_threads(philo);
	return (SUCCESS_RETURN);
}
