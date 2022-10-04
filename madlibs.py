'''
# Ada 3 cara untuk memanggil variable

youtuber = "Mamen"

print("subscribe to " + youtuber)
print("subscribe to {}".format(youtuber))
print(f"subscribe to {youtuber}") <---- Kita akan menggunakan yang ini

gunanya tanda (\) dalam suatu kalimat di python adalah agar pas ngoding bisa mulai di paragraf
baru 
'''

adj = input("Adjective: ")
verb1 = input("Verb: ")
verb2 = input("Verb: ")
makanan = input("Makanan yang di sukai: ")

madlib = f"Nasi sangatlah {adj}! Makanan tersebut membuat saya kenyang karena saya suka \
dengan {verb1}. Makanannya menyehatkan dan {verb2}, apalagi kalau ditambah {makanan}"

print(madlib)