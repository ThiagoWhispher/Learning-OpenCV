import numpy as np
import cv2

img = cv2.imread('tests/dog.jpg', 0)

img_copy = img.copy()

cropped = img[100:150, 100:250]

imgRows = img.shape[0]
imgCols = img.shape[1]

print imgRows, imgCols

cv2.imshow("Image", img)
cv2.imshow("Image cropped", cropped)

cv2.waitKey(0)