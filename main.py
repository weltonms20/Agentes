import Agente
import Ambiente

carro = Agente.Agente()
estado = Ambiente.Ambiente()
estado.AddRua(0,1,4)
estado.AddRua(0,2,2)
estado.AddRua(1,2,3)
estado.AddRua(2,1,1)
estado.AddRua(1,3,2)
estado.AddRua(1,4,3)
estado.AddRua(2,3,4)
estado.AddRua(2,4,5)
estado.AddRua(4,3,1)
#recomendo adicionar usando a funcao AddRua o caminho de todas as cidade para todas
menorCam = carro.EncontrarMenorCaminho(estado,0,2)
print('ok')
print(menorCam) # onde tem 999999 eh porque nao tem caminho entre as duas cidades