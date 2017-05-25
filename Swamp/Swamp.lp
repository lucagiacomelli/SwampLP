turn(right;left;up;down).

first_action(X,1) :- land(X,1), X=1..n.
at(X,1) :- first_action(X,1).


action(turn(right), X,Y) :- at(X,Y), land(X,Y+1).

action(turn(left),X,Y) :- at(X,Y), land(X,Y-1).

action(turn(up),X,Y) :- at(X,Y), land(X-1,Y).

action(turn(down),X,Y) :- at(X,Y), land(X+1,Y).

action(turn(rightDown), X,Y) :- at(X,Y), land(X+1,Y+1).

action(turn(rightUp), X,Y) :- at(X,Y), land(X-1,Y+1).

action(turn(leftDown), X,Y) :- at(X,Y), land(X+1,Y-1).

action(turn(leftUp), X,Y) :- at(X,Y), land(X-1,Y-1).

at(X,Y+1) :- action(turn(right),X,Y).
at(X,Y-1) :- action(turn(left),X,Y).
at(X-1,Y) :- action(turn(up),X,Y).
at(X+1,Y) :- action(turn(down),X,Y).

at(X-1,Y+1) :- action(turn(rightUp),X,Y).
at(X+1,Y+1) :- action(turn(rightDown),X,Y).
at(X-1,Y-1) :- action(turn(leftUp),X,Y).
at(X+1,Y-1) :- action(turn(leftDown),X,Y).


finito :- at(X,Y), Y=m.
:- not finito.

%#show land/2.
#show at/2.



