import Agente
import Ambiente

carro = Agente.Agente()
casa = Ambiente.Ambiente()
casa.AddRua(2,9,9)
#recomendo adicionar usando a funcao AddRua o caminho de todas as cidade para todas
menorCam = carro.EncontrarMenorCaminho(casa,2,9)
print('ok')
print(menorCam) # onde tem 999999 eh porque nao tem caminho entre as duas cidades