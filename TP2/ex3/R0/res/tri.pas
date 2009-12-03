program trier;

type tarray : array [ 1..10 ] of integer;
var t0, t1, t2 : tarray;

procedure remplirTab ( var dest : tarray );
var i : integer;
begin
	(* bla bla bla *)
end;

procedure afficherTab ( src : tarray );
var i : integer;
begin
	(* bla bla bla *)
end;

procedure copyTab ( src : tarray ; var dest : tarray );
var i : integer;
begin
	for i := 1 to 10 do
		dest [ i ] := src [ i ]
end;

(*
	tri par insertion du minimum
*)
procedure triMinimum ( src : tarray ; var dest : tarray );
(*
	recupere la valeur min d'un tableau entre 2 indices
*)
var i : integer;
function getMinimum ( src : tarray ; i0, i1 : integer ) : integer;
var i, indice : integer;
begin
	indice := i0;
	for i := i0+1 to i1 do begin
		if src [ indice ] > src [ i ] then
			indice := i
	end
	getMinimum := indice
end;
(*
	echange deux valeurs dans un tableau
*)
procedure swap ( i0, i1 : integer ; var src : tarray )
var v : integer;
begin
	v := src [ i0 ];
	src [ i0 ] := src [ i1 ];
	src [ i1 ] := v
end;
begin
	copyTab ( src, dest );
	for i := 1 to 10 do
		swap ( i, getMinimum ( dest, i, 10 ), dest )
end;

(*
	tri a bulles
*)
procedure triABulles ( src : tarray ; var dest : tarray );
var i,j,t:Integer;
begin
	copyTab ( src, dest );
	for i := 1 To 9 do
		for j := i+1 to 10 do
			If dest[i]>dest[j] then begin
				t:=dest[i];
				dest[i]:=dest[j];
				dest[j]:=t
			end;
end;

begin
	remplirTab ( t0 );
	triMinimum ( t0, t1 );
	triABulles ( t0, t2 );
	afficherTab ( t1 );
	afficherTab ( t2 )
end.