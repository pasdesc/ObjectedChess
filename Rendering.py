
import pygame,sys,time, os

from math import *
from pygame.locals import *
def blit():
    for i in range(0,32):
        
        windowSurface.blit(piecesimage[i],pieces[i])
pieces=[None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None]
piecesimage=[None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None]

boardstate=open("/Users/pasdesc/Google Drive/Pascal C++/Chess/boardstatecurrent.txt","r")
typearray=[None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None]
yarray=[None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None]
xarray=[None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None]
capturedarray=[None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None,None,None,None,None,\
           None,None]
pygame.init()
WINDOW_WIDTH=570
WINDOW_HEIGHT=WINDOW_WIDTH+80
windowSurface=pygame.display.set_mode((WINDOW_WIDTH,WINDOW_HEIGHT),0,32)
pygame.display.set_caption("Chess Game")
CREME=(252,249,219)
BROWN=(61,35,1)
BLACK=(0,0,0)
PURPLE=(208,132,255)
WHITE=(255,255,255)
RED=(255,0,0)
BLUE=(100,100,255)
GRAY=(100,100,100)
LIGHTGRAY=(200,200,200)
GREEN=(0,255,0)
ORANGE=(255,153,51)
while True:
    
  
    windowSurface.fill(LIGHTGRAY)
    for i in range(0,8):
            for j in range(0,8):
                if (j+i)%2==0:
                    color=CREME
                else:
                    color=BROWN
                basicRect=pygame.draw.rect(windowSurface,color,(WINDOW_WIDTH/8*j,WINDOW_WIDTH/8*i+80,WINDOW_WIDTH/8,WINDOW_WIDTH/8))
    for piece in range(0,32):
        
        temp=boardstate.read(2)
        temp=temp[:1]
        typearray[piece]=int(temp)
    for piece in range(0,32):
        
        temp=boardstate.read(2)
        temp=temp[:1]
        xarray[piece]=int(temp)
    
    for piece in range(0,32):
        
        temp=boardstate.read(2)
        temp=temp[:1]
        
        yarray[piece]=int(temp)
    for piece in range(0,32):
        
        temp=boardstate.read(2)
        temp=temp[:1]
        capturedarray[piece]=int(temp)
    boardstate.seek(0)
    for event in pygame.event.get():
            if event.type==QUIT:
                pygame.quit()
                sys.exit()
    
    for num in range(len(capturedarray)):
        piece=capturedarray[num]
        if piece==0:
            if num<=15:
                os.chdir("chessPieces")
                if typearray[num]==0:
                   print(os.getcwd())
                   pieces[num]=pygame.Rect(WINDOW_WIDTH/8*xarray[num],WINDOW_WIDTH/8*(yarray[num])+80,WINDOW_WIDTH/8,WINDOW_WIDTH/8)
                   temper=pygame.image.load("pawnw.png")
                   piecesimage[num]=pygame.transform.scale(temper,(int(WINDOW_WIDTH/8),int(WINDOW_WIDTH/8)))
                elif typearray[num]==1:
                   pieces[num]=pygame.Rect(WINDOW_WIDTH/8*xarray[num],WINDOW_WIDTH/8*(yarray[num])+80,WINDOW_WIDTH/8,WINDOW_WIDTH/8)
                   temper=pygame.image.load("chessPieces/rookw.png")
                   piecesimage[num]=pygame.transform.scale(temper,(int(WINDOW_WIDTH/8),int(WINDOW_WIDTH/8)))
                elif typearray[num]==2:
                   pieces[num]=pygame.Rect(WINDOW_WIDTH/8*xarray[num],WINDOW_WIDTH/8*(yarray[num])+80,WINDOW_WIDTH/8,WINDOW_WIDTH/8)
                   temper=pygame.image.load("chessPieces/knightw.png")
                   piecesimage[num]=pygame.transform.scale(temper,(int(WINDOW_WIDTH/8),int(WINDOW_WIDTH/8)))
                elif typearray[num]==3:
                   pieces[num]=pygame.Rect(WINDOW_WIDTH/8*xarray[num],WINDOW_WIDTH/8*(yarray[num])+80,WINDOW_WIDTH/8,WINDOW_WIDTH/8)
                   temper=pygame.image.load("chessPieces/bishopw.png")
                   piecesimage[num]=pygame.transform.scale(temper,(int(WINDOW_WIDTH/8),int(WINDOW_WIDTH/8)))
                elif typearray[num]==4:
                   pieces[num]=pygame.Rect(WINDOW_WIDTH/8*xarray[num],WINDOW_WIDTH/8*(yarray[num])+80,WINDOW_WIDTH/8,WINDOW_WIDTH/8)
                   temper=pygame.image.load("chessPieces/queenw.png")
                   piecesimage[num]=pygame.transform.scale(temper,(int(WINDOW_WIDTH/8),int(WINDOW_WIDTH/8)))

                elif typearray[num]==5:
                   pieces[num]=pygame.Rect(WINDOW_WIDTH/8*xarray[num],WINDOW_WIDTH/8*(yarray[num])+80,WINDOW_WIDTH/8,WINDOW_WIDTH/8)
                   temper=pygame.image.load("chessPieces/kingw.png")
                   piecesimage[num]=pygame.transform.scale(temper,(int(WINDOW_WIDTH/8),int(WINDOW_WIDTH/8)))



            else:
                if typearray[num]==0:
                   pieces[num]=pygame.Rect(WINDOW_WIDTH/8*xarray[num],WINDOW_WIDTH/8*(yarray[num])+80,WINDOW_WIDTH/8,WINDOW_WIDTH/8)
                   temper=pygame.image.load("chessPieces/pawnb.png")
                   piecesimage[num]=pygame.transform.scale(temper,(int(WINDOW_WIDTH/8),int(WINDOW_WIDTH/8)))
                elif typearray[num]==1:
                   pieces[num]=pygame.Rect(WINDOW_WIDTH/8*xarray[num],WINDOW_WIDTH/8*(yarray[num])+80,WINDOW_WIDTH/8,WINDOW_WIDTH/8)
                   temper=pygame.image.load("chessPieces/rookb.png")
                   piecesimage[num]=pygame.transform.scale(temper,(int(WINDOW_WIDTH/8),int(WINDOW_WIDTH/8)))
                elif typearray[num]==2:
                   pieces[num]=pygame.Rect(WINDOW_WIDTH/8*xarray[num],WINDOW_WIDTH/8*(yarray[num])+80,WINDOW_WIDTH/8,WINDOW_WIDTH/8)
                   temper=pygame.image.load("chessPieces/knightb.png")
                   piecesimage[num]=pygame.transform.scale(temper,(int(WINDOW_WIDTH/8),int(WINDOW_WIDTH/8)))
                elif typearray[num]==3:
                   pieces[num]=pygame.Rect(WINDOW_WIDTH/8*xarray[num],WINDOW_WIDTH/8*(yarray[num])+80,WINDOW_WIDTH/8,WINDOW_WIDTH/8)
                   temper=pygame.image.load("chessPieces/bishopb.png")
                   piecesimage[num]=pygame.transform.scale(temper,(int(WINDOW_WIDTH/8),int(WINDOW_WIDTH/8)))
                elif typearray[num]==4:
                   pieces[num]=pygame.Rect(WINDOW_WIDTH/8*xarray[num],WINDOW_WIDTH/8*(yarray[num])+80,WINDOW_WIDTH/8,WINDOW_WIDTH/8)
                   temper=pygame.image.load("chessPieces/queenb.png")
                   piecesimage[num]=pygame.transform.scale(temper,(int(WINDOW_WIDTH/8),int(WINDOW_WIDTH/8)))

                elif typearray[num]==5:
                   pieces[num]=pygame.Rect(WINDOW_WIDTH/8*xarray[num],WINDOW_WIDTH/8*(yarray[num])+80,WINDOW_WIDTH/8,WINDOW_WIDTH/8)
                   temper=pygame.image.load("chessPieces/kingb.png")
                   piecesimage[num]=pygame.transform.scale(temper,(int(WINDOW_WIDTH/8),int(WINDOW_WIDTH/8)))

               
            
    blit()
    pygame.display.update()
            
            
        
