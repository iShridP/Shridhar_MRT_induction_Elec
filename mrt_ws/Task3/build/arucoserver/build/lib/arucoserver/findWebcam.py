import cv2

Lcam = []

# Test multiple indices to find connected webcams
for i in range(10):  # Check indices
    cap = cv2.VideoCapture(i)
    if cap.isOpened():
        Lcam.append(i)
        cap.release()

if len(Lcam) == 0:
    print("No Cameras found")

else: 
    print("Cameras found at index:", Lcam)
