/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paszhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:45:39 by paszhang          #+#    #+#             */
/*   Updated: 2019/10/22 13:51:22 by paszhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_EXTEND_H
# define LIBFT_EXTEND_H

# include "libft_extend.h"
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h>

int             ft_base_10(char *str);
void			*ft_zemalloc(size_t size);
void			ft_putstr(char *str);
void    		ft_putstrendl(char *str);

#endif
