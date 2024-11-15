%esto es un comentario
%se establece una relacion
tiene(puerta,ventana).

%OBS 1:
%para cargar el archivo
%swipl -f nombre-archivo.pl

%OBS 2:
%sin usar archivo solo:
%swipl
%assertz(hecho), por ejemplo:
%assertz(tiene(puerta,ventana)),assertz(tiene(cabeza,cola)).
%para eliminar:
%retract(tiene(cabeza,cola)).
%para eliminar todos:
%retractall(tiene(_, _)).

%para salir:
%halt.