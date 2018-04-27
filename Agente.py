import Ambiente
class Agente(object):
	#agente que usa principios do algoritmo de Dijkstra's e retorna um vetor com a distancia de partida até chegada, vetor de 0 a 9 apenas
	def EncontrarMenorCaminho(self,Ambiente,partida,chegada):
		menor = 999999
		menorIndice = 0
		flagNVisit=0
		naoVisitados = [0,0,0,0,0,0,0,0,0,0]
		menorCam = [9999999,9999999,9999999,9999999,9999999,9999999,9999999,9999999,9999999,9999999]
		menorCam[partida]=0
		naoVisitados[partida]=1
		while flagNVisit<10:
			for i in range(0,10):
				if Ambiente.matriz[partida][i]>0:
					if Ambiente.matriz[partida][i] < menorCam[i]:
						menorCam[i]=Ambiente.matriz[partida][i]+menorCam[partida]
			naoVisitados[partida] = 1

			menor = 999999
			flagNVisit+=1
			for x in range(0,10):
				if menorCam[x] < menor and naoVisitados[x]==0:
					partida = x

		return menorCam
