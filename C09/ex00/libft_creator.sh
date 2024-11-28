# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moaatik <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/12 22:44:14 by moaatik           #+#    #+#              #
#    Updated: 2024/08/12 23:56:22 by moaatik          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh 
cc="gcc"
src=*.c
flags="-c -Wall -Werror -Wextra"
lib_name="libft.a"

$cc $flags $src
ar rc $lib_name *.o
ranlib $lib_name
rm *.o
