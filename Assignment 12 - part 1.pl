%facts%
male(ram).
male(laxman).
male(raghu).
male(satrughn).
male(bharat).
male(dasarat).
male(lav).
male(kush).
male(taksha).
male(pushkal).
male(vishrava).
male(ravan).
male(kumbhakarn).
male(vibhishan).
female(surpanakha).
female(kaikesi).
female(mandodari).
female(kausalya).
female(sumitra).
female(kaikeyi).
female(sita).

parent_of(vishrava,ravan).
parent_of(kaikesi,ravan).
parent_of(vishrava,surpanakha).
parent_of(kaikesi,surpanakha).
parent_of(vishrava,kumbhakarn).
parent_of(kaikesi,kumbhakarn).
parent_of(vishrava,vibhishan).
parent_of(kaikesi,vibhishan).
parent_of(raghu,dasarat).
parent_of(dasarat,ram).
parent_of(kausalya,ram).
parent_of(dasarat, laxman).
parent_of(dasarat, satrughn).
parent_of(dasarat,bharat).
parent_of(sumitra, laxman).
parent_of(sumitra, satrughn).
parent_of(kaikeyi, bharat).
parent_of(ram, lav).
parent_of(ram, kush).
parent_of(sita, kush).
parent_of(sita, lav).
parent_of(bharat, taksha).
parent_of(bharat, pushkal).

/* Rules */
father_of(X,Y):- male(X),parent_of(X,Y).

mother_of(X,Y):- female(X),parent_of(X,Y).

grandfather_of(X,Y):- male(X),parent_of(X,Z),parent_of(Z,Y).

grandmother_of(X,Y):- female(X),parent_of(X,Z),parent_of(Z,Y).

sister_of(X,Y):- %(X,Y or Y,X)%
    female(X),father_of(F, Y), father_of(F,X),X \= Y.

sister_of(X,Y):- female(X),mother_of(M, Y), mother_of(M,X),X \= Y.

sister_of(X,Y) :- female(X),brother_of(Y,X).

aunt_of(X,Y):- female(X),parent_of(Z,Y), sister_of(Z,X),!.

brother_of(X,Y):- %(X,Y or Y,X)%
    male(X),father_of(F, Y), father_of(F,X),X \= Y.

brother_of(X,Y):- male(X),mother_of(M, Y), mother_of(M,X),X \= Y.

uncle_of(X,Y):-parent_of(Z,Y), brother_of(Z,X).

ancestor_of(X,Y):- parent_of(X,Y).
ancestor_of(X,Y):- parent_of(X,Z),ancestor_of(Z,Y).

cousin_of(X,Y):- uncle_of(Z,X),father_of(Z,Y).

son_of(X,Y):-male(X),parent_of(Y,X).

daughter_of(X,Y):-female(X),parent_of(Y,X).

sibling_of(X,Y):-parent_of(Z,X),parent_of(Z,Y), X\=Y.

