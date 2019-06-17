# Esenni-B32016
Иван „Speedy“ Петров трябва да пътува до мястото на следващото състезание по програмиране за своя сметка. А разполага само с S евро. Затова той внимателно проверил възможностите на междуградския транспорт и най-вече цените на пътуванията. Да означим с 1 родния град на Speedy, с N − града, в който ще се състои състезанието, а с 2, 3, …, N – 1 − останалите селища, през които може да се пътува. В Интернет Иван намерил M възможности за пътуване във вида: автобус от град v до град w (както и от w до v) пътува t часа и билетът във всяка от двете посоки струва e евро. Възможно е да има повече от един автобус, който пътува между v до w и е възможно различните автобуси, които пътуват от v до w да пътуват различно време и цената на билетите им да е различна. Напишете програма traveling, която намира пътуване от град 1 до град N на цена, ненадхвърляща S евро. Ако съществува повече от едно такова пътуване, програмата трябва да намери пътуването, при което Speedy ще прекара най-малко време в автобусите. Вход Първият ред на стандартния вход ще съдържа положителните цели S, N и M, S ≤ 2000, N ≤ 3000, M ≤ 5000. Всеки от следващите M реда ще съдържа параметрите (положителни цели числа) v, w, t и e на един възможен автобусен превоз, 1 ≤ v ≤ N, 1 ≤ w ≤ N, 1 ≤ e ≤ 100, 1 ≤ t ≤ 100. Изход Програмата трябва да изведе на един ред на стандартния изход времето, което Speedy ще прекара в автобусите. Ако няма пътуване на цена, ненадминаваща S евро, програмата трябва да изведе –1. 
