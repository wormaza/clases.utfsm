%fecha(D, M, 2000) = fecha(D1, mayo, A1).
%fecha(1, mayo, 2000) = fecha(1, mayo, 2000).
%triangulo(segmento(P1,P2),segmento(1,2),segmento(P3,3)) = triangulo(segmento(X,Y),segmento(A,X),segmento(1,3)).

vertical(seg(punto(X, Y), punto(X, Y1))).
horizontal(seg(punto(X, Y), punto(X1, Y))).
%assertz(vertical(seg(punto(X, Y), punto(X, Y1)))).
%assertz(horizontal(seg(punto(X, Y), punto(X1, Y)))).

%vertical(seg(punto(1,1), punto(1,2))).
%vertical(seg(punto(1,1), punto(2,Y))).
%horizontal(seg(punto(1,1), punto(2,Y))).
%vertical(seg(punto(2,3), Y)).
%vertical(S), horizontal(S).



