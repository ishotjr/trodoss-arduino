#define MAP_PATTERN_COUNT 29
#define MAP_ROOM_COUNT 64
#define MAP_WIDTH 8
#define MAP_HEIGHT 8

//map pattern data
PROGMEM prog_uchar map_pattern_data[] = {
1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 0, 0, 0, 0, 1, 1,
1, 0, 0, 0, 0, 0, 0, 1,
1, 0, 0, 0, 0, 0, 0, 0,
1, 1, 1, 0, 0, 1, 1, 1,
1, 0, 0, 1, 0, 0, 0, 1,
2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 0, 0, 0, 0, 2, 2,
2, 0, 0, 0, 0, 0, 0, 2,
2, 0, 0, 0, 0, 0, 0, 0,
2, 2, 2, 0, 0, 2, 2, 2,
0, 0, 0, 0, 0, 0, 0, 1,
0, 0, 0, 0, 0, 0, 0, 0,
2, 0, 0, 2, 0, 0, 0, 2,
0, 0, 0, 0, 0, 0, 0, 2,
1, 0, 0, 3, 3, 0, 0, 0,
2, 2, 0, 0, 0, 0, 0, 0,
2, 0, 0, 0, 0, 0, 3, 3,
2, 0, 0, 0, 0, 3, 3, 3,
0, 0, 0, 0, 0, 0, 2, 2,
3, 3, 0, 0, 0, 0, 0, 2,
3, 3, 3, 0, 0, 0, 0, 2,
2, 3, 3, 3, 3, 3, 3, 3,
2, 2, 2, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3,
2, 2, 2, 2, 2, 2, 0, 2,
2, 0, 0, 0, 0, 0, 0, 3,
0, 0, 0, 0, 0, 0, 0, 3,
};

//map room data
PROGMEM prog_uchar map_room_data[] = {
0, 1, 2, 2, 2, 3, 3, 2, 2, 2, 1, 4, 
4, 1, 2, 2, 5, 2, 2, 5, 2, 2, 1, 4, 
4, 1, 2, 2, 2, 3, 3, 2, 2, 2, 1, 0, 
6, 7, 8, 8, 8, 9, 9, 8, 8, 8, 7, 6, 
6, 7, 8, 8, 8, 9, 9, 8, 8, 8, 7, 10, 
10, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 9, 9, 8, 8, 8, 7, 6, 
6, 7, 8, 8, 8, 9, 9, 8, 8, 8, 7, 6, 
0, 1, 2, 2, 2, 11, 11, 2, 2, 2, 2, 2, 
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 4, 
4, 1, 2, 2, 5, 12, 12, 5, 2, 2, 1, 0, 
6, 7, 8, 8, 13, 12, 12, 13, 8, 8, 7, 10, 
10, 7, 8, 8, 8, 12, 12, 8, 8, 8, 7, 6, 
6, 7, 8, 8, 13, 9, 9, 13, 8, 8, 7, 10, 
10, 7, 8, 8, 8, 14, 14, 8, 8, 8, 7, 6, 
6, 7, 8, 8, 13, 12, 12, 13, 8, 8, 7, 6, 
0, 1, 2, 2, 2, 15, 15, 2, 2, 2, 1, 4, 
4, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 4, 
4, 1, 2, 2, 5, 11, 11, 5, 2, 2, 1, 0, 
6, 7, 8, 8, 8, 12, 12, 8, 8, 8, 7, 6, 
6, 7, 8, 8, 8, 12, 12, 8, 8, 8, 7, 10, 
10, 7, 8, 8, 8, 12, 12, 8, 8, 8, 7, 6, 
6, 7, 8, 8, 8, 9, 9, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 14, 14, 8, 8, 8, 7, 6, 
6, 7, 8, 8, 8, 14, 14, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 10, 
10, 16, 9, 9, 9, 9, 9, 9, 17, 18, 18, 18, 
18, 18, 18, 18, 17, 12, 12, 9, 9, 9, 16, 6, 
6, 7, 8, 8, 13, 14, 14, 13, 8, 8, 7, 6, 
6, 7, 8, 8, 8, 14, 14, 8, 8, 8, 7, 10, 
10, 7, 8, 8, 13, 14, 14, 13, 8, 8, 7, 10, 
10, 7, 8, 8, 8, 8, 8, 8, 8, 8, 7, 6, 
6, 7, 8, 8, 8, 9, 9, 8, 8, 8, 7, 10, 
10, 7, 8, 8, 13, 8, 8, 13, 8, 8, 7, 10, 
10, 19, 14, 14, 14, 14, 14, 14, 20, 21, 21, 21, 
21, 21, 21, 21, 20, 14, 14, 14, 14, 14, 19, 6, 
6, 7, 8, 8, 8, 9, 9, 8, 8, 8, 7, 10, 
10, 7, 8, 8, 13, 8, 8, 13, 8, 8, 7, 10, 
10, 7, 8, 8, 8, 9, 9, 8, 8, 8, 7, 10, 
10, 16, 9, 9, 9, 9, 9, 9, 9, 9, 9, 22, 
0, 1, 2, 2, 2, 12, 12, 2, 2, 2, 1, 0, 
0, 1, 2, 2, 2, 3, 3, 2, 2, 2, 1, 4, 
4, 1, 2, 2, 5, 2, 2, 5, 2, 2, 1, 4, 
4, 1, 2, 2, 2, 15, 15, 2, 2, 2, 1, 0, 
6, 23, 16, 9, 9, 12, 12, 9, 9, 17, 18, 18, 
18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 
18, 18, 18, 18, 18, 24, 12, 9, 9, 9, 16, 6, 
6, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 25, 
0, 1, 2, 2, 2, 12, 12, 2, 2, 2, 1, 4, 
4, 1, 2, 2, 5, 11, 11, 5, 2, 2, 1, 4, 
4, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 0, 
0, 1, 2, 2, 2, 11, 11, 2, 2, 2, 1, 4, 
10, 19, 14, 14, 14, 14, 14, 14, 14, 20, 21, 21, 
21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 
21, 21, 21, 21, 21, 20, 14, 14, 14, 14, 19, 26, 
6, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 25, 
0, 1, 2, 2, 5, 11, 11, 5, 2, 2, 1, 4, 
4, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 0, 
0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 4, 
10, 7, 8, 8, 8, 8, 8, 8, 8, 8, 7, 10, 
10, 7, 8, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
27, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 25};