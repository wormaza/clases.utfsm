progenitor(maria, pedro).
progenitor(juan, pedro).
progenitor(juan, carola).
progenitor(pedro, ana).
progenitor(pedro, paty).
progenitor(paty, aldo).

%que se puede preguntar
%progenitor(pedro, ana).
%progenitor(ana, pedro).
%progenitor(X,aldo).

%observacion: con . se termina
%observacion: con ; se continua
%progenitor(X,pedro).
%progenitor(pedro, X).

%ejemplo 1:
% la , actúa como una acción de intersección, y logico
%progenitor(X, Y), progenitor(Y, aldo).
%progenitor(X, Y), progenitor(Y, paty).

%depende de los grados de 'libertad' es la forma de interpretacion
%progenitor(juan, X), progenitor(X, Y).

%progenitor(X, ana), progenitor(X, paty).

%se va a crear una regla:
%hijo(X, Y) :- progenitor(Y, X).
%si se agrega dinamicamente, debe hacerse así:
%assertz((hijo(X, Y) :- progenitor(Y, X))).
%hijo(paty, pedro).
%hijo(paty, X).
%hijo(pedro, X).
%progenitor(X,pedro).

%nuevos hechos:
%femenino(maria).
%masculino(juan).
%masculino(pedro).
%femenino(carola).
%femenino(ana).
%femenino(paty).
%masculino(aldo).

%de hacerlo dinamicamente, debe hacerlo asi:
%assertz(femenino(maria)).
%assertz(masculino(juan)).
%assertz(masculino(pedro)).
%assertz(femenino(carola)).
%assertz(femenino(ana)).
%assertz(femenino(paty)).
%assertz(masculino(aldo)).

%en base lo anterior se incluyen nuevas reglas:
%papa(X, Y) 	:- progenitor(X, Y), masculino(X).
%mama(X, Y) 	:- progenitor(X, Y), femenino(X).
%abuelo(X, Y) 	:- progenitor(X, Z), progenitor(Z, Y).
%hermana(X, Y) 	:- progenitor(Z, X), progenitor(Z, Y), femenino(X).

%assertz((papa(X, Y) 	:- progenitor(X, Y), masculino(X))).
%assertz((mama(X, Y) 	:- progenitor(X, Y), femenino(X))).
%assertz((abuelo(X, Y) 	:- progenitor(X, Z), progenitor(Z, Y))).
%assertz((hermana(X, Y) 	:- progenitor(Z, X), progenitor(Z, Y), femenino(X))).

%
%hermana(ana, paty).
%hermana(X, paty).

%hermana2(X, Y) :- progenitor(Z, X), progenitor(Z, Y),X \= Y, femenino(X).
%assertz((hermana2(X, Y) :- progenitor(Z, X), progenitor(Z, Y),X \= Y, femenino(X))).
%hermana2(X, paty).

%antepasado(X, Z) :- progenitor(X, Z).
%antepasado(X, Z) :- progenitor(X, Y), antepasado(Y, Z).

%assertz((antepasado(X, Z) :- progenitor(X, Z))).
%assertz((antepasado(X, Z) :- progenitor(X, Y), antepasado(Y, Z))).


assertz((antepasado2(X, Z) :- progenitor(X, Y), antepasado2(Y, Z))).
assertz((antepasado2(X, Z) :- progenitor(X, Z))).

%antepasado(pedro,ana).
%antepasado(juan,ana).
%antepasado(juan,aldo).

%antepasado(maria, X).
%antepasado(X, aldo).

%ejemplo uso _
%hermana2(_, paty).