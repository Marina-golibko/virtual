# hfcal.o: hfcal_UK.c
# 	gcc -c hfcal_UK.c -o hfcal.o

# libhfcal.so: hfcal.o
# 	gcc -shared hfcal.o -o /usr/lib/libhfcal.so

# elliptical.o: elliptical.c libhfcal.so
# 	gcc -I\include -c elliptical.c -o elliptical.o

# elliptical: elliptical.o libhfcal.so
# 	gcc elliptical.o -L/usr/lib -lhfcal -o elliptical

hfcal.o: hfcal.c
	gcc -c -fPIC hfcal.c -o hfcal.o

libhfcal.so: hfcal.o
	gcc -shared hfcal.o -o /usr/lib/libhfcal.so

elliptical.o: elliptical.c libhfcal.so
	gcc -I\include -c elliptical.c -o elliptical.o

elliptical: elliptical.o libhfcal.so
	gcc elliptical.o -L/usr/lib -lhfcal -o elliptical