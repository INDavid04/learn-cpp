baza {
    use baza
    list
    chage
    browse
    modi stru
}

sortare {
    sort to sort_f on camp1[/A][/D][/C], [camp2][/A][/D][/C]
    /A, /D, /C - ascendent, descendent, fara a tine cont de valoare (aA)
    
    /// Exemplu
    sort to rezultata on salariu /D
    sort to rezultat1 on salariu /D, varsta /A
}

replicarea {
    replace  campl with exp1 [domeniu][for cond1][while cond2]
    
    /// Exemplu
    replace all media with (nota1 + nota2)/2
    list
    
    /// Modificarea salaiului de 4000 pentru soferi
    use angajat
    go top
    replace salariu with 4000 for functie="Sofer"
}