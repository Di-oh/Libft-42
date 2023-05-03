/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:43:16 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/03 16:43:51 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

size_t	ft_strlen(const char *str);
int		ft_isalpha(int num);
int		ft_isdigit(int num);
int		ft_isalnum(int num);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memset(int c);
#endif
