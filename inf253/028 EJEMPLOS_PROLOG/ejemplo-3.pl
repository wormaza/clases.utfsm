colegio(a, b).
colegio(a, c).
colegio(a, d).
colegio(b, e).
colegio(b, f).
universidad(a, z).
universidad(a, e).
universidad(b, d).
trabajo(a, b).
trabajo(a, z).
trabajo(b, e).
familia(a, e).
familia(a, f).
familia(b, z).
amigo(X,Y) :- familia(X,Y);universidad(X,Y).
conocido(X,Y) :- colegio(X,Y);trabajo(X,Y).
aburrido(X,Y) :- familia(X,Y),universidad(X,Y);colegio(X,Y),trabajo(X,Y).
%ejemplos:
%amigo(a,e).
%conocido(a,_).
%conocido(a,Y).
%aburrido(a,_).
%aburrido(a,A).

%L1 = [perro, gato, ratón, loro].
%L2 = .(perro, .(gato, .(ratón, .(loro, [])))). %puede causar conflicto el alguna implentaciones
%L2 = cons(perro, cons(gato, cons('ratón', cons(loro, nil)))). %forma alternativa
%L3 = [perro | [gato | [ratón | [loro | []]]]].

%[perro, gato, ratón, loro] = [perro | [gato | [ratón | [loro | []]]]].
%member(Animal,[perro | [gato | [ratón | [loro | []]]]]).
%append([perro, gato, ratón, loro],[perro | [gato | [ratón | [loro | []]]]],X).
%delete([perro | [gato | [ratón | [loro | []]]]], ratón, X).

%la regla dice que L es el resultado de unir dos listas: L1 y L2
%S al unirse con L3, forman L2
%notar que [] es una lista válida
%assertz((sublist(S, L) :- append(L1, L2, L), append(S, L3, L2))).
%sublist([2, 3], [1, 2, 3, 4]).
%sublist(X, [1, 2, 3, 4]).%quienes serían sublistas de [1,2,3,4]
%sublist([2,3], X).%de quien podría ser sublista [2,3]
%sublist([2, X], [1, 2, 3, 4]).%algún valor para X, de forma que puedar ser sublista de [1,2,3,4]

%X = +(*(2, 3), *(4, 5)).
%X is +(*(2, 3), *(4, 5)).
%X = 2*3+4*5.
%X is 2*3+4*5.

%X = 3 + 5.
%X is 3 + 5.
%X is 5/3.
%X is /(5,3).
%[1,2] = [2,1].
%[1,2] = [1,2].
%2 + 3 = 3 + 2.
%2 + 3 =:= 3 + 2.

%largo([ _ | Cola], N) :- largo(Cola, N1),N is N1 + 1.
%largo([], 0).

%assertz((largo([], 0))). %se define que la lista vacia tiene largo 0
%assertz((largo([ _ | Cola], N) :- largo(Cola, N1),N is N1 + 1)). %por cada cabecera se va sumando 1
%largo([a, b, c], N).

%assertz((mcd(X, X, X))).
%assertz((mcd(X, Y, D) :- X < Y, Y1 is Y - X, mcd(X, Y1, D);Y < X, mcd(Y, X, D))).
%mcd(100, 10, X).
%mcd(27, 36, X).

%backtracking
f(X, 0) :- X < 3.	
f(X, 2) :- X >= 3, X < 6.
f(X, 4) :- X >= 6.
%assertz((f(X, 0) :- X < 3)).
%assertz((f(X, 2) :- X >= 3, X < 6)).
%assertz((f(X, 4) :- X >= 6)).

%assertz((f2(X, 0) :- X < 3, !)).
%assertz((f2(X, 2) :- X >= 3, X < 6, !)).
%assertz((f2(X, 4) :- X >= 6, !)).

%assertz((f3(X, 0) :- X < 3, !)).
%assertz((f3(X, 2) :- X < 6, !)).
%assertz((f3(X, 4))).

%assertz((f4(X, 0) :- X < 3)).
%assertz((f4(X, 2) :- X < 6)).
%assertz((f4(X, 4))).

%f(1, Y), 2 < Y.
%f2(1, Y), 2 < Y.
%f3(1, Y), 2 < Y.

%f(7,Y).
%f2(7,Y).
%f3(7,Y).
