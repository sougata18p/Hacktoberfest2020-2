def minion_game(string):
    con,vow=0,0
    l=len(string)
    for i in range(l):
        if string[i] in 'AEIOU':
            vow=vow+(l-i)
        else:
            con=con+(l-i)
    if vow<con:
        print('Stuart {}'.format(con))
    elif vow==con:
        print('Draw')
    else:
        print('kavin{}'.format(vow))
if __name__ == '__main__':
    s = input()
    minion_game(s)
