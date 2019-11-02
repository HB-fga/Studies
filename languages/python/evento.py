#WA

def evento():
  linha1 = input().split(" ")
  dia = int(linha1[1])

  linha2 = input().split(" : ")
  hora = int(linha2[0])
  minuto = int(linha2[1])
  segundo = int(linha2[2])
  
  lista_ans = [dia, hora, minuto, segundo]
  return(lista_ans)

def duração(inicio, final):
  dh = final[1] - inicio[1]
  dd = final[0] - inicio[0]
  
  return dh, dd

inicio=evento()
final=evento()

rh, rd = duração(inicio, final)
print("o evento durou {} dias e {} horas".format(), rd, rh)

#Dia 5
#08 : 12 : 23
#Dia 9
#06 : 13 : 23

#3 dia(s)
#22 hora(s)
#1 minuto(s)
#0 segundo(s)
