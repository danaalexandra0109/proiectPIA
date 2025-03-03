# proiectPIA
Sa  se realizeze un program care foloses,te comunicat, ia Bluetooth (la alegere, Bluetooth
Classic sau Bluetooth Low Energy). Se va controla starea a dou  LED-uri ce formeaz  un
semafor destinat pietonilor. LED-urile vor  aprinse sau stinse în funct, ie de o anumit  intrare
capacitiv  a microcontrolerului ESP32, dup  cum urmeaz :
10p Se va ap sa pe pinul capacitiv TOUCH3 pentru aprinderea LED-ului pentru ros,u: se va
aprinde un LED care s  indice culoarea ros, ie a semaforului. Se va alege un interval de timp
de 10 secunde pentru schimbarea culorii semaforului. La ecare 2 secunde, se va transmite
prin comunicat, ia Bluetooth mesajul Au mai r mas X secunde, unde X este num rul
de secunde r mas pân  la schimbarea culorii semaforului în verde. Dup  trecerea acestui
interval de timp, se va stinge LED-ul s, i se va as,a pe as,ajul cu 7 segmente mesajul St,
urmat de mesajul Ar s, i mesajul t.
10p Se va ap sa pe pinul capacitiv TOUCH6 pentru aprinderea LED-ului pentru verde: se va
aprinde un LED care s  indice culoarea verde a semaforului. Se va alege un interval de
timp de 10 secunde pentru schimbarea culorii semaforului. Se va folosi un LED suplimentar care se va aprinde s, i stinge din ce în ce mai repede pentru a indica faptul c  semaforul
se va schimba în culoarea ros, ie. Se va alege o frecvent,  de 0,5 Hz. Dup  trecerea primelor
3 secunde, frecvent,a cu care LED-ul suplimentar se va aprinde s, i stinge se va dubla, iar
dup  trecerea urm toarelor 3 secunde, frecvent,a se va tripla. Dup  trecerea ultimelor 4
secunde, LED-ul suplimentar se va stinge, împreun  cu LED-ul care indic  culoarea verde
a semaforului s, i se va as,a pe as,ajul cu 7 segmente mesajul St, urmat de mesajul oP.
20p Se va ap sa pe pinul capacitiv TOUCH9 pentru funct, ionarea autonom  a sistemului: se
va aprinde un LED care s  indice culoarea ros, ie a semaforului. Se va alege un interval
de timp de 10 secunde pentru schimbarea culorii semaforului. La ecare 2 secunde, se
va transmite prin comunicat, ia Bluetooth mesajul Au mai r mas X secunde, unde X
este num rul de secunde r mas pân  la schimbarea culorii semaforului în verde. Dup 
trecerea acestui interval de timp, se va stinge LED-ul care indic  culoarea ros, ie s, i se
va aprinde LED-ul care indic  culoarea verde. Se va as,a pe as,ajul cu 7 segmente
mesajul St, urmat de mesajul Ar s, i mesajul t. Se va alege un interval de timp de 10
secunde pentru schimbarea culorii semaforului. Se va folosi un LED suplimentar care se
va aprinde s, i stinge din ce în ce mai repede pentru a indica faptul c  semaforul se va
schimba în culoarea ros, ie. Se va alege o frecvent,  de 0,5 Hz. Dup  trecerea primelor 3
2022-2023
S, .l. Dr. Ing. Alina-Elena MARCU Proiect - Informatic  aplicat 
secunde, frecvent,a cu care LED-ul suplimentar se va aprinde s, i stinge se va dubla, iar
dup  trecerea urm toarelor 3 secunde, frecvent,a se va tripla. Dup  trecerea ultimelor 4
secunde, LED-ul suplimentar se va stinge, împreun  cu LED-ul care indic  culoarea verde
a semaforului s, i se va as,a pe as,ajul cu 7 segmente mesajul St, urmat de mesajul oP.
Obs! Pentru ecare caz, dup  ecare schimbare a culorii semaforului, se va trimite prin intermediul comunicat, iei Bluetooth un mesaj de conrmare a schimb rii culorii semaforului:
Semaforul s-a f cut ros,u, v  rog as, teptat, i sau Semaforul s-a f cut verde, v 
rog traversat, i.
Se va înc rca pe Moodle codul surs  asociat proiectului.
