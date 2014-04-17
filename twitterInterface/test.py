def getLEDCoordinates(valence, arousal, dominance):
    layer = 0
    x = 0
    y = 0
    if valence < 4.5 :
        layer = 0
    elif valence < 6.0 :
        layer = 1
    else:
        layer = 2

    if arousal < 5 :
        x = 0
    elif arousal < 7.5:
        x = 1
    else:
        x = 2

    if dominance < 4.5:
        y = 0
    elif dominance < 6 :
        y = 1
    else:
        y = 2

    return [layer, x, y]
    

a = getLEDCoordinates(5, 6, 5)
print a[0], a[1], a[2]
a = getLEDCoordinates(3.5, 6, 5)
print a[0], a[1], a[2]
a = getLEDCoordinates(6.5, 6, 5)
print a[0], a[1], a[2]

a = getLEDCoordinates(5, 4.6, 5)
print a[0], a[1], a[2]
a = getLEDCoordinates(5, 6, 5)
print a[0], a[1], a[2]
a = getLEDCoordinates(5, 8.6, 5)
print a[0], a[1], a[2]

a = getLEDCoordinates(5, 6, 3.5)
print a[0], a[1], a[2]
a = getLEDCoordinates(5, 6, 5)
print a[0], a[1], a[2]
a = getLEDCoordinates(5, 6, 6.5)
print a[0], a[1], a[2]
