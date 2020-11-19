/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:44:12 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/19 12:03:34 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;
    public:
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat& ref);
        Bureaucrat& operator=(const Bureaucrat& ref);
        virtual ~Bureaucrat();
    
        std::string     getName() const;
        int             getGrade() const;

        void            upGrade();
        void            downGrade();

        class GradeTooHighException : public std::exception
        {

        };
        class GradeTooLowException : public std::exception
        {

        };

};

std::ostream    &operator<<(std::ostream & out, const Bureaucrat & bureaucrat);

#endif