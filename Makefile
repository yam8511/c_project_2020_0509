Sample := Sample.txt
Q1_DIR := 1_Coprimes
Q2_DIR := 2_Sweet_Child_Makes_Trouble
Q3_DIR := 3_Polygon
Q5_DIR := 5_Geometry_Paradox
Q6_DIR := 6_Ubiquitous_Religions
Q7_DIR := 7_The_jackpot
Q8_DIR := 8_Luggage
Q9_DIR := 9_Rock_Paper_Scissors_Tournament
Q10_DIR := 10_The_Swallowing_Ground
Q11_DIR := 11_Cheapest_Base
Q12_DIR := 12_Shoemakers_Problem
Q14_DIR := 14_Josephs_Cousin
Q15_DIR := 15_Page_Hopping
Q16_DIR := 16_Bee_Maja
Q18_DIR := 18_Magic_Numbers
Q19_DIR := 19_Graph_Connectivity
Q20_DIR := 20_Humble_Numbers

all: Q1 Q2 Q5 Q6 Q7 Q9 Q10 Q11 Q12 Q14 Q15 Q16 Q18 Q19 Q20 clean

$(Q1_DIR).o:
	gcc -o ./${Q1_DIR}.o ./$(Q1_DIR)/main.c

Q1: $(Q1_DIR).o
	cat ./${Q1_DIR}/${Sample} | ./${Q1_DIR}.o


$(Q2_DIR).o:
	gcc -o ./${Q2_DIR}.o ./$(Q2_DIR)/main.c

Q2: $(Q2_DIR).o
	cat ./${Q2_DIR}/${Sample} | ./${Q2_DIR}.o

$(Q3_DIR).o:
	gcc -o ./${Q3_DIR}.o ./$(Q3_DIR)/main.c

Q3: $(Q3_DIR).o
	cat ./${Q3_DIR}/${Sample} | ./${Q3_DIR}.o

$(Q5_DIR).o:
	gcc -o ./${Q5_DIR}.o ./$(Q5_DIR)/main.c

Q5: $(Q5_DIR).o
	cat ./${Q5_DIR}/${Sample} | ./${Q5_DIR}.o

$(Q6_DIR).o:
	gcc -o ./${Q6_DIR}.o ./$(Q6_DIR)/main.c

Q6: $(Q6_DIR).o
	cat ./${Q6_DIR}/${Sample} | ./${Q6_DIR}.o

$(Q7_DIR).o:
	gcc -o ./${Q7_DIR}.o ./$(Q7_DIR)/main.c

Q7: $(Q7_DIR).o
	cat ./${Q7_DIR}/${Sample} | ./${Q7_DIR}.o

$(Q8_DIR).o:
	g++ -o ./${Q8_DIR}.o ./$(Q8_DIR)/main.cpp

Q8: $(Q8_DIR).o
	cat ./${Q8_DIR}/${Sample} | ./${Q8_DIR}.o

$(Q9_DIR).o:
	gcc -o ./${Q9_DIR}.o ./$(Q9_DIR)/main.c

Q9: $(Q9_DIR).o
	cat ./${Q9_DIR}/${Sample} | ./${Q9_DIR}.o

$(Q10_DIR).o:
	gcc -o ./${Q10_DIR}.o ./$(Q10_DIR)/main.c

Q10: $(Q10_DIR).o
	cat ./${Q10_DIR}/${Sample} | ./${Q10_DIR}.o

$(Q11_DIR).o:
	gcc -o ./${Q11_DIR}.o ./$(Q11_DIR)/main.c

Q11: $(Q11_DIR).o
	cat ./${Q11_DIR}/${Sample} | ./${Q11_DIR}.o

$(Q12_DIR).o:
	gcc -o ./${Q12_DIR}.o ./$(Q12_DIR)/main.c

Q12: $(Q12_DIR).o
	cat ./${Q12_DIR}/${Sample} | ./${Q12_DIR}.o

$(Q14_DIR).o:
	gcc -o ./${Q14_DIR}.o ./$(Q14_DIR)/main.c

Q14: $(Q14_DIR).o
	cat ./${Q14_DIR}/${Sample} | ./${Q14_DIR}.o

$(Q15_DIR).o:
	gcc -o ./${Q15_DIR}.o ./$(Q15_DIR)/main.c

Q15: $(Q15_DIR).o
	cat ./${Q15_DIR}/${Sample} | ./${Q15_DIR}.o

$(Q16_DIR).o:
	gcc -o ./${Q16_DIR}.o ./$(Q16_DIR)/main.c

Q16: $(Q16_DIR).o
	cat ./${Q16_DIR}/${Sample} | ./${Q16_DIR}.o

$(Q18_DIR).o:
	gcc -o ./${Q18_DIR}.o ./$(Q18_DIR)/main.c

Q18: $(Q18_DIR).o
	cat ./${Q18_DIR}/${Sample} | ./${Q18_DIR}.o

$(Q19_DIR).o:
	gcc -o ./${Q19_DIR}.o ./$(Q19_DIR)/main.c

Q19: $(Q19_DIR).o
	cat ./${Q19_DIR}/${Sample} | ./${Q19_DIR}.o

$(Q20_DIR).o:
	gcc -o ./${Q20_DIR}.o ./$(Q20_DIR)/main.c

Q20: $(Q20_DIR).o
	cat ./${Q20_DIR}/${Sample} | ./${Q20_DIR}.o

clean:
	rm *.o || exit 0
