void minArr(int mas[], int size, int& min, int& pos_min) {
	min = mas[0];
	pos_min = 0;
	for (int i = 1; i < size; i++) {
		if (mas[i] < min) {
			min = mas[i];
			pos_min = i;
		}
	}

}