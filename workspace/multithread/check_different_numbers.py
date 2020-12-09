#!/usr/bin/env	python3

import sys

if __name__ == "__main__":
	s = set()
	count = 0
	repeated_elements = []
	with open(sys.argv[1],"r") as io:
		lines = io.readlines()
		for line in lines:
			count = count + 1
			num = int(line.rstrip())
			prec_len = len(s)
			s.add(num)
			if prec_len == len(s):
				repeated_elements.append(num)

	if len(s) == count:
		print("All elements are different")
	else:
		print(f"There are some repeated elements\n{repeated_elements}")