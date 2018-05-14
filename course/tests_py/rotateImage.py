import cv2

source = cv2.imread('tests/dog.jpg', 1)

dim = source.shape

rotationAngle = -30
scaleFactor = 1

rotationMatriz = cv2.getRotationMatrix2D((dim[0]/2, dim[1]/2), rotationAngle, scaleFactor)

print rotationMatriz

result = cv2.warpAffine(source, rotationMatriz, (dim[1], dim[0]))

cv2.imshow("Original", source)
cv2.imshow("Rotated Image", result)

cv2.waitKey(0)