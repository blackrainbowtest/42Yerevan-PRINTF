/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:54:26 by aramarak          #+#    #+#             */
/*   Updated: 2025/03/05 18:54:30 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include "../ft_printf.h"

int		ft_strlen(const char *str);
char	*ft_reverse_str(char *hex, int len);
char	*ft_strchr(const char *s, int c);

#endif
