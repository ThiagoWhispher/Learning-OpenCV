import cv2

source = cv2.imread('tests/dog.jpg', 1)

scaleX = 0.6
scaleY = 0.6

scaleUp = cv2.resize(source, None, fx=scaleX*3, fy=scaleY*3, interpolation = cv2.INTER_LINEAR)
scaleDown = cv2.resize(source, None, fx=scaleX, fy=scaleY, interpolation = cv2.INTER_LINEAR)

crop = source[50:150, 20:200]

cv2.imshow("Original Image", source)
cv2.imshow("Scaled Up", scaleUp)
cv2.imshow("Scaled Down", scaleDown)
cv2.imshow("Cropped Image", crop)

cv2.waitKey(0)