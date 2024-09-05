def combina(listaTotal, tamanhoDoSubCj):
    tamanhoDaLista = len(listaTotal)
    qtdSubConjunto = int(tamanhoDaLista/tamanhoDoSubcCj)

def mediaSub(listaTotal, tamanhoDoSubcCj):


    
    
    tamanhoDaLista = len(listaTotal)
    qtdSubConjunto = int(tamanhoDaLista/tamanhoDoSubcCj)

    soma  = list(range(qtdSubConjunto)) 
    media = list(range(qtdSubConjunto))

    for j in range(len(soma)):
        soma[j] = 0
    
    for i in range(tamanhoDaLista):
        indexSubCj = int(i/tamanhoDoSubcCj)
        soma[indexSubCj] += listaTotal[i]

    for n in range(len(soma)):
        media[n] = soma[n]/tamanhoDoSubcCj
        print(f'a media do subconjunto {n+1} é: {media[n]}')
    

if __name__=='__main__':
 numLista = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]

 mediaSub(numLista, 4)



